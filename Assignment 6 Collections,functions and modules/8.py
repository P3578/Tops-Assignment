# Write a Python program to create a function that takes a string as input and prints it.

def str_demo ():
    str1 = input("enter the string = ")
    return str1
print (str_demo())

# Write a Python program to create a calculator using functions.

def sum (number1,number2):
    answer = number1 + number2
    return answer
def sub (number1,number2):
    answer = number1 - number2
    return answer
def multi (number1,number2):
    answer = number1 * number2
    return answer
def div (number1,number2):
    answer = number1 / number2
    return answer 
flag = True
while flag:
    print ("1. addition \n2. subtrection \n3. multiplication \n4. division\n5. exit")
    choise = int(input ("enter the choise = "))
    if choise == 1 :
        num1 = int (input ("enter the number = "))
        num2 = int (input ("enter the number = "))
        print (sum(num1,num2)) 
    elif choise == 2 :
        num1 = int (input ("enter the number = "))
        num2 = int (input ("enter the number = "))
        print (sub(num1,num2))
    elif choise == 3 :
        num1 = int (input ("enter the number = "))
        num2 = int (input ("enter the number = "))
        print (multi(num1,num2))
    elif choise == 4 : 
        num1 = int (input ("enter the number = "))
        num2 = int (input ("enter the number = "))
        print (div(num1,num2))
    elif choise == 5 :
        flag = False
