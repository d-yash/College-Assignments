# n = int(input("Enter the number : "))
# total = 0
# for i in range(1, n+1):
#     total += i
# print(f"Sum : {total}")

# n = int(input("Enter the number : "))
# total = 0
# for i in range(1, n+1):
#     total += int(input(""))
# print(f"Sum : {total}")

# # import math
# n = int(input("Enter the number : "))
# # print(f"Factorial : {math.factorial(n)}")
# fact = 1
# for i in range(n, 0, -1):
#     fact *= i
# print(f"Factorial : {fact}")

# n = int(input('Enter the number :'))
# fibonacci = (0, 1)
# for i in range(2, n):
#     fibonacci += (fibonacci[i-2]+fibonacci[i-1],)
# print(fibonacci)

# n = (input("Enter the nunber : "))
# rev = n[::-1]
# print(f"Reversed number : {rev}")


# import math
# n = int(input("Enter the number : "))
# prime_flag = 0
# if n > 1:
#     for i in range(2, int(math.sqrt(n)) + 1):
#         if n % i == 0:
#             prime_flag = 1
#             break
#     print(f"{n} is Prime") if prime_flag == 0 else print(f"{n} is not Prime")
# else:
#     print(f"{n} is not Prime")

# n = int(input("Enter the number : "))
# for i in range(2, n+1, 2):
#     print("", end='') if i % 6 == 0 else print(f"{i}", end=' ')

# number = int(input("Enter the number : "))
# num = number
# digit, total = 0, 0
# length = len(str(num))
# for i in range(length):
#     digit = int(num % 10)
#     num = num/10
#     total += pow(digit, length)
# if total == number:
#     print(f"{number} is Armstrong")
# else:
#     print(f"{number} is not Armstrong")

# n = int(input("Enter the number : "))
# if str(n)[::-1] == str(n):
#     print(f"{n} is Palindrome")
# else:
#     print(f"{n} is not Palindrome")

# n = int(input("Enter the no. of rows : "))
# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print(j, end='')
#     print("")
# print("")
# for i in range(1, n+1):
#     for j in range(n+1, i, -1):
#         print('*', end='')
#     print("")