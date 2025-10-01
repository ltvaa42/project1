n = int(input().strip())
arr = list(map(int, input().split()))
odd = sum(1 for x in arr if x % 2 != 0)
even = n - odd
print(odd, even)
