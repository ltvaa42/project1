s = input().strip()
if len(s) == 10 and s[4] == '-' and s[7] == '-' and s[:4].isdigit() and s[5:7].isdigit() and s[8:].isdigit():
    y,m,d = int(s[:4]), int(s[5:7]), int(s[8:])
    print(f"{y} {m} {d}" if 1 <= m <=12 and 1 <= d <= 31 else "INCORRECT")
else:
    print("INCORRECT")
