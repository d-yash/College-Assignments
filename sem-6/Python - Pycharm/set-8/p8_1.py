try:
    num = float(input("Enter a number: "))
    if num < 0:
        raise ValueError("\nNumber must be greater than or equal to zero.")
    else:
        print(f"\nNum is : {int(num)}")
except ValueError as ve:
    print(ve)