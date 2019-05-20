def max(a,b):
    if a>b:
        return a
    return b

t = int(input().strip())
for _ in range(0,t):
    n,m = map(int,input().strip().split())
    s1 = input().strip()
    s2 = input().strip()
    dp = [[0] * n for i in range(0,m)]

    for i in range(0,m):
        for j in range(0,n):
            if s2[i]==s1[j]:
                if i==0 or j==0:
                    dp[i][j] = 1
                else:
                    dp[i][j] = 1+dp[i-1][j-1]
            else:
                dp[i][j] = max(dp[i-1][j],dp[i][j-1])

    print(dp[m-1][n-1])