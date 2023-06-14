# l = [int(s) for s in input("Enter the number : ").split()]
# max = max(l)
# min = min(l)
# sum = 0
# for i in range(min, max+1, 1):
#     if i not in l:
#         sum += i
# print(sum)


# def pincheck(str):
#     if len(str) != 6 and len(str) != 4:
#         return False
#     elif str.isdigit():
#         return True
#     else:
#         return False
# print(pincheck("1663"))

# n = int(input("Enter the number : "))
# a = [[n]*n]*n
# print(a)

# s = "Hello world! 123"
# n = 0
# ch = 0
# for i in s:
#     if i.isdigit():
#         n += 1
#     elif i.isalpha():
#         ch += 1
# print(n, ch)

# print(list(filter(lambda x : (x%2)+4, range(-10,11))))

# Read a text file in python and do following:
# i. print no. of lines
# ii. print no. of statements
# iii. print no. of unique words
# iv. store each word with its occurrence in dictionary

# with open("my_file.txt", "w") as f:
#     f.write("Hello\n" * 10)
#     f.write("okay " * 5)
#     f.write("\n")
#     f.write("done\n"*3)
#
# with open("my_file.txt", "r") as f1:
#     print("Number of Lines: ", len(f1.readlines()))
#     f1.seek(0, 0)
#     print("Number of total characters: ", len(f1.read()))
#     f1.seek(0, 0)
#     words = dict()
#     unique_word = list()
#     my_words = f1.read().split()
#
#     for word in my_words:
#         if word not in unique_word:
#             unique_word.append(word)
#
#         if word in words:
#             words[word] += 1
#         else:
#             words[word] = 1
#     print("Dictionary of words with its occurrence: ", words)
#     print("No of unique words: ", len(unique_word))


# To create customize exception for checking string length. If string
# length is more than 6 or less than 2 then customize exception
# must be thrown.

# class Error(Exception):
#     pass
# class stringLenException(Error):
#     pass
#
# st = "Hello what is up"
# try:
#     if len(st) > 6 or len(st) < 2:
#         raise stringLenException
# except stringLenException:
#     print("Incorrect length")

# l1 = list()
# def flat(list1):
#     global l1
#     for i in list1:
#         if type(i) == list:
#             flat(i)
#         else:
#             l1.append(i)
#
# list1 = [1,[2,3],[4,5,[6,7]]]
# flat(list1)
# print(l1)


# Given a list, return a list with the elements "shifted left by one
# position" so [1, 2, 3] yields [2, 3, 1].
#
# l1 = [1,2,3]
# temp = l1.pop(0)
# l1.append(temp)
# print(l1)


# Return the sum of the numbers in the array, returning 0 for an
# empty array. Except the number 13 is very unlucky, so it does not
# count and numbers that come immediately after a 13 also do not
# count.
# [1, 2, 2, 1] = 6
# [1, 1] = 2
# [1, 2, 2, 1, 13] = 6
# [13, 2, 2, 1, 13] = 3
import functools
from functools import reduce
sum = functools.reduce()