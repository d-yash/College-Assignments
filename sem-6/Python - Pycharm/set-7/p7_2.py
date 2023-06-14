with open("p7_2", "r") as input_file:
    with open("output", "w") as output_file:
        for line in input_file:
            a, b = map(int, line.strip().split())
            add = a + b
            mul = a * b
            output_file.write(f"{a} {b} {add} {mul}\n")