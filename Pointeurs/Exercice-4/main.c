#include <stdio.h>

int compare(char*, char*);

int main(void){
    char password[255]="Polytech";
    char input[255];

    do{
        printf("== Entrez le mot de passe ==\n\n");
        int i=0;
        do{
           input[i]=getchar();
           i++;
        }while(input[i-1]!='\n');
        input[i-1]=0;
    }while(compare(input,password)!=0);
    printf("Accès accordé!");

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