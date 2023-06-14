def binary_search(values, search_value):
    left = 0
    right = len(values) - 1
    while left <= right:
        mid = (left + right) // 2
        if values[mid] == search_value:
            return mid
        elif values[mid] < search_value:
            left = mid + 1
        else:
            right = mid - 1
    return -1


values = [0, 1, 1, 3, 5, 7, 9, 13, 15, 18, 20]
search_value = 5
index = binary_search(values, search_value)

if index == -1:
    print(f"{search_value} not found in the list")
else:
    print(f"{search_value} found at index {index}")
