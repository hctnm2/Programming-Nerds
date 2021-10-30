import random
import secrets
import string



password_length = 10
possible_characters = "abcdefghijklmnopqrstuvwxyz1234567890!@#$%&*"




def passGen():
	random_character_list = [random.choice(possible_characters) for i in range(password_length)]
	random_password = "".join(random_character_list)
	ranPass = random_password
	randomp = 'Random Password::\n' + ranPass
	return randomp


print(passGen())
