def conver_Polish(x):
   if len(x)==3:
       print(x[0],x[2],x[1])
       return
   else:
       print("more the 3")
       return

def cal_Polish(x):
    i=int(x[0])
    j=int(x[2])
    return i+j


i=input("please enter something to add: ")
conver_Polish(i)
print(cal_Polish(i))
