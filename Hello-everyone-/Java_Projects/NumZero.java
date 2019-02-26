public class NumZero
   {
      public static void main(String[] args)
      {	 double[] list = {0.0,8.78,0.0,0.0,0.0,1.1,0.0,58.7,0.5,0.0,100.45,0.25,0.0,5.5,0.0}; 
   	 int i;             
	 int zero=0;         
               for ( i = 0 ; i < list.length ; i++ )
   	 {
   	    if ( list[i] == 0.0 )
   	    ++zero;
   	 }
       	 System.out.println( zero );   
          
      }
   }

