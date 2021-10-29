import random
import math

play_again = True
while play_again is True:
    boolean = False
    lower = int(input("Enter your lower limit\n"))
    upper = int(input("Enter your upper limit\n"))

    if upper < lower:
        print("Your upper limit CANNOT BE less then your lower limit smh")
        continue

    if upper == lower:
        print("Think about it.\nIf your lower limit is the same as the upper limit, you can't really guess anything.")
        continue
    if lower < 0:
        print("Your limits can only be positive numbers.")
        continue
    if upper > 10000:
        print("Your upper limit can only be equal to or less than 10000.")
        continue
    number = random.randint(lower, upper)
    chances = round(math.log(upper - lower + 1, 2))
    print(f"You have {chances} chances to guess the number. Good Luck!")
    while True:
        if chances == 0:
            break

        chances -= 1

        guess = int(input("Enter your guessed number:\n"))

        if number == guess:
            print(f"You have guessed the number!\nIt was {number}")
            boolean = True
            break

        elif number > guess:
            print(f"You guessed too low! You have {chances} remaining!")

        elif number < guess:
            print(f"You guessed too high! You have {chances} remaining!")

    if boolean is False:
        print(f"Better luck next time! The number was {number}")

    play_again = input("Would you like to play again? y/n\n")
    if 'y' in play_again.lower():
        play_again = True
    else:
        play_again = False
