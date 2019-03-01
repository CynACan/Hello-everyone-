

def quadratic_equation(a,b,c):
    x1 = (-b + (((b*b)-(4*a*c))**0.5))/(2*a)
    x2 = (-b - (((b*b)-(4*a*c))**0.5))/(2*a)
    print("Here are you answers x1: ",x1)
    print("and your answer for x2: ",x2)
    return 


a = int(input("Enter a to calculate quadratic equation: "))
b = int(input("Enter b to calculate quadratic equation: "))
c = int(input("Enter c to calculate quadratic equation: "))
answer = quadratic_equation(a,b,c)   
