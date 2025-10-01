n, k = map(int, input().split())
a = list(map(int, input().split()))
s = sum(a[:k])
ans = int(s % 2 == 0)
for i in range(k, n):
    s += a[i] - a[i-k]
    ans += (s % 2 == 0)
print(ans)
