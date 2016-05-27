#include <stdio.h>

#define max 1000
void reverse(char s[]){
    
    
    int i=0,j=0;
    
    char temp;
 
    while(s[i]!='\0'){
        ++i;
        
        }
    
    
      
    while(j<(i/2)){
      
        temp=s[j];
        s[j]=s[i-1-j];
        s[i-1-j]= temp;
        ++j;
        
     
    }
}
int main(void) {
	// your code goes here
	char s[max];
int i=0,c;

while((c=getchar())!=EOF){
	    
	       s[i]=c;
	     ++i;
	        
	    if(c=='\n' ){
	    
	       s[i]='\0';
	        reverse(s);
	        	printf("%s\n",s);
	        	i=0;
	       
	       }
	    
	   
	}
	if(c==EOF){
	    
	    
	    s[i]='\0';

	    reverse(s);
	        	printf("%s",s);
	    
	}
	
	

}

