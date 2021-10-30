import random
import secrets
import string


def tokenGen():
	ranToken = secrets.token_hex(32)
	tokenn = 'Random Token::\n' + ranToken
	return tokenn

print(tokenGen())
