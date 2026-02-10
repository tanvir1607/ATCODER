# a, b = map(int, input().split())

# ans = max(a, b) + max(max(a, b) - 1, min(a, b))
# print(ans)


a, b = map(int, input().split())
if (a < b):
    a, b = b, a

ans = a + a if a == b else a + a - 1
print(ans)