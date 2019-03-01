
def number_of_zeros(lst):
    count=0
    for x in list:
       if x==0:
         count+=1
    return count
          
list=[1,0,2,0,5,0,8,0,9,0,6,4,7,5,0,0,0,0,7,8,5,10]
answer = number_of_zeros(list)

print("you have these many zero's",answer)
