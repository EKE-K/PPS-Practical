'''
Problem Description1:
Take a string input from the user. Reverse the first three characters and print the reversed string as an
output. If the string does not consist at least three characters, it should print "Insufficient".
'''

s = input()
if len(s) < 3:
    print("Insufficient")
else:
    print(s[2::-1])

'''
OUTPUT:
all
lla
'''