t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    l = input().strip().split()
    l = list(map(int,l))
    flag = False

    s = e = 0
    c = 1
    for i in range(1,n):
        if(l[i-1]<l[i]):
            c += 1
            e += 1
        else:
            if c>1:
                print("("+str(s)+" "+str(e)+")",end=" ")
                flag = True
            s = e = i
            c = 1
    if c>1:
        print("(" + str(s) + " " + str(e) + ")", end=" ")
        flag = True

    if flag==False:
        print("No Profit",end=" ")
    print()