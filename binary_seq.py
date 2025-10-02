n = int(input())
for i in range(1 << n):
    print(bin(i)[2:].zfill(n))
