t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    l = list(map(int,input().strip().split()))

    sum = 0
    endPoint = -1
    i = 0
    while i < n:
        j = i + 1
        temp = 0
        while j<n and l[i]>l[j]:
            temp = temp + (l[i] - l[j])
            j += 1
        else:
            if j<n and l[i]<=l[j]:
                sum += temp
                i = j
            else:
                endPoint = i
                break


    if endPoint > -1:
        j = n - 1
        while j  > endPoint:
            i = j - 1
            temp = 0
            while i > endPoint and l[j] > l[i]:
                temp = temp + (l[j] - l[i])
                i -= 1
            else:
                sum += temp
                j = i

    print(sum)


