# Write a Python program to create a class and access its properties using an object.

class A :
    def __init__(self,name):
        self.name = name
    def display(self):
        print ("in display method")        
objparth = A("parth")
objparth.display()