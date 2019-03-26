// Bubble sort example in java

class Bubble{
    public static void main(String[] args)
   {
       int[] number = { 57,-100,5,23,78,9,1,0,100,0,34,12299,3,2,6,87};
      

        for(int i = number.length - 1;i>0;i--)
        {
         for(int j = 0;j<i;j++)
          {  
               if(number[j+1]>number[j])
              {
                int temp = number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
              }
           
          } 
        }
     for(int k=0;k<number.length;k++)  //checking if it was sorted
      {System.out.print(number[k]+" ");}

       
      
   }
}