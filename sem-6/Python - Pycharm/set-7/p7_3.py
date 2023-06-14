def skip_header(filename):
    print("Actual Content after removing Heading")
    with open(filename, "r") as f:
        f.readline()
        while True:
            line = f.readline()
            if not line.startswith("#"):
                break
        while line:
            print(line.strip())
            line = f.readline()


skip_header('p7_3')