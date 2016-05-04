#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int any(char s1[], char s2[]);

int main(void) {
	// your code goes here
	
	char s1[]="pav";
	char s2[]="d";
	printf("%d",any(s1,s2));
	return 0;
}
int any(char s1[], char s2[]){
    
    int i, j, k;
    int instr2;

    for (i = j = 0; s1[i] != '\0'; i++) {
        instr2 = FALSE;
        for (k = 0; s2[k] != '\0'&& !instr2; k++)
           if (s2[k] == s1[i])
                instr2 = TRUE;
                
        if (instr2)
            return i;
        
        else 
        return -1;
    }
   
}



