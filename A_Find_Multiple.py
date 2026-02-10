# lower, upper, num = map(int, input().split())

# ans = -1
# for i in range(lower, upper + 1):
#     if i % num == 0:
#         ans = i
#         break

# print(ans)





lower, upper, num = map(int, input().split())

ans = lower + (num - lower % num) if lower % num else lower
ans = -1 if ans > upper else ans
print(ans)