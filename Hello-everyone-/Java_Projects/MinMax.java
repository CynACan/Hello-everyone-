public class MinMax
   {
      public static void main(String[] args)
      {  double[] list = { 8.78,1.1,58.7,0.5,100.45,0.25,5.5}; 
   	 int i;             
	 double min,max;         
         min = max = list[0];         
         for ( i = 1 ; i < list.length ; i++ ) {
   	    if ( list[i] < min )
   	    {  min = list[i];   }
            if ( list[i] > max )
            {    max = list[i];   } }
       	 System.out.println( min );   
         System.out.println( max ); 
      }
   }
