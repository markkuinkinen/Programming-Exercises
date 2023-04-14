

# -*- coding: cp1252 -*-


# sourcefile = open("example.txt","r")

#  readfile = open("example.txt","r")
#   content = readfile.readlines()
# 
#   print(content)
#   for i in content:
#       print(i)
# 
#   readfile.close()

# handle = open("example.txt","r")
# filetext = handle.read()
# print(filetext)
# handle.close()

# filename = input("Give a file name: ")
# something = input("Write something: ")

# handle = open(filename, "w")

# handle.write(something)

# print(f"Wrote {something} to the file {filename}")

# from turtle import *
# color("red")
# begin_fill()
# pensize(3)
# left(50)
# forward(133)
# circle(50,200)
# right(140)
# circle(50,200)
# forward(133)
# end_fill()

# class Publication:
#     def __init__(self, name):
#         self.name = name

# class Book(Publication):
#     def __init__(self, name, author, page_count):
#         self.author = author
#         self.page_count = page_count
#         super().__init__(name)

#     def print_info(self):
#         print(f"{self.name} (author {self.author}, {self.page_count} pages)")


# class Magazine(Publication):
#     def __init__(self, name, chief_editor):
#         self.chief_editor = chief_editor
#         super().__init__(name)


#     def print_info(self):
#         print(f"{self.name} (chief editor {self.chief_editor})")


# #main
# book = Book("Compartment No. 6", "Rosa Liksom", 192)
# book.print_info()
# magazine = Magazine("Donald Duck", "Aki Hyyppä" )
# magazine.print_info()


class Car:

    #km_counter = 0

    def __init__(self, reg_number, max_speed, current_speed = 0, traveled_distance = 0):
        self.reg_number = reg_number
        self.max_speed = max_speed
        self.current_speed = current_speed
        self.traveled_distance = traveled_distance

    def accelerate (self, speed_change):
        self.current_speed += speed_change
        if self.current_speed > self.max_speed:
            self.current_speed = self.max_speed
        if self.current_speed < 0:
            self.current_speed = 0
    
    def drive(self, time):
        self.traveled_distance += time * self.max_speed
        print(f"{self.reg_number}: {self.traveled_distance} km")


class ElectricCar(Car):
    def __init__(self, reg_number, max_speed, battery_capacity):
        self.battery_capacity = battery_capacity
        super().__init__(reg_number, max_speed)

class GasolineCar(Car):
    def __init__(self, reg_number, max_speed, tank_volume):
        self.tank_volume = tank_volume
        super().__init__(reg_number, max_speed)


#main
electric = ElectricCar("E-15", 180, 52.5)
gasoline = GasolineCar("G-123", 165, 32.3)
electric.drive(3)
gasoline.drive(3)