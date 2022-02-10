# pattern cases

# n = 4
# i = 1
#
# while(i<=n):
#     j = 1
#     while(j<=n):
#         print("*", end="")
#         j = j + 1
#     print("")
#     i = i + 1

# numeric patern

# n = 3
#
# row = 1
#
# while(row<=n):
#     col = 1
#     while(col<=n):
#         print(row, end="")
#         col = col + 1
#     print("")
#     row = row +1

# n = 4
#
# i =1
#
# while(i<=n):
#     j= 1
#     while(j<=n):
#         print(j, end="")
#         j = j +1
#     print("")
#     i = i + 1
#

# n = 3
#
# i = 1
#
# while(i<=n):
#     j = 1
#     while(j<=n):
#         print(n-(j-1), end='')
#         j = j + 1
#     print("")
#     i = i + 1

# n = 3
# i = 1
# count = 1
# while(i<=n):
#     j = 1
#     while(j<=n):
#         print(count, end="")
#         count = count + 1
#         j = j + 1
#     print("")
#     i = i + 1


# slant * pattern
# n = 5
#
# i = 1
#
# while(i<=n):
#     j = 1
#     while(j<=i):
#         print("*", end="")
#         j = j + 1
#     print("")
#     i = i + 1
#
# n = 5
#
# i = 1
#
# while(i<=n):
#     j = 1
#     while(j<=i):
#         print(j, end="")
#         j = j + 1
#     print("")
#     i = i + 1
#
# n = 5
#
# i = 1
#
# while(i<=n):
#     j = 1
#     while(j<=i):
#         print(i, end="")
#         j = j + 1
#     print("")
#     i = i + 1

#
# n = 3
#
# i = 1
# count = 1
#
# while(i<=n):
#     j = 1
#     while(j<=i):
#         print(count, end="")
#         count = count + 1
#         j = j + 1
#     print("")
#     i = i + 1
#


# n = 3
# i = 1
# while (i <= n):
#     j = 1
#     value = i
#     while (j <= n):
#         print(value, end="")
#         value = value + 1
#         j = j + 1
#     print("")
#     i = i + 1
#
# n = 3
# i = 1
# while (i <= n):
#     j = 1
#     value = i
#     while (j <= i):
#         print(value, end="")
#         value = value + 1
#         j = j + 1
#     print("")
#     i = i + 1
# homework to make it work without the value part

# n = 4
# i = 1
# while (i <= n):
#     j = 1
#     value = i
#     while (j <= i):
#         print((i+j-1), end="")
#         value = value + 1
#         j = j + 1
#     print("")
#     i = i + 1

# solution without the use of value part

# n = 4
#
# i = 1
# while (i <= n):
#     j = 1
#     while (j <= i):
#         print((i-j)+1, end="")
#         j = j + 1
#     print("")
#     i = i + 1

# n =4
# i = 1
# while (i <= n):
#     j = 1
#     # ch =  ord("A") + i - 1
#     while (j <= n):
#         ch =  chr(ord('A') + (i - 1))
#         print(ch, end="")
#         j = j + 1
#     print("")
#     i = i + 1

# n=4
# i = 1
# while (i <= n):
#     j = 1
#     # ch =  ord("A") + i - 1
#     while (j <= n):
#         ch =  chr(ord('A') + (j - 1))
#         print(ch, end="")
#         j = j + 1
#     print("")
#     i = i + 1

# n=4
# i = 1
# start = chr(ord("A"))
# while (i <= n):
#     j = 1
#     while (j <= n):
#         ch = start
#         print(ch, end="")
#         start = chr(ord(start) + 1)
#         j = j + 1
#     print("")
#     i = i + 1





# n=4
# i = 1
# start = chr(ord("A"))
# while (i <= n):
#     j = 1
#     while (j <= i):
#         ch = chr(ord("A") + i + j - 2)
#         print(ch, end="")
#         j = j + 1
#     print("")
#     i = i + 1


# n =4
# i = 1
# while (i <= n):
#     j = 1
#     # ch =  ord("A") + i - 1
#     while (j <= i):
#         ch =  chr(ord('A') + (i - 1))
#         print(ch, end="")
#         j = j + 1
#     print("")
#     i = i + 1
#

# n =4
# i = 1
# while (i <= n):
#     j = 1
#     start = chr(ord("A") + n - i)
#     while (j <= i):
#         print(start, end="")
#         start = chr(ord(start) + 1)
#         j = j + 1
#     print("")
#     i = i + 1

# n=3
# i = 1
# while (i <= n):
#     j = 1
#     start = chr(ord("A") + i - 1 )
#     while (j <= n):
#         print(start, end="")
#         start = chr(ord(start)  + 1 )
#         j = j + 1
#     print("")
#     i = i + 1

# n = 3
# i = 1
# while(i<=n):
#     j = 1
#     start = 1 + i - 1
#     while(j<=n):
#         print(start, end="")
#         start = start + 1
#         j = j + 1
#     print("")
#     i = i + 1
# homework

#

# n = 4
# i = 1
# while(i<=n):
#     space = n - i
#     while(space):
#         print(".", end=" ")
#         space = space - 1
#     j = 1
#     while(j<=i):
#         print("*", end=" ")
#         j = j + 1
#     print("")
#     i = i + 1



#
# n = 4
# i = 1
# while(i<=n):
#     space = n - i + 1
#     while(space):
#         print("*", end=" ")
#         space = space - 1
#     # j = 1
#     # while(j<=i):
#     #     print("", end="")
#     #     j = j + 1
#     print("")
#     i = i + 1
#
# n = 4
# i = 1
# while (i <= n):
#     space = i - 1
#     while (space):
#         print(" ", end=" ")
#         space = space - 1
#
#     star = n - i + 1
#     while(star):
#         print("*", end=" ")
#         star = star - 1
#     print("")
#     i = i + 1

# n = 4
# i = 1
# while(i<=n):
#     space = i - 1
#     while(space):
#         print(" ", end=" ")
#         space = space - 1
#     num = n - i + 1
#     while(num):
#         print(i, end=" ")
#         num = num - 1
#     print("")
#     i = i + 1

#
# n = 4
# i = 1
# while(i<=n):
#     space = n - i
#     while(space):
#         print(" ", end=" ")
#         space = space - 1
#     j = 1
#     while(j<=i):
#         print(i, end= " ")
#         j = j + 1
#     print("")
#     i = i + 1

# n = 4
# i = 1
# while(i<=n):
#     space = i - 1
#     while(space):
#         print("#", end=" ")
#         space = space - 1
#     num = 1
#     while(num):
#         print(num, end=" ")
#         num = num + 1
#     print("")
#     i = i + 1


# n = 4
# i = 1
# while(i<=n):
#     space = n - i
#     while(space):
#         print("", end=" ")
#         space = space - 1
#     j = 1
#     while(j<=i):
#         print(j, end=" ")
#         j= j + 1
#
#     start = i -1
#     while(start):
#         print(start, end=" ")
#         start = start - 1
#     print("")
#     i = i + 1