#leap year
year=int(input("Enter your year : "))
if year%400==0 or (year%4==0 and year%100!=0):
    print(year,"is a leap year!")
else:
    print(year,"is Not a Leap year!") 