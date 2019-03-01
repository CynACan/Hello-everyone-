

def sphere_volume(radius):
  volume = (4/3)*3.14*radius
  return volume


x = float(input("Enter a number to calculate sphere r "))
answer = sphere_volume(x)
print("Here is your answer: ",answer)
