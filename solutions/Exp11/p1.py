'''
Problem Description:
Write a program to find the numbers which are not multiple of 5 from the user list. Print the numbers
in a single line separated by a space.
'''

print(*[i for i in list(map(int, input().split())) if i % 5 != 0])

'''
OUTPUT:
1 3 2 5 6 7 10 23 
1 3 2 6 7 23
'''