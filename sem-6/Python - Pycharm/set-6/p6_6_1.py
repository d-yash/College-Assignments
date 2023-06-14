def cube(num):
    return num**3


given_list = [1, 2, 3, 4, 5]
cubed_list = list(map(cube, given_list))
print("Using map/filter with function : ", cubed_list)

cubed_list = list(map(lambda x: x**3, given_list))
print("Using map/filter with lambda : ", cubed_list)


cubed_list = [num**3 for num in given_list]
print("Using List Comprehension : ", cubed_list)
