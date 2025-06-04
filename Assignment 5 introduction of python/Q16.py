# write a python program to skip 'banana' in list using the continue statement. list=['apple','banana','mango']

lst = ['apple','banana','mango']

for i in lst:
    if i == 'banana':
        continue
    print (i)

# write a python program to stop the loop once 'banana' is found using the break statement.

for i in lst:
    if i == 'banana':
        break
    print (i)