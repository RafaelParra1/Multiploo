#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    int a;

    archivo=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");

    while (!feof(archivo)){
        fscanf(archivo,"%d", &a);
        if(a%3==0){
            fprintf(archivo2,"Multiplo de 3\n",a);
        }else{
            fprintf(archivo2,"%d\n",a);
        }
    }
    fclose(archivo);
    fclose(archivo2);
}