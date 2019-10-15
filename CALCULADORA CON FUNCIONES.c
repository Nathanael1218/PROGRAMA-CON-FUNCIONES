/*HERNANDEZ GAONA VICTOR NATHANAEL
1AV6   CALCULADORA CON FUNCIONES*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void menu();
void opcion(int& op);
int suma(int a, int b);
int resta(int a, int b);
int multi(int a, int b);
int divi(int a, int& b);
int ldatos();
void repe();
void lrepe(char& o);
void imprimir();
int main (void){
int a,b,op;
float c;
char o;
do
{
menu();
opcion(op);
a=ldatos();
b=ldatos();
switch (op){
    case 1:
    c=suma(a,b);
    printf("\n El valor de c es: %f",c);
    break;
    case 2:
    c=resta(a,b);
    printf("\n El valor de c es: %f",c);
    break;
    case 3:
    c=multi(a,b);
    printf("\n El valor de c es: %f",c);
    break;
    case 4:
    c=divi(a,b);
    printf("\n El valor de c es: %f",c);
    break;
    default:
    printf("\nOpcion no valida");
    break;
    }
    repe();
    lrepe(o);
    o=getch();
    }while(o=='S'||o=='s');
}
void menu(){
    printf("\n1-SUMA \n2-RESTA\n3-MULTIPLICACION\n4-DIVISION");
}
void opcion(int& op){
    printf("\nDame la opcion (1-4)");
    scanf("%d",&op);
}
int suma(int a,int b){
         return (a+b);
}
int resta(int a,int b){
         return (a-b);
}
int multi(int a,int b){
         return (a*b);
}
int divi (int a,int& b){
    while (b==0){
        printf("\nNo es posible el valor de 0 para b, introducelo nuevamente\t");
        b=ldatos();
    }
         return (a/b);
}
int ldatos(){
    int tamp;
    printf("\nDame un valor\t");
     scanf("%d",&tamp);
    return tamp;
}
void repe(){
    printf("\nDeseas efectuar otra operacion?\t");
}
void lrepe(char& o){
    printf("\nS-si\nN-no\t");
    scanf("%c",&o);
}
