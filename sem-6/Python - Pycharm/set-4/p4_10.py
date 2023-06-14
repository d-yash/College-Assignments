li = [str(s) for s in input("Enter the list : ").split()]
count = 0
for i in li:
    if len(i) >= 2 and i[0] == i[-1]:
        count += 1
print(f"Strings : {count}")