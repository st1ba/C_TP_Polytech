#include <stdio.h>

void copy(char*,char*);
int compare(char*, char*);  
int length(char*);
char* index(char*,char);

int main(void){
    char s1[255] = "Bonjour a tous";
    char s2[255];
    copy(s1,s2);
    printf("%s",s2);

    printf("\ns1 compare s2 = %d",compare(s1,s2));
    char s3[255] = "Bonjour a touz";
    printf("\ns1 compare s2 = %d",compare(s2,s3));  

    printf("\ns1 est long de %d caracteres",length(s1));


    printf("%c",*index(s3,'z'));
}

void copy(char* s1,char* s2){
    int i=0;
    while(s1[i]!=0)
    {
        s2[i]=s1[i];
        i++;
    }
    return;
}

int compare(char* s1,char* s2){
    int i=0;
    while(s1[i]!=0)
    {
        if(s1[i]!=s2[i]) return(s1[i]-s2[i]);
        i++;
    }
    if(s2[i]!=0) return -1;
    return 0;
}

int length(char* s)
{
    int i=0;
    while(s[i]!=0) i++;
    return i;
}

char* index(char* s,char c)
{
    int i=0;
    while(s[i]!=0)
    {
        if(s[i]==c)return(&s[i]);
        i++;
    }
    return NULL;
}