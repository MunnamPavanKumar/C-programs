#include<stdio.h>

int main(){
    int c,prevblank=0;
    
    while((c=getchar()) !=EOF){
        if(c==' ' || c=='\n'||c='\t'){
           
            if (prevblank == 0)
                putchar('\n');
            prevblank = 1;
            
            
        }
        else{
            prevblank = 0;
            putchar(c);
        }
        
        
    }
    
}
