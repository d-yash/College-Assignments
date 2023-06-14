def is_common(li1, li2):
    for i in li1:
        if i in li2:
            return True
    else:
        return False


li1 = [str(s) for s in input("Enter the list : ").split()]
li2 = [str(s) for s in input("Enter the list : ").split()]
print(is_common(li1, li2))
