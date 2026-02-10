lower, upper = map(int, input().split())

# ans = 0
# for _ in range(lower, upper + 1):
#     ans += 1
# print(ans)
print(upper - lower + 1 if upper >= lower else 0)