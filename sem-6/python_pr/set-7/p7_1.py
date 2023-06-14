with open('p7.txt','r') as f:
    print("Printing using read() ... ")
    print(f.read())
    
    print("Printing using readline() ...")
    while True:
        line = f.readline()
        print(line)
        if not line:
            break