# Write a Python program to apply the map() function to square a list of numbers.

lst_num = [1,2,3,4,5,6]
def squre (num):
    return num * num
squre_number = list(map(squre,lst_num))
print (squre_number)

# Write a Python program that uses reduce() to find the product of a list of numbers.

from functools import reduce
numbers = [1,2,3,4,5,6,7,8,9]
def product_of_list(numbers):
    return reduce(lambda x,y:x+y,numbers)
product = product_of_list(numbers)
print (product)

# Write a Python program that filters out even numbers using the filter() function.

number = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]

def is_even (number):
    return number % 2 == 0 
even_numbers = list(filter(is_even,number))
print (even_numbers)
