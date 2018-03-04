#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct string{
       int tam;
       int loc;
       char *p;
} string;

int compare(const void * a, const void * b){
    string * ptr_a = (string *)a; 
    string * ptr_b = (string *)b;
    
    if(ptr_b->tam == ptr_a->tam) return ptr_a->loc - ptr_b->loc;
    return ptr_b->tam - ptr_a->tam;
}

int main(){
    int n, i, cont, j, k;
    char linha[2600];
    char *pch;
    
    scanf("%d%*c", &n);
    
    for(i = 0; i < n; i++){
          gets(linha);
          cont = 0;
          string array[51];
          pch = strtok (linha," ");
          while(pch != NULL){
                array[cont].p = pch;
                array[cont].tam = strlen(pch);
                array[cont].loc = cont; 
                cont++;
                pch = strtok (NULL, " ");
          }
          qsort(array, cont, sizeof(string), compare);
          for(j = 0; j < cont; j++){
                if(j == cont-1) printf("%s\n", array[j].p);
                else printf("%s ", array[j].p);
          }
    }    
    return 0;
}
