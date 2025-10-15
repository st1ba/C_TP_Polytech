#include <stdio.h>
#include <stdlib.h>

int remplace(char*);
int* index_ret(char*, char);

int main(void){
    char string[255] = "Bonjour a tous les amis.   ";

    int nb=remplace(string);
    printf("La fonction a remplacé %d espaces.\n",nb);
    printf("%s",string);

    printf("\nindex des occurences:");
    int* idx=index_ret(string,'_');
    for(int i=0;i<nb;i++)
    {
        printf("%d ", idx[i]);
    }

}

int* index_ret(char* s, char c)
{
    int* p = NULL;
    int i=0;
    int nb=0;

    while(s[i]!=0){
        if(s[i]==c) nb++;
        i++;
    } 
    p=(int*)calloc(nb,sizeof(*p));

    i=0;
    int idx=0;
    while(s[i]!=0) {
        if(s[i]==c){
            p[idx]=i;
            idx++;
        }
        i++;
    }
    return p;
}

int remplace(char* string)
{
    int i=0;
    int swaps=0;
    while(string[i]!=0)
    {
        if(string[i]==' ')
        {
            string[i]='_';
            swaps++;
        }
        i++;
    }
    return swaps;
}