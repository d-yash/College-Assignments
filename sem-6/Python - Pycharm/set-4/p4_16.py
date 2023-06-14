x = [[2, 3, 4], [4, 5, 6], [6, 7, 8]]
transpose = [[x[j][i] for j in range(len(x[0]))] for i in range(len(x))]
for i in transpose: print(i)
print(x)
