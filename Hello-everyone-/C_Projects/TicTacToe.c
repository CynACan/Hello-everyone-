#include<stdio.h>

void Place(char[3][3],int,char);
int WinnerCheck(char[3][3],char);

void main()
{

char grid[3][3]={
                {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}
                };

int play1,play2,win,count=0;
char menu;
printf("play game of Tic Tac Toe? Y/N");
scanf("%c",&menu);
while(menu=='y' || menu=='Y')
{
printf("please enter a number 1 through 9: \n");
while(count<=9)
{
 char playO = 'O';
 char playX = 'X';
 printf("Please choose a space player 1:");
 scanf("%d",&play1);
 count++;
 
 if(count==9)
   break;
 else
   Place(grid,play1,playO);
   
 printf("Please choose a space player 2:");
 scanf("%d",&play2);
 count++;

 if(count==9)
   break;
 else
   Place(grid,play2,playX);

 for(int i = 0; i<3;i++)
 {  
    for(int j = 0; j<3; j++)
    printf("%c ",grid[i][j]);
    printf("\n");
 }
 win = WinnerCheck(grid,playO); 
      if(win==1)
      break;
 win = WinnerCheck(grid,playX);
    if(win==1)
      break;
}
if(win==0)
   printf("draw game!");
printf("Play again? Y/N");
getchar();
scanf("%c",&menu);
//////
}

return;
} 

void Place(char p[3][3],int choice,char chartype){
int play;
switch(choice)
  {
case 1:if(p[0][0]=='X' || p[0][0]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[0][0]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[0][0]=chartype;
       break;
case 2:if(p[0][1]=='X' || p[0][1]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[0][1]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[0][1]=chartype;
       break;
case 3:if(p[0][2]=='X' || p[0][2]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[0][2]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[0][2]=chartype;
       break;
case 4:if(p[1][0]=='X' || p[1][0]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[1][0]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[1][0]=chartype;
       break;
case 5:if(p[1][1]=='X' || p[1][1]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[1][1]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[1][1]=chartype;
       break;
case 6:if(p[1][2]=='X' || p[1][2]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[1][2]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[1][2]=chartype;
       break;
case 7:if(p[2][0]=='X' || p[2][0]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[2][0]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[2][0]=chartype;
       break;
case 8:if(p[2][1]=='X' || p[2][1]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[2][1]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[2][1]=chartype;
       break;
case 9:if(p[2][2]=='X' || p[2][2]=='O')
       {  
         printf("Already filled with %c, please pick something else ",p[0][0]);
         scanf("%d",&play);
         Place(p,play,chartype);
       }
       else
       p[2][2]=chartype;
       break;
  }
};

int WinnerCheck(char grid[3][3],char player)
{

if((grid[0][0]==player && grid[0][1]==player && grid[0][2]==player ||
    grid[1][0]==player && grid[1][1]==player && grid[1][2]==player ||
    grid[2][0]==player && grid[2][1]==player && grid[2][2]==player ||
    grid[0][0]==player && grid[1][0]==player && grid[2][0]==player ||
    grid[0][1]==player && grid[1][1]==player && grid[2][1]==player ||
    grid[0][2]==player && grid[1][2]==player && grid[2][2]==player ||
    grid[0][0]==player && grid[1][1]==player && grid[2][2]==player ||
    grid[0][2]==player && grid[1][1]==player && grid[2][0]==player))
       {
        printf("player %c won!\n", player );
        return 1;
       }
return 0;
  
}

