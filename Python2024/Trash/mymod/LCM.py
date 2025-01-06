def LCM(a,b,c):
    i=int(max(a,b,c))
    lcm = 0
    while i<=a*b*c:
        if (i%a==0) and (i%b==0) and (i%c==0):
            lcm=int(i)
            break
        i+=1
    return lcm