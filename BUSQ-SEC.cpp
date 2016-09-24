#include <stdio.h>
int Encontrar, encontrado, i;
int a[4] = {3,1,2,4};
main(){
    printf("Escriba un numero por favor:");
    scanf("%d", &Encontrar);
    printf("Usted ingreo %d\n",Encontrar);
    encontrado = 0;
    for (i=0;i<4;i++){
        if (a[i] == Encontrar){
            encontrado =1;
        }
    }
    if(encontrado==1){
        printf("Numero encontrado!");
    }else{
        printf("Numero no encontrado!\nLista de Numeros ");
        for (i=0; i<4; i++){
            (i<3)?printf("%d, ",a[i]):printf("%d.",a[i]);
        }
    }
    getchar();
    return 0 ;
}
 
/****
algoritmo busqueda_secuencial
inicio
leer(t) // t es el numero que buscamos
encontrado <- falso
desde i<-1 hasta N hacer
    si A[i] = t entonces
        encontrado <- verdadero
    fin si
fin desde
si encontrado entonces
    escribir('Elemento encontrado')
sino
    escribir('Elemento no encontrado')
fin si
****/
