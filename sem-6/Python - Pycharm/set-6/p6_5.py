def square(x):
    return x**2

def cube(x):
    return x**3


start = 1
end = 5

squared_and_cubed_values = list(map(lambda x: (square(x), cube(x)), range(start, end+1)))
print(squared_and_cubed_values)
