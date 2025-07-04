# Write a Python program to read the contents of a file and print them on the console.
file = open("my_file.txt","w")
file.write("hello world!")
file.close()
file = open("my_file.txt","r")
print (file.read())

# Write a Python program to write multiple strings into a file.

file = open("my_file2.txt","w")
file.writelines("hello world! \ngood morning \nhave a nice day")
file.close()