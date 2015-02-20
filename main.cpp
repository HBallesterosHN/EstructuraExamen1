#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
    float suma=0;//variable para gusrdar la suma
    while (!mi_cola.empty()|| !mi_pila.empty())//recorre la cola
        {
           suma +=mi_cola.front();//acumula la suma de cola
            suma +=mi_pila.top();//acumula la suma de pila
                mi_cola.pop();//saca elemento de la cola
                mi_pila.pop();
        }
    return suma;//retorma suma
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
    string x = "",  y = "";
 for (vector<string>::iterator i = mi_vector.begin(); i != mi_vector.end(); i++)
    {
        x= *i;
        //cout<<endl<<x;
        vector<string>::iterator j = i;

         for (j++; j != mi_vector.end(); j++)
        {
            //cout<<endl<<y;
            y = *j;
            if(x == y)
                {
                return true;
                }
        }
    }

    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
    int x=0;
    while(!edades.empty())
        {
        if(edades.front()>17)
            {
            x++;
            }
        edades.pop_front();
        }
    return x;
}




//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{

    map<string,int> agenda;

        agenda["Lolo"]=98923212;
        agenda["Lola"]=92123243;
        agenda["Rufo"]=93212322;
        agenda["Punpun"]=99321273;
        agenda["Ponpon"]=92133243;
    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{    //set <double>mi_set2;
    set <double>::iterator i = mi_set.begin(); //variable iterador para recorrer set1
    while(i!=mi_set.end())
        {//inicio while
        i++;
        if (i==mi_set.end())
                {
                //cout<<*i<<endl;
                i--;
                return *i;
                }
        }//end while
    return 0;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
