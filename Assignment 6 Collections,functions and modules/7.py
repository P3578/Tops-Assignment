# Write a Python program to update a value in a dictionary.

dict_number = {1:'one',2:'two',3:'three',4:'four'}
print (dict_number)

dict_number[2]='five'
print (dict_number)

# Write a Python program to merge two lists into one dictionary using a loop.

lst_num1 = [1,2,3,6,5]
lst_num2 = [6,8,4,5,9]
dict_num = {}

for i in range(len(lst_num1)):
    dict_num[lst_num1[i]]=lst_num2[i]
print (dict_num)
