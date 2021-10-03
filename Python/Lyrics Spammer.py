import lyricsgenius,pyautogui,time
Fileobject = open("Lyrics_1.txt","w")
genius = lyricsgenius.Genius('lyricsgeniusapikeyhere')
print("Input Song Name")
SongName = input()
print("Input Artist Name")
Artist = input()
song = genius.search_song(SongName, Artist)
L=song.lyrics
#print(L)
#Fileobject.write("hello \n")
with open('Lyrics_1.txt','w', encoding='utf8') as f:
    f.write(L)

print("Ready for Typing......OwO")  
time.sleep(5)
f = open("Lyrics_1.txt",'a+')
for word in f:
    pyautogui.typewrite(word)
    pyautogui.press("enter")
    time.sleep(1.2)
  
