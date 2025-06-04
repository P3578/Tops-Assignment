# write a python program to find a specific string in the list using simple for loop and if condition.
lst_fruit = ['apple','banana','mango']
print (lst_fruit)
str_name = input ("enter the fruit name = ")
for i in lst_fruit:
    if i == str_name:
        print (i)
        break
else :
    print ("wrong input")