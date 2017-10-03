///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1011//////////
//////////Gustavo B. Ruiz//////////
///////////////////////////////////
 
///////////////////////////////////
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <locale>
#include <map>
#include <math.h>
#include <set>
#include <sstream>
#include <string>
#include <vector>
///////////////////////////////////
 
int main()
{
 
    //////////VÁRIAVEIS//////////
        double pi=3.14159, r, v;
    /////////////////////////////
 
    scanf("%lf", &r);//%lf PARA DOUBLE
 
    v = 4.0/3.0 * pi * pow(r, 3);// "pow" É UM RECURSO UTILIZADO PARA ELEVAR UM NÚMERO À "X", PREENTE NA BIBLIOTECA MATH
 
    printf("VOLUME = %.3lf\n", v);//3.lf PARA APENAS 3 CASAS DECIMAIS
    return 0;
}
