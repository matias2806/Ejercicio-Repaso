#include <stdio.h>
#include <stdlib.h>
/*1-Suma de los negativos.
					2-Suma de los positivos.
					3-Cantidad de positivos.
					4-Cantidad de negativos.
					5-Cantidad de ceros.
					6-Cantidad de números pares.
					7-Promedio de positivos.
					8-Promedios de negativos.
					9-Diferencia entre positivos y negativos, (positvos-negativos). */
int main()
{
    int prueba;
    char continua ='s';
    int contadorPos=0;
    int contadorNeg=0;
    int contadorCeros=0;
    int contadorPar=0;
    int contadorImpar=0;
    float acumuladorPos=0;
    float acumuladorNeg=0;
    float realPos=0;
    float realNeg=0;

    do{
        printf("Ingrese un numero del -100 al +100\n");
        setbuf(stdin, NULL);
        scanf("%d",&prueba);

        if(prueba>0){
            contadorPos++;
        }

        if(prueba<0){
            contadorNeg++;
        }

        if (prueba ==0){
            contadorCeros++;
        }

        if(prueba%2==0){
            contadorPar++;
        }

        if(prueba%2!=0){
            contadorImpar++;
        }

        if(prueba>0){
            acumuladorPos=acumuladorPos+prueba;
            realPos=acumuladorPos/contadorPos;

        }

         if(prueba<0){
            acumuladorNeg=acumuladorNeg+prueba;
            realNeg=acumuladorNeg/contadorNeg;

        }

        printf("El contador de positivos es %d \n", contadorPos);
        printf("El contador de negativos es %d \n", contadorNeg);
        printf("El contador de ceros es %d \n", contadorCeros);
        printf("El contador de pares es %d \n", contadorPar);
        printf("El contador de impares es %d \n", contadorImpar);
        printf("El promedio de numeros pares es %2.f \n", realPos);
        printf("El promedio de numeros pares es %2.f \n", realNeg);
        setbuf(stdin, NULL);
        printf("Desea ingresar otro numero\n");
        scanf ("%c",&continua);

    }while(continua != 'n');
return 0;
}
