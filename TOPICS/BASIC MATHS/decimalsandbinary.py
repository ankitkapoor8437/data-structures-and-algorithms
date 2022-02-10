#
# n = int(input("enter the number:- "))
#
# ans = 0
# i = 0
# while(n!=0):
#     bit = n & 1
#     ans = (bit * pow(10, i) + ans)
#
#     n = n>>1
#     i = i + 1
#
#
# print(ans, end=" ")
#
# n = input("enter the number:-")
# i = 0
# ans = 0
#
# while(n!=0):
#     dig = int(n) % 10
#
#     if(dig == 1):
#         ans = ans + pow(2,i)
#
#     n = int(n) / 10
#     i = i + 1
#
# print(ans, end= " ")

# reverse the integer

# n = 123
# i = 0
# ans = 0
#
# while(n!=0):
#     digit = n % 10
#     ans = ((digit * pow(10,i)) + ans)
#
#     i = i + 1
# print(ans)

# str = "1234356"
# print(str[::-1])


# import sys
# x = int(-123)
# ans = 0
# print(type(x))
# f = 1
# max_int = sys.maxsize
# min_int = sys.maxsize - 1
# if (x < 0):
#     x = - 1 * x
#     f = 0
#     while (x != 0):
#         digit = x % 10
#         if ((ans > (max_int / 10)) | (ans > (min_int / 10))):
#             print(0)
#
#         ans = ((ans * 10) + digit)
#
#         x = x / 10
#         if (f == 0):
#             ans = -1 * ans
#     print(ans)
#
# n = int(0)
# ans = 0
# i = 0
# if(n==0):
#     return 1
#     while(n!= 0):
#         bin = n%2
#         ans = ((bin*pow(10,i)) + ans)
#         # print(bin)
#         n = n // 2
#         i = i + 1
#     print(ans)
#     ans2 = 0
#     j = 0
#     while(ans!=0):
#         bit = ans%10
#         bit = int(not(bit))
#         ans2 = ((bit * pow(10,j) ) + ans2)
#         ans = ans // 10
#         j = j + 1
#     print(ans2)
#     k = 0
#     ans3 = 0
#     while(ans2!=0):
#         bit2 = ans2 % 10
#         if(bit2==1):
#             ans3 = ans3 + pow(2,k)
#         ans2 = ans2 // 10
#         k = k + 1
#     print(ans3)

# n = 131071
#
# x = 0
#
# while(x<=n):
#     if(n == pow(2,x)):
#         print("true")
#         break
#     elif(x==n):
#         print("false")
#         break
#     else:
#         x = x + 1

# nums = [11,2,7,15]
# print(len(nums))
# ans = 0
# for i in range(len(nums)-1):
#     for j in range(i+1,len(nums)):
#     # print(i)
#         if(nums[i] + nums[j] == 9):
#             ans = ans + (nums[i]+nums[j])
#             print(i,j)
#
#         else:
#             j  = j + 1

# x = 123
# y = x
# ans = 0
# if(x<=0):
#     print("False")
# else:
#     while (int(x)!= 0):
#         digit = int(x) % 10
#         ans = (ans * 10) + digit
#         x = int(x) // 10
#     if(ans==y):
#         print("True")
#     else:
#         print("False")