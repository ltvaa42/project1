n = int(input())
ans = [str(i) for i in range(100, 1000) if i % n == 0]
print(" ".join(ans))
