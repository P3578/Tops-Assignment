# Write a Python program to iterate over a list using a for loop.

lst_number = [1,2,3,6,5,6,4,9,8,10]

for i in lst_number:
    print(i,end=" ")
print ()

# Write a Python program to sort a list using both sort() and sorted().

# sort():
lst_number_copy = lst_number.copy()
lst_number_copy.sort()
print (lst_number_copy)

# sorted():
sorted(lst_number)
print (lst_number)

