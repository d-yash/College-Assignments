def is_armstrong(number):
    num_digits = len(str(number))
    digit_sum = sum(map(lambda x: int(x)**num_digits, str(number)))
    return digit_sum == number


start = 100
end = 1000

armstrong_numbers = list(filter(is_armstrong, range(start, end+1)))
print(armstrong_numbers)
