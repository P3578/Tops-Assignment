# Write a Python program to search for a word in a string using re.search().

import re 
str1 = "Tops technologies are provide best eduction for IT filed"
pattern = "for"
ans = re.search("Tops",str1)
print (ans)
ans = re.search("are",str1)
print (ans)
ans = re.search("IT",str1)
print (ans)
ans = re.search(pattern,str1)
print (ans)
ans = re.search("o",str1)
print (ans)


# Write a Python program to match a word in a string using re.match().

ans = re.match("Tops",str1)
print (ans) 
ans = re.match("o",str1)
print (ans)
ans = re.match("T",str1)
print (ans)
