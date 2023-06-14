li = [int(s) for s in input("Enter the list: ").split()]
li = list(set(li))
li.sort()
print(f"Second smalles element : {li[1]}")

