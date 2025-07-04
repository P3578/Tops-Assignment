# Write a Python program to connect to an SQLite3 database, create a table, insert data, 
# and fetch data. 
import sqlite3
# connecting to sqlite:
conn = sqlite3.connect("person.db")
# creating a cursor object using cursor()  method:
cursor = conn.cursor()
# creating table person:
sql = '''CREATE TABLE PERSON(
ID INTEGER PRIMARY KEY AUTOINCREMENT,
NAME TEXT,
AGE INT)'''
cursor.execute(sql)
# commit your changes in the database:
conn.commit()
# insert data in table person :
cursor.execute("insert into person (name,age) values ('parth',30)")
cursor.execute("insert into person (name,age) values ('dip',25)")
cursor.execute("insert into person (name,age) values ('suraj',22)")
# commit your changes in the database:
conn.commit()
# veiw all data :
c= cursor.execute("select * from person")
for i in c:
    print (i)
# update data in table :
cursor.execute("update person set name ='shivani'where id=5")
conn.commit()
# veiw all data :
c= cursor.execute("select * from person")
for i in c:
    print (i)
# delete data from table :
cursor.execute("delete from person where id = 9")
conn.commit()
# veiw all data :
c= cursor.execute("select * from person")
for i in c:
    print (i)
# input data from user :
name = input ("enter the name of person = ")
age = int(input ("enter the age of person = "))
cursor.execute("insert into person (name,age) values (?,?)",(name,age))
conn.commit()
# view all using fatchall() command:
row = cursor.fetchall()
cursor.execute("select * from person")
print (cursor.fetchall())