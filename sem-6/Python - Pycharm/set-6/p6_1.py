import sympy
n = 10
l1 = list(range(1,n))
ans = list(filter(lambda x : sympy.isprime(x), l1))
print(ans)