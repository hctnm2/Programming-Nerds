import cv2 as cv
import numpy as np

known_distance = 40 
known_width = 14.3

def Focal_length(measured_dist,real_width,width_in_rf_image):
    focal_length = (width_in_rf_image*measured_dist)/(real_width)
    return focal_length

def Distance_finder(Focal_length,real_face_width,face_width_in_frame):
    distance = (real_face_width*Focal_length)/(face_width_in_frame)
    return distance

def face_data(frame):
    face_width = 0
    gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    haar_cascade = cv.CascadeClassifier(r'D:\Programming-Nerds\Python\haar_face.xml')
    faces = haar_cascade.detectMultiScale(gray,scaleFactor=1.1, minNeighbors=5)
    for (x,y,w,h) in faces:
            cv.rectangle(frame,(x,y),(x+w,y+h),(0,255,0),thickness=2)
            face_width = w
            # print("face width: ",w)
    return face_width

ref_image = cv.imread(r'D:\Programming-Nerds\Python\ref.jpg')
ref_image_face_width = face_data(ref_image)
Focal_length_found = Focal_length(known_distance,known_width,ref_image_face_width)
print(Focal_length_found)
capture = cv.VideoCapture(0)

while True:
    _,frame = capture.read()
    # cv.imshow('Video', gray)
    face_width_in_frame = face_data(frame)
    Distance = Distance_finder(Focal_length_found,known_width,face_width_in_frame)
    cv.putText(frame,f"Distance = {int(Distance)} cm",(50,50),cv.FONT_HERSHEY_PLAIN,4,(0,255,0),2)
    cv.imshow("Final",frame)
    if cv.waitKey(5) & 0xFF == ord('d'):
        break  # d is the kill swich here
capture.release()
capture.destroAllWindows
