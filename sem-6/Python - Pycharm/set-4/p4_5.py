import sympy as sp
n = int(input("Enter the number : "))
# li = []
# for i in range(2, n+1):
#     prime_flag = True
#     for j in range(2, i):
#         if i % j == 0:
#             prime_flag = False
#             break
#     if prime_flag == True:
#         li.append(i)
li = [x for x in range(2, n) if sp.isprime(x)]
print(f"List of Prime : {li}")

