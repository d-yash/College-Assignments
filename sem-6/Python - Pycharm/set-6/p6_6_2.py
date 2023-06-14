def f_to_c(deg_f):
    return (deg_f - 32) * 5/9


deg_f_list = [32, 68, 86, 104, 122]
deg_c_list = list(map(f_to_c, deg_f_list))
print("Using map/filter with function : ", deg_c_list)


deg_c_list = list(map(lambda f: (f - 32) * 5/9, deg_f_list))
print("Using map/filter with lambda : ", deg_c_list)


deg_c_list = [(deg_f - 32) * 5/9 for deg_f in deg_f_list]
print("Using List Comprehension : ", deg_c_list)
