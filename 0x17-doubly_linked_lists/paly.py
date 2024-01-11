#!/usr/bin/python3
def is_palindrome(n):

    reversed_n = int(str(n)[::-1])
    return n == reversed_n

largest_palindrome = 0
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product


with open("102-result", "w") as f:
    f.write(str(largest_palindrome))

print(f"The largest palindrome is: {largest_palindrome}")
