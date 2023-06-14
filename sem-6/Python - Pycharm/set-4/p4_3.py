og_list = [int(s) for s in input("Enter the list: ").split()]
rev_list = og_list.copy()
rev_list.reverse()
print("List is Palindrome") if og_list == rev_list else print("List is not Palindrome")
