n = int(input("Enter the number : "))
print(f"{n} is Odd") if n % 2 else print(f"{n} is Even")

# n = int(input("Enter the number : "))
# print(f"{n} is positive") if n > 0 else print(f"{n} negative") if n<0 else print(f"{n} is zero")

# a, b, c = [float(s) for s in input("Enter coefficients of x2, x and a constant term : ").split()]
# d = (b ** 2) - (4 * a * c)
#
# print(f"{(-b + d**0.5)/(2*a)} and {(-b - d**0.5)/(2*a)} are real roots of the equation") if d >= 0 else print("No real roots possible")


# string = input("Enter the character : ")
# print(f"{string[0]} is Vowel") if string.lower() in ['a', 'e', 'i', 'o', 'u'] else print(f"{string[0]} is Consonant")

# a, b, c = [int(s) for s in input("Enter three numbers : ").split()]
# if a >= b:
#     print(f"{a} is Maximum") if a > c else print(f"{c} is Maximum")
# else:
#     print(f"{b} is Maximum") if b > c else print(f"{c} is Maximum")

# deg, exp = input("Enter degree(BE or ME) & experience : ").split()
# if deg.lower() == "be":
#     print("Salary : 30k") if int(exp) < 5 else print("Salary : 40k")
# else:
#     print("Salary : 50k") if int(exp) < 5 else print("Salary : 60k")

# inp = input("Enter the charcter : ")
# print(f"{inp[0]} is a Character") if inp[0].isalpha() else print(f"{inp[0]} is Digit") if inp[0].isdigit() else print(f"{inp[0]} is Special Character")