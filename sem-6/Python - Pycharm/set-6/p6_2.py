import functools
n = 10
l1 = list(range(1, n))
print(l1)
print(functools.reduce(lambda x, y: x+y, l1))