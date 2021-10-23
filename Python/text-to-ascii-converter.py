from termcolor import cprint
from pyfiglet import figlet_format

data = input("Please enter the text that you want to convert: ")
cprint(figlet_format(data, font="slant"), attrs=["bold"])
