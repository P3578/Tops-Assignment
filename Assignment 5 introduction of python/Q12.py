# print this pettern using nested for loop
# *
# * * 
# * * * 
# * * * * 
# * * * * *

num = int(input ("enter the number = "))
for i in range(num):
    for j in range (i+1):
        print ('*',end=" ")
    print ()