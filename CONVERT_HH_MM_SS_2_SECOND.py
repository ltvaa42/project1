s = input().strip()

try:
    hh, mm, ss = map(int, s.split(':'))
    if len(s) != 8 or s[2] != ':' or s[5] != ':':
        print("INCORRECT")
    elif 0 <= hh <= 23 and 0 <= mm <= 59 and 0 <= ss <= 59:
        total = hh * 3600 + mm * 60 + ss
        print(total)
    else:
        print("INCORRECT")
except:
    print("INCORRECT")
