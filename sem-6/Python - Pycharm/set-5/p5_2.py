import itertools
def findsubsets(s):
    ss = list(s)
    temp_set = [s, ]
    temp_set.update(ss)
    for i in range(0, len(s)):
        s1 = set(itertools.combinations(s, i))
        temp_set.update(s1)
    return temp_set

s1 = {int(s) for s in input("Enter set1 : ").split()}
# s2 = {int(s) for s in input("Enter set2 : ").split()}
# print(f"s1 - s2 = {s1 - s2}")
# print(f"s1 + s2 = {s1.union(s2)}")
# print(f"s1.symmetric_difference(s2) = {s1.symmetric_difference(s2)}")
print(f"Subset of s1 = {findsubsets(s1)}")
# s3 = set(range(max(s1)+1))
# print(f"{s3}")