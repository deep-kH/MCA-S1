def fact(b):
    if b:
        f=b*fact(b-1)
        return f
    else:
        return 1