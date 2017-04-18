#include <stdio.h>
void main()
{
     int x;
     void hanoi(int n ,char A,char B, char C );
     printf("请输入碟子个数");
     scanf("%d",&x);
     hanoi(x,'A','B','C');
}


void hanoi(int n , char A,char B, char C)
{
    void move(char ,char);
     if(n==1)move(A,C);
     else
         {

         hanoi(n-1,A,C,B);
          move(A,C);
          hanoi(n-1,B,A,C);
         }

}
 void move(char x ,char y )
{
printf("%c---%c\n",x,y);

}







