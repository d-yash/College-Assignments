def selection_sort(values):
    for i in range(len(values)):
        min_index = i
        for j in range(i+1, len(values)):
            if values[j] < values[min_index]:
                min_index = j
        values[i], values[min_index] = values[min_index], values[i]
    return values


values = [9, 4, 7, 2, 8, 5, 1, 6, 3, 0, 1]
sorted_values = selection_sort(values)
print(sorted_values)
