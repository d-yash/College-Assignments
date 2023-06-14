a={1,2}
b=set()
c=[1,2,3]
d={0,1}
e=set()
f1={0,1}
f2={2,3}
g={4,5,6}
h={1,2,3}

print(type(a))

if len(b)==0:
  b=list()
  for i in range(5):
    b.append(i)
  b=set(b)
  print(b)

c=set(c)
print(c)

d1=d
print(d1)

rg=int(input("enter range:"))
e=list(e)
for i in range(1,rg+1):
    e.append(i)
e=set(e)
print(e)

f2.update(f1)
print(f2)

for i in g:
    print(i)

h1=set(h)
h1.remove(1)
print("remove:",h1)
h2=set(h)
h2.discard(3)
print("discard:",h2)'''

'''a={1,2,3,4}
b={3,4,5,6}

print(a.difference(b))

print(a.intersection(b))

print(a.union(b))

print(a.symmetric_difference(b))

print(a.issubset(b))

print(a.issuperset(b))
'''
'''
from itertools import count


a=[1,1,2,3,4,4,5,6,6]
b=list()
def find_dups():
    for i in a:
        if a.count(i)>1:
           b.append(i)
    return b
c=set(find_dups())
print(c)
'''

'''
from ast import And
from operator import and_


class customer:
    def __init__(self,customerAcc,customerName,productNo,productCategory,price) :
        self.customerAcc= customerAcc #self.New name = current passing parameter name
        self.customerName=customerName
        self.productNum=productNo
        self.productCategory=productCategory
        self.price=price

a=[]
b=[]
a.append(customer(1,"ved",1,"bread",100))
a.append(customer(1,"ved",2,"butter",150))
a.append(customer(1,"ved",3,"milk",50))
a.append(customer(2,"dev",1,"bread",100))
a.append(customer(2,"dev",2,"butter",150))
a.append(customer(3,"deep",3,"milk",50))
a.append(customer(3,"deep",2,"butter",150))
a.append(customer(4,"vasu",1,"bread",100))
a.append(customer(4,"vasu",3,"milk",50))

for i in a:
    #print(i.customerAcc,i.customerName,i.productNo,i.productCategory,i.price)
     if i.productCategory=="bread":
        print(i.customerName)
print("Customers who have purchsed butter are:")
for i in a:
    #print(i.customerAcc,i.customerName,i.productNo,i.productCategory,i.price)
     if i.productCategory=="butter":
        print(i.customerName)

print("Customers who have purchsed butter and bread are:")
for i in a:

        print(i.customerName.inter)
   '''

'''
a=()
b=(1)
c=(1,2,3)
d=(1,"ved",("hi",2))

print(a)
print(b)
print(c)
print(d)
'''

"""  
a=(1,2,3)
b=(4,5)
print(a.count(2))
print(a.index(1))    
print(a.__add__(b))
print(a.__mul__(2))
print(a.__contains__(4))
"""

'''
a=(1,1,2,3,3,4)
b=set()
for i in a:
    if a.count(i)>1:
        b.add(i)
print(b)
   '''

# Let's create a dictionary, the functional way

# Create your dictionary class


# Let's create a dictionary, the functional way

# Create your dictionary class
'''
from select import select


class my_dictionary(dict):

# __init__ function
   def __init__(self):
	   self = dict()

   def add(self, key, value):

# Function to add key:value
	   self[key] = value



# Main Function
dict_obj = my_dictionary()

dict_obj.add(1, 'Vedant')
dict_obj.add(2, 'Khamar')

print(dict_obj)
'''

'''
from re import A
a={}
key=[1,2,3]
for i in key:
    a[i]=i*i
print(a)
'''

'''
a={
    1:"ved",
    2:"ant",
    3:"kha",
    4:"mar"

}
n=int(input("add a key:"))

if n in a.keys():
    print("key already present")
else:
    value=input("enter value:")
    a[n]=value
print(a)
'''
'''
a={
    1:"ved",
    2:"ant"
}
c={
    1:"yo"
}
b={
   "a":a,
   "c":c
}

print(b)
'''
'''
from re import A


a={
    1:"ved",
    2:"ant",
    3:"pro"


}
print("brefore removing key",a)
a.pop(1)
print("after removinf 1st key",a)
'''
'''
a=["hello","bro"]
b=[0,1]

c={}
for i in range(len(b)):
    c[i]=a[i]
print(c)'''

'''
from itertools import count


list=[
    a:={
        1:"ghost",
        2:"op"
    },
    b:={},
    c:={
        1:"ved",
        2:"ant"
    }
]
print()
for i in list:
    if len(i)==0:
        print("dictionary is empty")
    else:
        print(i)
     '''