///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1014//////////
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
        double a, b, t;
    /////////////////////////////
    scanf("%lf %lf", &a, &b);//%lf PARA DOUBLE
    
    
    t = a/b; //SEMPRE CONTAR DOUBLE COM DOUBLE, LEMBRE-SE!!
    
    printf("%.3lf km/l\n", t);//%.3lf PARA 3 CASAS DECIMAIS
    return 0;
}
