///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1019//////////
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
        int h,m,s;
    /////////////////////////////
    scanf("%d", &s);//%d PARA INT

	for(h=0; 3600<=s; h++)
	{
		s = s - 3600;
	}

	for(m=0; 60<=s; m++)
	{
		s = s - 60;
	}
	
    
    printf("%d:%d:%d\n", h, m, s);//ESPERO QUE ATÉ AQUI VOCÊ NÃO ESQUEÇA O \N!! LOL
    return 0;
}
