t = int(input().strip())
for _ in range(t):
    n,m = map(int,input().strip().split())
    s1,s2 = input().strip().split()

    dp = [[0] *(m+1) for i in range(n+1)]

    for i in range(0,n+1):
        for j in range(0,m+1):
            if i==0:
                dp[i][j] = j
            elif j==0:
                dp[i][j] = i
            elif s1[i-1]==s2[j-1]:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])

    print(dp[n][m])

