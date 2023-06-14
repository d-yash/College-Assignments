class Number:
    def __init__(self, value):
        self.value = value
    def __add__(self, other):
        if isinstance(other, Number):
            return Number(self.value + other.value)
        elif isinstance(other, int) or isinstance(other, float):
            return Number(self.value + other)
        else:
            raise TypeError("Unsupported operand type(s) for +: '{}' and '{}'".format(type(self).__name__, type(other).__name__))
    def __str__(self):
        return str(self.value)

n1 = Number(10)
n2 = Number(20)
n3 = n1 + n2
n4 = n1 + 5
print(n3)
print(n4)
