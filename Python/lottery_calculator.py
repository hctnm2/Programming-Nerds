# TEORETYCZNY MIESIECZNY PRZYCHOD PO WYGRANIU W LOTERII
print("Welcome. This app will calculate some hypothetical values if you would won a lottery. "
      "\nOf course, values showed down here are just estimations.")
name = input("Introduce yourself. ")
age1 = input("Type in your age. ")
age2 = input("Type in the retirement age for your country. ")
winnings = input("Type in how much money you \"won\". ")
salary = input("Type in your estimated monthly income. "
               "\nIf you are going to stop working after winning, type in \"0\". ")
question = input("Do you allow to store this data? \n If yes, type in \"yes\". If not, just press ENTER.")

if question == "yes":
    data = open("lottery.txt", "a")
    data.write("Name: " + name + "\nAge: " + age1 + "\nWinnings: " + winnings + " Estimated monthly income: " + salary + "\n")
    data.close()
    print("Data has been saved.")
else:
    print("No data was saved.")

print ("Calculating...")

age1 = int(age1)
age2 = int(age2)
winnings = float(winnings)
salary = float(salary)

age_diff = age2 - age1

salary_total = int(salary * 12 * age_diff + 0.5)

winnings_monthly = int(winnings / age_diff / 12 + 0.5)

income_total = int(winnings + salary_total + 0.5)
income_monthly = int(salary + winnings_monthly + 0.5)

print ("Your total income from work: " + str(salary_total))
print ("Your winnings split between months: " + str(winnings_monthly))
print ("Total income: " + str(income_total))
print ("Income monthly: " + str(income_monthly))

print("Thanks for using the app!")

input("To quit the app, press ENTER")
