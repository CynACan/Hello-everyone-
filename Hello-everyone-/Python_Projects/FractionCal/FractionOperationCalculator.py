import math

class FractionOperationCalculator:
   def __init__(self):
       self.xN=0
       self.xD=0
       self.yN=0
       self.yD=0
       self.ansN=0
       self.ansD=0
   
   def __str__(self):
       return str(self.xN)+"/"+str(self.xD)+" "+str(self.yN)+"/"+str(self.yD)+" OR "+str(self.xN)+"/"+str(self.xD)
           
   def SetFrac(self,xN,xD,yN,yD):
       self.xN=xN
       self.xD=xD
       self.yN=yN
       self.yD=yD

   def CrossMulti(self):
       xN,xD,yN,yD = self.xN,self.xD,self.yN,self.yD
       self.xN =  yD * xN
       self.xD =  xD * yD
       self.yN =  yN * xD
       self.yD =  yD * xD
       
          
   def getFrac(self):
       return str(self.xN)+"/"+str(self.xD)+" "+str(self.yN)+"/"+str(self.yD)+" Your current answer is: "+str(self.ansN)+"/"+str(self.ansD)


   def ClearFrac(self):
       print("Which fraction would you like to clear?..\n")
       print("1) All...")
       print("2) first number...")
       print("3) second number...")
       print("4) answer...")
       choice = int(input("please make selection..."))
       if choice == 1:
          self.xN=0
          self.xD=0
          self.yN=0
          self.yD=0
          self.ansN=0
          self.ansD=0
       elif choice == 2:
          self.xN=0
          self.xD=0
       elif choice == 3:
          self.yN=0
          self.yD=0
       elif choice == 4:
          self.ansN=0
          self.ansD=0
       else:
          print("invalid choice made")
          return
       
       
   def AddFrac(self):
       if self.xD is not self.yD and self.yD is not 0:
          self.CrossMulti()
          self.ansN = self.xN + self.yN
          self.ansD = self.yD
          return str(self.ansN)+"/"+str(self.ansD)
       elif self.xD==0 and self.xN==0 and self.yD==0 and self.yN==0:
          return"nothing to add..."
       elif self.yD==0 and self.yN==0:
          return str(self.xN)+"/"+str(self.xD)
       else:
          self.ansN = self.xN + self.yN
          self.ansD = self.yD
          return str(self.ansN)+"/"+str(self.ansD)

   def SubFrac(self):
       if self.xD is not self.yD and self.yD is not 0:
          self.CrossMulti()
          self.ansN = self.xN - self.yN
          self.ansD = self.yD
          return str(self.ansN)+"/"+str(self.ansD)
       elif self.xD==0 and self.xN==0 and self.yD==0 and self.yN==0:
          return"nothing to sub..."
       elif self.yD==0 and self.yN==0:
          return str(self.xN)+"/"+str(self.xD)
       else:
          self.ansN = self.xN - self.yN
          self.ansD = self.yD
          return str(self.ansN)+"/"+str(self.ansD)

   def MultiFrac(self):
       if self.xD==0 and self.xN==0 and self.yD==0 and self.yN==0:
          return"nothing to multiply..."
       elif self.yD==0 and self.yN==0:
          return str(self.xN)+"/"+str(self.xD)
       else:
          self.ansN = self.xN * self.yN
          self.ansD = self.xD * self.yD
          return str(self.ansN)+"/"+str(self.ansD)
 
   def DivFrac(self):
       if self.xD==0 and self.xN==0 and self.yD==0 and self.yN==0:
          return"nothing to divide..."
       elif self.yD==0 and self.yN==0:
          return str(self.xN)+"/"+str(self.xD)
       else:       
          self.ansN = self.xN * self.yD
          self.ansD = self.xD * self.yN
          return str(self.ansN)+"/"+str(self.ansD)
       

   def ReduceFrac(self):
       if self.yD==0 and self.yN==0:
          print("Now reducing your fraction...\n\n")
          redFrac = math.gcd(self.xN,self.xD)
          self.xN=self.xN/redFrac
          self.xD=self.xD/redFrac
          return str(self.xN)+"/"+str(self.xD)
       elif self.xN is not 0 and self.xD is not 0 and self.yN is not 0 and self.yD is not 0 :
          print("Which of the 2 fraction do you want to reduce?..")
          print("1: "+str(self.xN)+"/"+str(self.xD)+"\n")
          print("2: "+str(self.yN)+"/"+str(self.yD)+"\n")
          print("3: "+str(self.ansN)+"/"+str(self.ansD)+"\n")
          print("4: Cancel selection\n")
          choice=int(input("please select a choice.."))
          if choice == 1:
             print("Now reducing fraction...\n\n")
             print(str(self.xN)+"/"+str(self.xD)+"\n\n")
             redFrac=math.gcd(self.xN,self.xD)
             self.xN=self.xN/redFrac
             self.xD=self.xD/redFrac
             return str(self.xN)+"/"+str(self.xD)
          if choice == 2: 
             print("Now reducing fraction...\n\n")
             print(str(self.yN)+"/"+str(self.yD)+"\n\n")
             redFrac=math.gcd(self.yN,self.yD)
             self.yN=self.yN/redFrac
             self.yD=self.yD/redFrac
             return str(self.yN)+"/"+str(self.yD)
          if choice == 3:
             print("Now reducing fraction...\n\n")
             print(str(self.ansN)+"/"+str(self.ansD)+"\n\n")
             redFrac=math.gcd(self.ansN,self.ansD)
             self.ansN=self.ansN/redFrac
             self.ansD=self.ansD/redFrac
             return str(self.ansN)+"/"+str(self.ansD)
          if choice == 4:
             print("Selection was cancelled...")
             return 0
          else:
              print("invaid entry made returning to main menu...")
              return 0
      
          
          

  
  

