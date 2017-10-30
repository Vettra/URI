///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1018//////////
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
        int a,m,d;
    /////////////////////////////
    scanf("%d", &d);//%d PARA INT

	for(a=0; 365<=d; a++)
	{
		d = d - 365;
	}

	for(m=0; 30<=d; m++)
	{
		d = d - 30;
	}
	
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);//ESPERO QUE ATÉ AQUI VOCÊ NÃO ESQUEÇA O \N!! LOL
    return 0;
}
