n = int(input("Enter n: "))
myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
newList = []
for i in range(n): newList.append(myList[i::n])
print(newList)
