my_list = [1, [2,3], [4, 5, [6, 7]]]
fList = []

def flattenList(my_list):
    for element in my_list:
        if type(element) is list:
            flattenList(element)
        else:
            fList.append(element)

flattenList(my_list)
print("Flatten list:", fList)
