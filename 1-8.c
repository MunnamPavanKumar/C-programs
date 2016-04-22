#include<stdio.h>

int main(){
    int b=0,t=0,n=0,c;
    
    while((c=getchar()) != EOF){
        if(c==' '){
            ++b;
           
        }
        if(c=='\t'){
            ++t;
           
        }
        if(c=='\n'){
            ++n;
        }
    }
   printf("%d,%d\n%d",&b,&t,&n);
}
