# a = 4
# b = 6
#
# print(a&b)
# print(a|b)
# print(~a)
# print(a^b)


# print(17>>1)
# print(17>>2)
# print(19<<1)
# print(21<<2)

#
# i = 7
# print(++i)
# print(i++ )
# print(--i)
# print(i--)

# 24:16  Answers:-
# 1) 1
# 2) 0,3
# 3)if condition run ( - inside if)
# 4)100
# 5)b=1,c=3
#
# a = 0
# b = 1
#
# if(++a):
#     print(b)
# else:
#     b = ++b
#     print(b)


# for loops
# n = 100
# print(n)
# i = 1
# sum = 0
# for i in range(1, n+1):
#     sum = sum + i
#     # sum += i
# print(sum)
#

# fibonacci series
# 0,1,1,2,3,5,8,13,21

# n = 10
# a = 0
# b = 1
# print(a)
# print(b)
# for i in range(1,n+1):
#     nextnum = a + b
#     print(nextnum)
#
#     a = b
#     b = nextnum

# for break concept
# prime number
#
# n = 14
#
# isprime = 1
# for i in range(2, n):
#     if n%i==0:
#         # print("not a prime no.")
#         isprime = 0
#         break
# if(isprime == 0):
#     print("not a prime no.")
# else:
#     print("is a prime")


# continue concept

# n = 5
# for i in range(1, n +1):
#     print("hi")
#     print("hey")
#     continue
#     print("reply to kar")
#


# Output questions(loop):
# 1. 0 2 4
# 2. 0 0 0 0....... infinite loop
# 3. 0 3 5 7 9 11 13 15
# 4. 0 0
#     0 1
#     0 2
#     0 3
#     0 4
#     0 5
#     1 1
#     1 2
#     1 3
#     1 4
#     1 5
#     2 2
#     2 3
#     2 4
#     2 5
#     3 3
#     3 4
#     3 5
#     4 4
#     4 5
# 5. 0 0
#      0 1
#      0 2
#      0 3
#      0 4
#      0 5
#       1 1
#       1 2
#       1 3
#       1 4
#       1 5
#        2 2
#        2 3
#        2 4
#        2 5
#        3 3
#        3 4
#        3 5
#       4 4
#       4 5

# homework questions
# n= 5
# for i in range(0, n+1, 2):
#     print(i)
#     i = i + 1

# n= 5
# for i in range(0, n+1, -1):
#     print(i)
#     i = i+1
# n =15
# for i in range(0, n+1, 3):
#     print(i)
#     if i&1:
#         continue
#
#     i = i + 1
#
# print(3&1)


# n = 5
# for i in range(n):
#     for j in range(i, n+1):
#         print(i, " ",j)
#
#     print("")

# n=5
# for i in range(n):
#     for j in range(i , n+1):
#         if( i + j == 10):
#             break
#         print(i, " ", j)
#
#     print("")


# variable and scopes

# a = 3
# print(a)
#
# if(True):
#     a = 6
#     print(a)
#
# print(a)

# This function modifies global variable 's'
# def f():
# 	global s
# 	print(s)
# 	s = "Look for Geeksforgeeks Python Section"
# 	print(s)
#
# # Global Scope
# s = "Python is great !"
# f()
# print(s)

