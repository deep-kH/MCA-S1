class Fan:
    SLOW=1
    MEDIUM=2
    FAST=3
    def __init__(self,on=False,speed=SLOW,radius=5.0,color="blue"):
        self.__speed=speed
        self.__radius=radius
        self.__color=color
        self.__on = "OFF"
    
    def set_speed(self,speed):
        self.__speed=speed  
    def set_radius(self,radius):
        self.__radius=float(radius)
    def set_color(self,color):
        self.__color=color
    def set_on(self, on):
        if on == True:
            self.__on = "ON"
        else:
            self.__on="OFF"
        
    def __str__(self):
        return f"{self.__color} Fan is {self.__on}\nRadius is {self.__radius}\nrunning at speed {self.__speed}"
    
f1=Fan()
f2=Fan()

f1.set_speed(Fan.FAST)
f1.set_radius(10)
f1.set_color("yellow")
f1.set_on(True)

f2.set_speed(Fan.MEDIUM)

print(f1,"\n")
print(f2)