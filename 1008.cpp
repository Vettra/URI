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
          int a;
          double b, c, t;
    /////////////////////////////
    
    scanf("%d %lf %lf", &a, &b, &c);
    
    t = b*c;
 
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, t);
    return 0;
}
