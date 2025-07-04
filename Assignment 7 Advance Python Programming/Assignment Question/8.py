# Write Python programs to demonstrate method overloading and method overriding. 
# overriding :
class A:
    def greet(self):
        print ("good morning from A ")
class B(A):
    def greet(self):
        print ("good morning from B")
objB = B()
objB.greet()

# opreator overloading example:
class Mathematics:
    def __init__(self,x):
        self.x = x
    def __add__(self,other):
        return self.x + other.x
a = Mathematics(12)
b = Mathematics(22)

print (a + b)