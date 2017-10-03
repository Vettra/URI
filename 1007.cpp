////////////////////////////////////////
//////////////PROBLEM 1007//////////////
///////////////BY:VETTRA////////////////
////////////////////////////////////////
//////////////BIBLIOTECAS///////////////
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
///////////////////////////////////////// 
 
int main()
{
    
    //////////VÁRIAVEIS//////////
          int a, b, c, d, t;
    /////////////////////////////
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    t = (a*b)-(c*d);//FORMULA DO PROBLEMA
 
    printf("DIFERENCA = %d\n", t);
    return 0;
}
