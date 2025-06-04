# Write a Python program that demonstrates the correct use of indentation, comments, and
# variables following PEP 8 guidelines.

#Indentation:
#Code blocks within the if statements, def functions, and main function are correctly indented using 4 spaces per level.

number = 25 
"""if the number is bigeer then 20 output is print all the three lines 
    otherwise print only last line"""
if number > 20 :
    print ("your eligible for playing match")
    print ("Because, you are {} years old".format(number))
print ("Hello Goodmorning")

#Comments:
#Comments are used sparingly but effectively to explain complex logic or decisions, and they are formatted correctly with a leading # and a space. 

# variables :
"""
1) Snake Case:
This convention involves using lowercase letters and underscores to separate words in variable and function names. For example, my_variable, calculate_total, or get_user_data. 
2) Camel Case (for Classes):
Class names should use camel case, where each word within the name is capitalized. For example, MyClass, UserProfile, or DataModel. 
* Why PEP 8?
PEP 8 aims to make Python code more consistent and easier to read and understand. This is especially important for collaborative projects, where multiple developers might be working on the same code. 
3) Other PEP 8 Guidelines:
PEP 8 also covers indentation (using four spaces), maximum line length (79 characters), and whitespace usage. 
"""

