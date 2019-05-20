t = int(input().strip())

for _ in range(t):
    s = input().strip()
    ln = len(s)
    dp = [[0]*ln for i in range(ln)]

    for i in range(ln):
        dp[i][i] = 1
        start = 0
        maxlen = 1

    for i in range(1,ln):
        if s[i-1]==s[i]:
            dp[i-1][i] = 1
            if maxlen<2:
                start = i-1
                maxlen = 2


    for k in range(3,ln+1):
        i = 0
        j = k - 1

        while j<ln:
            if dp[i+1][j-1]==1 and s[i]==s[j]:
                dp[i][j] = 1
                if k>maxlen:
                    maxlen = k
                    start = i
            i+=1
            j+=1

    print(s[start:(start+maxlen)])
