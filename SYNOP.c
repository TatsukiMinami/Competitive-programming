#include<stdio.h>
int main()
{
    int m,vv;
   scanf("%d",&m);

   if(m<100){
       vv=00;
   }
   else if(100<=m && m <=5000){
       vv = m*10/1000;
   }
   else if(m>=6000 && m <=30000){
       vv=m/1000+50;
   }
   else if(m>=35000&& m<=70000){
       vv=(m/1000-50)/5+80;
   }
   else if(m>70000){
       vv=89;
   }
   printf("%d",vv);
   return 0;
   
}
