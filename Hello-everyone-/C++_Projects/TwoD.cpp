#include<iostream>
using namespace std;

template<typename T>
void twoD(T arr[3][3], int n){
   int i, j;
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(arr[i][j]!=arr[j][i]){
          cout<<"Not symmetric"<<endl;
          return;}
   cout<<"Matrix is symmetric"<<endl;
  }

int main(){
int a[3][3]={{1,0,0},
             {0,1,0},
             {0,0,1}} ;
twoD(a,3);
return 0;
}
