#include <stdio.h>

int main(void) {
	// your code goes here
	
	int c;
	
	while((c=getchar())!= EOF){
	    if(c=='\t'){
	        puts("\\t");
	    }
	   if(c=='\n'){
	        puts("\\n");
	    }
	   if(c=='\\'){
	        puts("\\\\" );
	    }
	   
	        putchar(c);
	    
	}
	return 0;
}
