def days(date1,date2):
    Nlist = 0
    if date1[0]>date2[0]:
        Nlist=Years((date2[0]+1),(date1[0]))
        Nlist=Nlist+Month(date2[1])-date2[2]+1
        Nlist=Nlist + AddMon((date2[1]+1),13)
        Nlist=Nlist + date1[2] 
        Nlist=Nlist + AddMon(1,date1[1])
        return Nlist
    if date1[0]<date2[0]:
        Nlist=Years((date1[0]+1),(date2[0]))
        Nlist=Nlist+Month(date1[1])-date1[2]+1
        Nlist=Nlist + AddMon((date1[1]+1),13)
        Nlist=Nlist + date2[2] 
        Nlist=Nlist + AddMon(1,date2[1])
        return Nlist
    
    if date1[0]==date2[0]: 
        if date1[1]>date2[1]:
            Nlist=Nlist+Month(date2[1])-date2[2]  #+1
            Nlist=Nlist + AddMon((date2[1]+1),date1[1])
            Nlist=Nlist + date1[2]
            return Nlist
        elif date1[1]<date2[1]:
            Nlist=Nlist+Month(date1[1])-date1[2]  #+1
            Nlist=Nlist + AddMon((date1[1]+1),date2[1])
            Nlist=Nlist + date2[2] 
        else:
            Nlist = abs(date1[2]-date2[2]) 
            return Nlist       
    return Nlist

def Leap(year):
    if year%4==0 & year%100==0 & year%400==0:
        return 1
    else: 
       return 0

def Years(y1,y2):
    count=0
    year1=y1
    year2=y2
    while(y1!=y2):
        count= count + Leap(y1)+365
        y1=y1+1
    return count


def AddMon(m1,m2):
    Am=0
    while(m1!=m2):# need to consider leap year some how
        Am=Am+Month(m1)
        m1=m1+1
    return Am
    
def Month(month):
    MonthList = {1:31,2:28,3:31,4:30,5:31,
    6:30,7:31,8:31,9:30,10:31,11:30,12:31}
    return MonthList[month]


list1=[]
list2=[]
x = int(input("Please enter year 1 in numeric form "))
y = int(input("Please enter year 2 in numeric form "))
list1.append(x)
list2.append(y)
x = int(input("Please enter month 1 in numeric form "))
y = int(input("Please enter month 2 in numeric form "))
list1.append(x)
list2.append(y)
x = int(input("Please enter day 1 in numeric form "))
y = int(input("Please enter day 2 in numeric form "))
list1.append(x)
list2.append(y)
Ndays=days(list1,list2)
print("Your Result!",Ndays)
