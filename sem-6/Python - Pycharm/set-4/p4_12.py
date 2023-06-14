str_list = [str(s) for s in input("Enter the list : ").split()]
n = int(input("Enter the value of n : "))
str_list = [x for x in str_list if len(x) > n]
print(str_list)