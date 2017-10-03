///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1001//////////
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
        double r, a, pi=3.14159;
    /////////////////////////////
    
    scanf("%lf", &r);//DOUBLE UTILIZA %LF NO VARIÁVEL
    
    a = pi*(r*r);
 
    printf("A=%.4lf\n", a);
    return 0;
}
