# Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder.
per = float(input ("enter the percentage = "))

if per > 90 :
    print ("Grade = A")
elif per > 75 :
    print ("Grade = B")
elif per > 55 :
    print ("Grade = C")
elif per > 35 :
    print ("Grade = D")
else :
    print ("Sorry! Your are fail")