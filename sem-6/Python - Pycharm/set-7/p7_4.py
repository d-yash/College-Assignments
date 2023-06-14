def find_smallest_value(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
    min_value = None
    for line in lines:
        values = line.strip().split()
        for value in values:
            try:
                value = float(value)
            except ValueError:
                continue
            if min_value is None or value < min_value:
                min_value = value
    return min_value


print(f"Min value : {find_smallest_value('p7_4')}")