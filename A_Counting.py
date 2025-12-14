lower, upper = map(int, input().split())
print(upper - lower + 1 if upper >= lower else 0)