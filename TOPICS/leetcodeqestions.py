# 1290. Convert Binary Number in a Linked List to Integer


# list = [1,0,1]
# k = ""
# for i in list:
#     k = k + str(i)
# print(k)
#
# dec = int(k)
# print(dec)
# ans = 0
# j = 0
# while(dec!=0):
#     digit = dec % 10
#     if(digit==1):
#         ans = ans + pow(2, j)
#     j = j + 1
#     dec = dec // 10
# print(ans)

# nums = [7,5,6,8,3]
# s = sorted(nums)
# print(s)
#
# print(s[0])
# print(s[-1])
# i = s[-1]
# while(i!=0):
#     if( s[0]%i==0 and s[-1]%i==0 ):
#         print(i)
#         break
#     else:
#         i = i - 1

# s = "9999"
# k = s.index("6")
# print(k)
# print(s[:k]+"9"+s[k+1:])

# 728. Self Dividing Numbers

# n = 22
#
# for  i in range(n):
#     print(i)
#     for j in i:
#         digit = n%10
#         n = n//10
#         if(digit==0):
#             print("false")
#         else:
#             print("dekehte hain")

# n = 1208
# left = 1
# l1 = []
# right =22
# ans = 0
# i = 0
# for k in range(left, right):
#     j = k
#     while(j!=0):
#         digit = j%10
#         if(digit==0):
#             print("non s d n")
#             break
#         elif(j%digit == 0):
#             print("sdn")
#             # ans = digit * pow(10,i) + ans
#             # i = i  + 1
#             j = j // 10
#             l1.append(j)
#         # else:
#         #     print("not sdn")
#         #     j = j + 1
# print(l1)

# left = 1
# l1 = []
# right =22
# final = []
# for i in range(left, right+1):
#     if "0" in str(i):
#         continue
#     else:
#         l1 = []
#         l1[:0]= str(i)
#         print(l1)
#         k = 0
#         while k < len(l1):
#             if i%int(l1[k]) == 0:
#                 k += 1
#                 continue
#             else:
#                 break
#         if k == len(l1):
#             final.append(i)
# print(final)


