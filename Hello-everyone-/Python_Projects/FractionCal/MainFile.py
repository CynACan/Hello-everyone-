import FractionOperationCalculator


MyFrac =  FractionOperationCalculator.FractionOperationCalculator()

option='Y'
while option =='y' or option =='Y':
     print("\n\n")
     print("                           Main Menu\n")
     print("1) Input \n")
     print("2) See what I have\n")
     print("3) Add\n")
     print("4) Subtract\n")
     print("5) Multiply\n")
     print("6) Divide\n")
     print("7) Reduce\n")
     print("8) Clear numbers\n")
     print("9) Exit\n")

     x=int(input("please input a selection:...."))
     if x == 1:
         ans=int(input("would you like to input 1 fraction or 2?\n"))
         if ans==1:
            x = int(input("Please enter numerator of your fraction: "))
            y = int(input("Please enter denominater of your fraction: "))
            if y==0:
               print("Error:denominatior is 0...try again")
               break
            MyFrac.SetFrac(x,y,0,0)
         elif ans==2:
            x1 = int(input("Please enter numerator of your fraction: "))
            x2 = int(input("Please enter denominater of your fraction: "))
            y1= int(input("Please enter numerator of your fraction: "))
            y2 = int(input("Please enter denominater of your fraction: "))
            if x2==0 or y2==0:
               print("Error:denominatior in one of the fractions is 0...try again")
               break               
            MyFrac.SetFrac(x1,x2,y1,y2)
         else:
            print("Invalid entry, please try again...")
     elif x==2:
         print(MyFrac.getFrac())
     elif x==3:
         print(MyFrac.AddFrac())   
     elif x==4:
         print(MyFrac.SubFrac())   
     elif x==5:
         print(MyFrac.MultiFrac())     
     elif x==6:
         print(MyFrac.DivFrac())
     elif x==7:
         print("Now reducing...\n")
         print(MyFrac.ReduceFrac())
     elif x==8:
         MyFrac.ClearFrac()
     elif x==9:
         print("Now exiting Main Menu...")
         break
     else:
         print("invalid please try again...\n\n")
     
     option=input("\n\n\nWould you like to go again? Y or N?")
print("Now ending program...")