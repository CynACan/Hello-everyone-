import java.util.Arrays;

class MaxCoin{

  public static void main(String[] args)
   {
    int[] coins={1,1,1,25,10,25,10,25,25,5,50,10};
    Arrays.sort(coins);
    int count=0, j;
    for(j=0;j<coins.length-1;j++)
      {
       count += coins[j];
       if(coins[j+1]>count+1)
        {
          System.out.println("Can only make up to: "+count);
          break;
        }
       
      }
   
   }
}