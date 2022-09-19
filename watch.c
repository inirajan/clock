#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    int h,m,s; // h is for hour ,m is for minute and s is for second
    int d=1000; // delay of 10000 mili second
    printf("\n Set time:");
    scanf("%d%d%d",&h,&m,&s);
    if(h<12 || m<60 || s<60){
        
        printf(" ERROR ! \n");
        exit("0");
    }
    while(1){                 // for infnity loop
        s++;
        if(s>59){
            m++;
            s=0;

        }
        if(m>59){
            h++;
            m=0;

        }
        if(h>12){
            h=1;
        }

      printf("\n clock :");
      printf(" %02d : %02d : %02d ",h,m,s);
      Sleep(d);
      system("cls");

    }


}

