#include<cstdlib>
#include<iostream>
#include"matrizDinamica2D.h"
#include<stdlib.h>
#include"division.h"


using namespace std;
                        
division::division(void){}

void division::iniciardiv(int m, int n)
{this->tamfil_re=m;
this->tamcol_re=n;	

this->mat= new int*[this->tamfil_re];
for(int i=0; i<this->tamfil_re; i++)
this->mat[i]= new int[this->tamcol_re];
cout<<endl;

for(int i=0; i<this->tamfil_re; i++)
{for(int j=0; j<this->tamcol_re; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>mat[i][j];}}


this->resultado= new int*[this->tamfil_re];
for(int i=0; i<this->tamfil_re; i++)
this->resultado[i]= new int[this->tamanoColumnas];
}

void division::llenardiv(void)
{}


void division::imprimirdiv(void)
{}

void division::imrediv(void)
{}









   
 
 




