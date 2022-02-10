
# def power(a,b):
#     ans = 1
#     for i in range(b):
#         ans  = ans * a
#         # i = i + 1
#         return ans
#
#
# a = int(2)
# b = int(3)
# value = power(a,b)
# print(value)

# S = "([)]"
# bracket1 = {"(":1, "[":2,"{":3}
# bracket2 = {")":1, "]":2, "}":3}
# k = 0
# for i in S:
#     if i in bracket1:
#         k = k + bracket1[i]
#         print(bracket1[i])
#     elif i in bracket2:
#         k = k - bracket2[i]
#         print(bracket2[i])
# if k == 0:
#     print("True")
# else:
#     print("False")

# s = "]"
# bracket1 = {"(":1, "[":2,"{":3}
# bracket2 = {")":1, "]":2, "}":3}
# l1 = []
# for i in s:
# 	if i in bracket2.keys():
# 		print("False")
# 		break
# 	if i in bracket1.keys():
# 		l1.append(bracket1[i])
# 	elif i in bracket2.keys():
# 		g = l1.pop()
# 		if g == bracket2[i]:
# 			continue
# 		else:
# 			print("False")
# 			break
# if len(l1)==0:
# 	print("True")



# s = "]()"
# bracket1 = {"(":1, "[":2,"{":3}
# bracket2 = {")":1, "]":2, "}":3}
# l1 = []
# for i in s:
# 	if i in bracket1.keys():
# 		l1.append(bracket1[i])
# 	elif i in bracket2.keys() and (len(l1)!=0):
# 		g = l1.pop()
# 		if g == bracket2[i]:
# 			continue
# 		else:
# 			print("False")
# 			break
# 	else:
# 		print("False")
# 		break
# if len(l1)==0:
# 	print("True")

# s = "()[]{}"
# bracket1 = {"(":1, "[":2,"{":3}
# bracket2 = {")":1, "]":2, "}":3}
# l1 = []
# n = 0
# for i in s:
# 	if i in bracket1.keys():
# 		l1.append(bracket1[i])
# 		n +=1
# 	elif i in bracket2.keys() and (len(l1)!=0):
# 		g = l1.pop()
# 		n += 1
# 		if g == bracket2[i]:
# 			continue
# 		else:
# 			print("False")
# 			break
# 	else:
# 		print("False")
# 		break
# if n == len(s):
# 		print("True")


# list1 = [1,2,4]
# list2 = [1,3,4]
#
# list = []
#
# list3 = list1 + list2
# m = sorted(list3)
# print(m)

#


#  xor  operation in an array
# n = 5
# start = 0
# nums = 0
# ans = 0
# for i in range(n):
#     nums = start + 2*i
#     ans = ans^nums
# print(ans)

# number of good pairs

# nums = [1,2,3]
# ans = 0
# for i in range(len(nums)):
#     # print(i)
#     for j in range(i+1, len(nums)):
#         if(nums[i]==nums[j] and i < j):
#             ans = ans + 1
# print(ans)

# num = 14
# step = 0
# while (num != 0):
#     if (int(num) % 2 == 0):
#         num = int(num) // 2
#         step = step + 1
#         print(num)
#     else:
#         num = num - 1
#         step = step + 1
# print(step)

# 1588. Sum of All Odd Length Subarrays
# arr = [1,4,2,5,3]
# lists = [[]]
# print(len(arr))
# for i in range( len(arr) + 1):
#     for j in range(i):
#         lists.append(arr[j: i])
# print(lists)


# 1688. Count of Matches in Tournament

# n = 7
# matches = 0
# while(n!=1):
#     if(n%2==0):
#         matches = matches + (n//2)
#         n = n//2
#     else:
#         matches = matches + ((n-1)// 2)
#         n = (((n-1)//2) + 1 )
# print(matches)

#
# def power(a,b):
#     ans = 1
#     i = 1
#     for i in range(b):
#         ans = ans * a
#     return ans

# a = int(1)
# b = int(2)
# value = power(3,4)
# print(value)
# value = power(3,3)
# print(value)
# value = power(3,5)
# print(value)
# value = power(3,6)
# print(value)



# def power(a,b):
#     ans = 1
#     i = 1
#     for i in range(b):
#         ans = ans * a
#     return ans
#
#
# # def main():
# #     def power(a, b):
# #         ans = 1
# #         i = 1
# #         for i in range(b):
# #             ans = ans * a
# #         return ans
#
#
# if __name__ == "__main__":
#     # main()
#     value = power(3, 4)
#     print(value)
#     value = power(3, 3)
#     print(value)
#     value = power(3, 5)
#     print(value)
#     value = power(3, 6)
#     print(value)


#  will give 1 in case of even
#  will give 0 in case of odd
# def isEven(a):
#     if a%2 == 0:
#         return True
#     else:
#         return False



# def main():
#     def power(a, b):
#         ans = 1
#         i = 1
#         for i in range(b):
#             ans = ans * a
#         return ans


# if __name__ == "__main__":
#     # main()
#     value = isEven(3)
#     print(value)
#     value = isEven(2)
#     print(value)
#     value = isEven(10)
#     print(value)

# def factorial(n):
#     fact = 1
#     for i in range(1,n+1):
#         fact = fact * i
#     # print(fact)
#     return fact
#
# def nCr(n,r):
#     # ans = 0
#     num = factorial(n)
#     # print(num)
#     dem = factorial(r) * factorial(n-r)
#     # print(dem)
#     ans = num//dem
#     return ans
#
# if __name__ == "__main__":
#     # main()
#     value = nCr(8,0)
#     print(value)
#     value = nCr(8,1)
#     print(value)
#     value = nCr(8,2)
#     print(value)

# def counting(n):
#     for i in range(1, n+1):
#         print(i)
#
# if __name__ == "__main__":
#     # main()
#     n = 23
#     print(counting(n))
# for 1 is prime

# for 0 not prime
# def isPrime(n):
#     i = 2
#     while(i<=n):
#         if(n%i==0):
#             return 0
#         else:
#             return 1
#
#
# if __name__ == "__main__":
#     # main()
#     n = 111
#     if isPrime(n):
#         print( "is a prime no.")
#     else:
#         print( "is not prime no.")


# arithmatic progression
#
# def fibo(n):
#     a = 0
#     b = 1
#     for i in range(2, n+1):
#         c = a + b
#         a = b
#         b = c
#     return c
#
#
#
# if __name__ == "__main__":
    # main()
#     # a = int(input())
#     # n = int(input())
#     # d = int(input())
#     #
#     # print(ap(a,n,d))
#     print(fibo(5))

def setbit(p):
    count = 0
    while(p!=0):
        digit = p % 10
        if(digit == 1):
            count = count + 1
        p = p//10
    return count

def andof(f,g):
    ans = f & g
    return ans

def db(e):
    ans1 = 0
    i = 0
    while(e!=0):
        bin = e%2
        ans1 = ((bin*pow(10,i)) + ans1)
        e = e // 2
        i = i + 1
    return ans1

if __name__ == "__main__":
    # main()
    # a = input()
    # b = input()
    a = 3
    b = 3
    c = andof(a,b)
    print(c)
    d = db(c)
    print(d)

    h = setbit(d)
    print(h)

