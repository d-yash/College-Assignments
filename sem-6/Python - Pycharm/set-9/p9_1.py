class KSV:
    cnt = 0
    def __init__(self, x, y):
        self.x = x
        self.y = y
        KSV.cnt += 1
    def get_value(self):
        return self.x, self.y
    def print_value(self):
        print("x:", self.x)
        print("y:", self.y)


std1 = KSV(10, 5)
std2 = KSV(4, 8)

print(f"Total students : {std1.cnt} {std2.cnt} {KSV.cnt}")
