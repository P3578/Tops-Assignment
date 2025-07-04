# Write Python programs to demonstrate different types of inheritance (single, multiple, multilevel, etc.). 
class Grandparent:
    def greet(self):
        print ("good morning from grandparent class")

class Father:
    def sayhello(self):
        print ("good morning from father class")

# single :

class Parent(Grandparent):
    def msg(self):
        print ("good morning from parent class")

# mutli level: 

class Grandchild(Parent):
    pass

# multiple :

class Child(Grandparent,Father):
    pass

# Hierarchical :

class Mother(Grandparent):
    pass
class Grandmother(Grandparent):
    pass

p1 = Parent()
p1.greet()
p2 = Grandchild()
p2.msg()
p2.greet()
p3 = Child()
p3.greet()
p3.sayhello()
p4 = Mother()
p4.greet()
p5 = Grandmother()
p5.greet()