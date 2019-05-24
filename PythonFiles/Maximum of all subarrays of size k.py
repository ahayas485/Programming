from collections import deque

t = int(input().strip())
for _ in range(t):

    n,m = map(int,input().strip().split())
    l = input().strip().split()
    #l = list(map(int,s.split()))

    dq = deque()
    for i in range(m):
        if not dq:
            dq.append(i)
        else:
            while dq and int(l[i])>=int(l[dq[-1]]):
                dq.pop()
            dq.append(i)
    print("len",len(dq))
    for i in range(m,n):
        print(int(l[dq[0]]),end=" ")

        while dq and dq[0]<=(i-m):
            dq.popleft()

        while dq and int(l[i])>=int(l[dq[-1]]):
            dq.pop()
        dq.append(i)
    print(int(l[dq[0]]))
