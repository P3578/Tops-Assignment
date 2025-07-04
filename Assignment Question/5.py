# Write a Python program to handle exceptions in a simple calculator (division by zero, invalid
# input).
try :
    num1 = int(input("enter the number = "))
    num2 = int(input("enter the number = "))
    ans = num1 / num2
except ZeroDivisionError :
    print ("invalid input")

# Write a Python program to demonstrate handling multiple exceptions.

try :
    num1 = int(input("enter the number = "))
    num2 = int(input("enter the number = "))
    ans = num1 / num2
except ZeroDivisionError : 
    print ("in zerodivision error")
except ValueError :
    print ("invalid input")
else :
    print ("in else block")
finally :
    print ("bye bye")