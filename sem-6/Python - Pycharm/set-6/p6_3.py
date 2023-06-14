import functools
l1 = [1,2,5,7,6,11,65,3,30,24]
print(functools.reduce(lambda x,y : x if x>y else y, l1))