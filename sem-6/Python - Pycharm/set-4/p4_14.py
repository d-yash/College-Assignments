li = [int(s) for s in input("Enter the list: ").split()]
li = [x for x in li if x%2!=0]
print(li)