//El dueño de una papelería desea un programa que le indique el precio de venta de un artículo dado. El
//precio se calcula de acuerdo con la siguiente fórmula: PVP = precio_coste + ganancia. Donde la ganancia
//será:
// El 15% si el precio de coste es inferior 3.
// 50 Centavos si el precio de coste está entre 3 y 6.
// El 25% si el precio de coste supera los 6.

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    int precio_coste;
    double pvp, ganancia;

    cout<<"=================================================================\n";
    cout<<"=================================================================\n";
    cout<<"======================Calcula=la=ganancia!!======================\n";
    cout<<"=================================================================\n";
    cout<<"=================================================================\n";



    cout<<"\n\nIngrese el precio del articulo: "<<endl;
    cin>> precio_coste;

    if (precio_coste < 3 && precio_coste > 0){ //Se condiciona mayor a cero para hacer el programa más congruente, lógico y más estable.
        ganancia = precio_coste * 0.15;    //Se calcula la ganancia en base a lo que solicita el problema. Que en este caso al cumplir
                                            //la condición de ser menor a 3 se calcula una ganancia del 15% sobre el precio ingresado por el usuario.
        pvp = precio_coste + ganancia;     //Se suma el precio de coste más la ganancia.
        cout<<"El precio de venta del articulo es: "<<pvp<<endl;//Por último el programa tira el resultado de la variable "pvp" más
                                                                //un texto para mayor comprensión.
    }else if (precio_coste >= 3 && precio_coste <= 6 && precio_coste > 0) {//Aquí se condicina en base a lo solicitado por el problema y se
                                                                           //lo condiciona mayor a 0 para que tenga mayor estabilidad.
        ganancia = 0.5;                    //Se iguala la ganancia a 0.5 ya que el problema solicita que si está entre el rango de 3 a 6, debe tener
                                                //una ganancia de 50 centavos.
        pvp = precio_coste + ganancia; //Para terminar esta condición, se suman las variables en la varibale "pvp".
        cout<<"El precio de venta del articulo es: "<<pvp<<endl;//Se invoca la variable "pvp" con su texto.
    } else if (precio_coste > 6) {//Se condiciona en este caspo, si el precio del articulo es mayor a 6 se realice la siguiente sintaxis:
        ganancia = precio_coste * 0.25;//Se determina la ganancia en base a lo requerido por el problema que en este caso es 0.25 o 25% del
                                       //precio del articulo si cumple la condicíón.
        pvp = precio_coste + ganancia;//Se suman las variables "precio_coste", "ganancia" en la variable "pvp".
        cout<<"El precio de venta del articulo es: "<<pvp<<endl;//Se invoca un "cout" para dar al usuario el precio de venta.
    } else {//Por último, esta condición va en caso de que el programa tome un valor menor o igual a 0 lo cual, al estar "depurado" en
            //las condiciones predecesoras no sucederá, más sin embargo se colocó está condición para tener una mayor performance en el código.
        cout<<"El precio del articulo no puede ser 0 o menor.";
    }


    getch();
    return 0;
}
