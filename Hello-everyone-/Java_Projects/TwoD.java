public class TwoD
   {
      public static void main(String[] args)
      {  int [][] arr={{  0,  4, 12 },
                       {  4,  0,  2 },
                       { 12,  2,  0 }
                       };
   	 int i,j;
         for(i=0;i<3;i++){
            for(j=0;j<3;j++){
             if(arr[i][j]!=arr[j][i]){
              System.out.println("Not symmetrical");
              return;}
                   }
               }
              System.out.println("Matix is symmetric");
       }   
      }
