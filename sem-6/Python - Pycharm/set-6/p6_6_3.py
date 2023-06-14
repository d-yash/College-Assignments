def is_positive(num):
    return num > 0


given_list = [1, -2, 3, -4, 5]
positive_list = list(filter(is_positive, given_list))
print("Using map/filter with function : ", positive_list)

positive_list = list(filter(lambda x: x > 0, given_list))
print("Using map/filter with lambda : ", positive_list)

positive_list = [num for num in given_list if num > 0]
print("Using List Comprehension : ", positive_list)
