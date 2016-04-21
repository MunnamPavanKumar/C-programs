#include<stdio.h>

int main(){
    float f;
    float c;
    for(f=300;f>=0;f=f-20){
        printf("%3.0f\t%6.1f\n",f,5.0/9.0*(f-32));
    }
}
