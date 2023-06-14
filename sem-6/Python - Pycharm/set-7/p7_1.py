with open('p7.txt', 'r') as f:
    print("Printing using read() ... ")
    print(f.read())

with open('p7.txt', 'r') as f:
    print("\nPrinting using readline() ...")
    while True:
        line = f.readline()
        print(line, end='')
        if not line:
            break

with open('p7.txt', 'r') as f:
    print("\n\nPrinting using readlines() ...")
    line = f.readlines()
    print(line)