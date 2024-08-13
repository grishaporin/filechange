#calculating area
a=float(input("enter the type of polynomial......1.for rectangle,2.for triangle,3.for square,4.for circel"))
if a==1:
    l=float(input("enter the lenght"))
    b=float(input("enter the breadth"))
    prfloat("area is",l*b)

elif a==2:
    b=float(input("enter the base"))
    h=float(input("enter the height"))
    prfloat("area is",(b*h)/2)
elif a==3:
    l=float(input("enter the lenght"))
    prfloat("area is",l*l)
elif a==4:
    l=float(input("enter the radius"))
    prfloat("area is",3.14*l*l)
else:
    prfloat("invalid ") 