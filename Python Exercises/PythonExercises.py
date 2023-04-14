# file = notebook.txt

# while True:
		
# 	print("(1) Read the notebook")
# 	print("(2) Add note")
# 	print("(3) Empty the notebook")
# 	print("(4) Quit")
	
# 	selection = str(input("Please select one: "))
	
# 	if selection == "1":
# 		open(file, 'r')
# 		contentOfNotebook = file.readline()
# 		for x in file:
# 			print(x)
			
# 	elif selection == "2":
# 		open(file, 'w')
# 		textToAdd = input("Write a new note: ")
# 		file.write(textToAdd + "\n")
		
# 	elif selection == "3":
# 		file.write("")
	
# 	elif selection == "4":
# 		print("Notebook shutting down, thank you.")
# 		file.close()
# 		break
	
# 	else:
# 		print("Incorrect selection.")
##this 
# filename = "notebook.txt"

# while True:
#     print("(1) Read the notebook")
#     print("(2) Add note")
#     print("(3) Empty the notebook")
#     print("(4) Quit\n")
    
#     choice = input("Please select one: ")
    
#     if choice == "1":               ##################
#         with open(filename, 'r') as file:
#             file_contents = file.read()
#             print(file_contents)

#     elif choice == "2":
#         new_note = input("Write a new note: ")
#         with open(filename, 'a') as file:
#             file.write(new_note + "\n")
#     elif choice == "3":
#         with open(filename, 'w') as file:
#             file.write("")
#             print("Notes deleted.")####################
#     elif choice == "4":
#         print("Notebook shutting down, thank you.")
#         break
#     else:
#         print("Incorrect selection.")

# def poweroftwo(number):
# 	result = 2**number
# 	print("The result is", result)

# input = int(input("Give a number: "))
# poweroftwo(input)


# -*- coding: cp1252 -*-

# def main():
#     while True:
#         userInput = input("Write something (quit ends): ")
#         if userInput == "quit":
#             break
#         tester(userInput)
	
# def tester(givenString):
# 	if givenString == "quit":
# 		print("quitting")
# 	elif len(givenString) < 10:
# 		print("Too short")
# 	elif 'X' in givenString:
# 		print("X SPOTTED")
# 		print(givenString)
# 	else:
# 		print(givenString)
		
# if __name__ == "__main__":
#     main()

# def function(int1, int2):
#     pass

# function(2)

# import random

# rounds = 0
# wins = 0
# ties = 0

# while True:
# 	choice = input("Foot, Nuke or Cockroach? (Quit ends): ")
	
# 	if choice == "Quit":
# 		print(f"You played {rounds} rounds, and won {wins} rounds, playing tie in {ties} rounds.")
# 		break
		
# 	computerChose = random.randint(0-2)	#foot, nuke, cockroach
# 	if computerChose == 0:
# 		print("Computer chose: Foot")
# 		rounds += 1
# 		if choice == "Foot":
# 			print("Both LOSE!")
# 			ties += 1
# 		elif choice == "Nuke":
# 			wins += 1
# 		else:
# 			print("You LOSE!")
# 	elif computerChose == 1:
# 		print("Computer chose: Foot")
# 		rounds += 1
# 		if choice == "Foot":
# 			print("You WIN!")
# 			wins += 1
# 		elif choice == "Nuke":
# 			print("Both LOSE!")
# 			ties += 1
# 		else:
# 			print("You LOSE!")
# 	else:
# 		print("Computer chose: Foot")
# 		rounds += 1
# 		if choice == "Foot":
# 			print("You WIN!")
# 			wins += 1
# 		elif choice == "Nuke":
# 			print("You LOSE!")	
# 		else:
# 			print("Both LOSE!")
# 			ties += 1
	

# -*- coding: cp1252 -*-
# import random

# rounds = 0
# wins = 0
# ties = 0

# while True:
# 	choice = input("Foot, Nuke or Cockroach? (Quit ends): ")
	
# 	if choice == "Quit":
# 		print(f"You played {rounds} rounds, and won {wins} rounds, playing tie in {ties} rounds.")
# 		break
		
# 	computerChose = random.randint(0,2)	#foot, nuke, cockroach
# 	if computerChose == 0:
# 		rounds += 1
# 		if choice == "Foot":
# 			print("Both LOSE!")
# 			ties += 1
# 		elif choice == "Nuke":
# 			wins += 1
# 		else:
# 			print("You LOSE!")
# 	elif computerChose == 1:
# 		rounds += 1
# 		if choice == "Foot":
# 			print("You WIN!")
# 			wins += 1
# 		elif choice == "Nuke":
# 			print("Both LOSE!")
# 			ties += 1
# 		else:
# 			print("You LOSE!")
# 	else:
# 		rounds += 1
# 		if choice == "Foot":
# 			print("You WIN!")
# 			wins += 1
# 		elif choice == "Nuke":
# 			print("You LOSE!")	
# 		else:
# 			print("Both LOSE!")
# 			ties += 1
	

# # -*- coding: cp1252 -*-

# import math

# print("Calculator")

# number1 = int(input("Give the first number: "))
# number2 = int(input("Give the second number: "))

# while True:
#     print("(1) +\n(2) -\n(3) *\n(4) /\n(5)sin(number1/number2\n(6)cos(number1/number2)\n(7)Change numbers\n(8)Quit")
#     print(f"Current numbers: {number1} {number2}")
#     selection = input("Please select something (1-6): ")

#     if selection == "1":
#         print(f"The result is: {number1 + number2}")
#     elif selection == "2":
#         print(f"The result is: {number1 - number2}")
#     elif selection == "3":
#         print(f"The result is: {number1 * number2}")
#     elif selection == "4":
#         print(f"The result is: {number1 / number2}")
#     elif selection == "5":
# 	    print(f"The result is: {math.sin(number1 / number2)}")
#     elif selection == "6":
#         print(f"The result is: {math.cos(number1 / number2)}")
#     elif selection == "7":
#         number1 = int(input("Give the first number: "))
#         number2 = int(input("Give the second number: ")) 
#     elif selection == "8":
#         print("Thank you!")
#         break
#     else:
#         print("Selection was not correct.")


# def askNumber():
# 	while True:
# 		try:
# 			number = int(input("Give a number: "))
# 			return number
# 		except ValueError:
# 			print("This input is invalid")

# number1 = askNumber()
# number2 = askNumber()

# print(number1, number2)

# -*- coding: cp1252 -*-

# import time

# def checkFileName(nameToCheck):
#     try:
#         with open(nameToCheck, 'w') as checkedFile:
#             checkedFile.write()
#     except IOError:
#         if nameToCheck == "notebook.txt":
#             print("No default notebook was found, created one.")
#         else:
#             filename = nameToCheck


# filename = "notebook.txt"


# try:
#     with open(filename, 'r') as defaultFile:
#         defaultContents = defaultFile.read()
# except IOError:
#     print("No default notebook was found, created one.")


# while True:
    
#     print(f"Now using file {filename}")
#     print("(1) Read the notebook")
#     print("(2) Add note")
#     print("(3) Empty the notebook")
#     print("(4) Change the notebook")
#     print("(5) Quit\n")
    
#     choice = input("Please select one: ")
    
#     if choice == "1": 
#         with open(filename, 'r') as file:
#             file_contents = file.read()
#             print(file_contents)


#     elif choice == "2":
#         new_note = input("Write a new note: ")
#         with open(filename, 'a') as file:
#             file.write(new_note + ":::" + time.strftime("%X %x") +"\n")
#     elif choice == "3":
#         with open(filename, 'w') as file:
#             file.write("")
#             print("Notes deleted.")
			
#     elif choice =="4":
#         notebookName = input("Give the name of the new file: ")

#         try:
#             with open (notebookName, 'r') as newFile:
#                 newFileContents = newFile.read()
#                 filename = notebookName
#                 print()
#         except FileNotFoundError:
#             print("No notebook with that name detected, created one.")
#             with open(notebookName, 'w+') as file:
#                 file_contents = file.read()
#                 filename = notebookName

#     elif choice == "5":
#         print("Notebook shutting down, thank you.")
#         break
		
#     else:
#         print("Incorrect selection.")


# def Player(teamColour, points):
# 	teamColour = teamColour
# 	points = points
	
# bluePlayer = Player("Blue", 300)
# print(f"The {bluePlayer.teamColour} has {bluePlayer.points} points!")

# -*- coding: cp1252 -*-

# class Player:
#     def __init__(self, teamColour, points):
#         self.teamColour = teamColour
#         self.points = points

#     def goal(self):
#         self.points += 1

#     def tellscore(self):
#         print(f"I am {self.teamColour}, we have {self.points} points!")
	
# first_player = Player(input("What color do I get?: "), 0)
# second_player = Player(input("What color do I get?: "), 0)

# first_player.goal()
# first_player.goal()
# second_player.goal()

# first_player.tellscore()
# second_player.tellscore()

# -*- coding: cp1252 -*-

# class Customer:
#     name = "John Johnsson"
#     total = 1000
#     paymenttype = "Masterexpress"
#     number = "1234-5678-9012345"

#     def printout(self):
#         print("Name: ", self.name)
#         print("Total: ", self.total)
#         print("Payment type: ", self.paymenttype)
#         print("Card/Bill number: ", self.number)



# class ManageCustomer(Customer):
#     def addbill():
#         Customer.total += 50
    
#     def payment():
#         Customer.total -= 100


# def main():
#     person = ManageCustomer()
#     person.name = "Homer Griffin"
#     person.addbill()
#     person.payment()
#     person.payment()
#     person.printout()

# # if __name__ == "__main__":
#     main()


# -*- coding: cp1252 -*-

# colourList = ["Blue", "Red", "Yellow", "Green"]

# print(f"The first item in the list is: {colourList[0]}")
# print("The entire list printed one item a time:")
# for x in colourList:
#     print(x)


# -*- coding: cp1252 -*-
# shoppingList = []
# while True:
#     userInput = input("Would you like to\n(1)Add or\n(2)Remove items or\n(3)Quit?: ")
#     if userInput == "1":
#         shoppingList.append(input("What will be added?: "))
#     elif userInput == "2":
#         print(f"There are {len(shoppingList)} items in the list.")
#         toDelete = int(input("Which item is deleted?: "))
#         if toDelete >= 0 and toDelete < len(shoppingList):
#             del shoppingList[toDelete]
#         else:
#             print("Incorrect selection.")
#     elif userInput == "3":
#         print("The following items remain in the list: ")
#         for i in shoppingList:
#             print(i)
#         break
#     else:
#         print("Incorrect selection.")


# -*- coding: cp1252 -*-

# wordList = []

# with open("words.txt", 'r+') as file:
#     contents = file.readline()
#     for i in contents:
#         wordList.append(i)
# wordList.sort()
# print("Words in alphabetical order: ")
# for x in wordList:
#     print(x)

# -*- coding: cp1252 -*-

# -*- coding: cp1252 -*-

# priceList = [10,14,22,33,44,13,22,55,66,77]
# totalSum = 0

# print("Supermarket\n===========")

# while True:
# 	selection = int(input("Please select product (1-10) 0 to Quit: "))
# 	if selection == 0:
# 		print(f"Total: {totalSum}")
# 		paymentAmount = float(input("Payment: "))
# 		print(f"Change: {paymentAmount - totalSum}")
# 		break
# 	elif selection > 0 and selection <= 10:
# 		print(f"Product: {selection} Price: {priceList[selection - 1]}")
# 		totalSum += priceList[selection - 1]
# 	else:
# 		print("Incorrect selection.")

# -*- coding: cp1252 -*-


# class Player:
#     def __init__(self, teamColour, points):
#         self.teamColour = teamColour
#         self.points = points

# -*- coding: cp1252 -*-

# class Employee:
#     def __init__(self, id, name):
#         self.id = id
#         self.name = name

# employees = []
# id = 1

# while True:
#     name = input("Enter employee name (or 0 to finish): ")
#     if name == 0:
#         break
#     addedEmployee = Employee(id, name)
#     employees.append(addedEmployee)
#     id += 1

# print("Employees:")
# for emp in employees:
#     print(f"{emp.id}: {emp.name}")

# import pickle
# import time

# # try to load the existing notebook, if it exists
# try:
#     with open('notebook.dat', 'rb') as file:
#         notebook = pickle.load(file)
#     print("Notebook loaded.\n")
# except (FileNotFoundError, pickle.UnpicklingError):
#     notebook = []
#     print("No default notebook was found, created one.\n")

# while True:
#     print("(1) Read the notebook")
#     print("(2) Add note")
#     print("(3) Edit a note")
#     print("(4) Delete a note")
#     print("(5) Save and quit\n")
#     choice = input("Please select one: ")

#     if choice == "1":
#         print()
#         if not notebook:
#             print("The notebook is empty.\n")
#         else:
#             for i, note in enumerate(notebook):
#                 print(f"{i+1} {note}")
#             print()

#     elif choice == "2":
#         note = input("Write a new note: ")
#         timestamp = time.strftime("%H:%M:%S %d/%m/%y", time.localtime())
#         notebook.append(f"{note}::{timestamp}")
#         print("Note added.\n")

#     elif choice == "3":
#         print()
#         if not notebook:
#             print("The notebook is empty.\n")
#         else:
#             for i, note in enumerate(notebook):
#                 print(f"{i+1} {note}")
#             print()
#             selection = input("Which note do you want to edit? ")
#             if not selection.isdigit() or int(selection) < 1 or int(selection) > len(notebook):
#                 print("Invalid selection.\n")
#             else:
#                 note = input("Rewrite the note: ")
#                 timestamp = time.strftime("%H:%M:%S %d/%m/%y", time.localtime())
#                 notebook[int(selection)-1] = f"{note}::{timestamp}"
#                 print("Note edited.\n")

#     elif choice == "4":
#         print()
#         if not notebook:
#             print("The notebook is empty.\n")
#         else:
#             for i, note in enumerate(notebook):
#                 print(f"{i+1} {note}")
#             print()
#             selection = input("Which note do you want to delete? ")
#             if not selection.isdigit() or int(selection) < 1 or int(selection) > len(notebook):
#                 print("Invalid selection.\n")
#             else:
#                 deleted_note = notebook.pop(int(selection)-1)
#                 print(f"Deleted note {deleted_note}\n")

#     elif choice == "5":
#         print("Notebook shutting down, thank you.")
#         with open('notebook.dat', 'wb') as file:
#             pickle.dump(notebook, file)
#         break

#     else:
#         print("Invalid choice.\n")