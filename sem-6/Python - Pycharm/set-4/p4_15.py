x = [[2, 3, 4], [4, 5, 6], [6, 7, 8]]
y = [[1, 3, 3], [4, 1, 6], [2, 7, 1]]

ans = [ [x[i][j] + y[i][j] for j in range(len(x[0]))] for i in range(len(x))]
for i in ans:
    print(i)
