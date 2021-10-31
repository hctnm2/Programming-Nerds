import requests
import pyttsx3
from bs4 import BeautifulSoup


engine=pyttsx3.init('sapi5')
voices=engine.getProperty("voices")
engine.setProperty("voice",voices[0].id)
rate=engine.getProperty("rate")
engine.setProperty("rate",125)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

URL = "https://www.worldometers.info/coronavirus/"
r = requests.get(URL)

soup = BeautifulSoup(r.content, 'html.parser')

data=soup.find_all('div' , class_="maincounter-number")

Total_cases=data[0].text.strip()
Deaths=data[1].text.strip() 
Recovered=data[2].text.strip()
print("Data Extracted!")

t="Total Corona Virus Cases in India are "+str(Total_cases)
d="Total Deaths: "+ str(Deaths)
r="Total Recovered Cases: "+str(Recovered)
print("Processing")



def main():
    speak("Welcome to Corona Virus Tracker created by Dhruv and edited by diipensu")

def numbers():
    main()
    speak(t)
    print(t)
    speak(d)
    print(d)
    speak(r)
    print(r)
    
    speak("If you wish to listen Data again enter 1 and to exit enter 0: ")
    x = input("If you wish to listen Data again enter 1 and to exit enter 0: ")
    if x== "1":
        numbers()
    else:
        speak("Thank YOU. Hope you have a good day.")
        exit()


numbers()
