# Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if.

age = int (input ("enter the age = "))
weight = float (input ("enter the weight = "))

if age > 20 :
    if weight >= 50 :
        print ("You are eligible to donate blood")
    else : 
        print ("You are under weight")
else :
    print ("You are not eligible to donate blood")