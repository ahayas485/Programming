t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    l = list(map(int,input().strip().split()))
    dp = [0] * n
    flag = False

    if l[0]==0:
        print("-1")
        continue

    curpos = 1
    for i in range(n):
        step = dp[i] + 1

        if l[i]==0 and curpos<=i+1:
            break

        temp = l[i] - (curpos - i - 1)
        if temp>0:
            for _ in range(temp):
                dp[curpos] = step
                curpos += 1
                if curpos==n:
                    print(step)
                    flag = True
                    break

        if flag==True:
            break


    if flag==False:
        print("-1")