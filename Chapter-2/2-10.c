#include<stdio.h>
int lower(int c){
    int d;
    (c>='A'&&c<='Z') ? (d=c + 'a'-'A'):(d=c);
    return d;
}
int main(){
    int c;
    while((c=getchar())!=EOF){
        printf("%c",lower(c));
    }
    return 0;
}
