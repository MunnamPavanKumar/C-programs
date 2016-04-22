#include<stdio.h>
float conversion(float farhen){
    return 5.0/9.0*(farhen-32.0);
    
}
int main(){
    float farhen;
    printf("enter the farhen temp");
    scanf("%f",&farhen);
    printf("the converted temp %.1f",conversion(farhen));
   
}
