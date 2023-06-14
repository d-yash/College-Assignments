def is_alpha(char):
    return char.isalpha()


given_list = ['a', '1', 'B', '2', 'c', '3']
alpha_list = list(filter(is_alpha, given_list))
print("Using map/filter with function : ", alpha_list)

alpha_list = list(filter(lambda x: x.isalpha(), given_list))
print("Using map/filter with lambda : ", alpha_list)

alpha_list = [char for char in given_list if char.isalpha()]
print("Using List Comprehension : ", alpha_list)
