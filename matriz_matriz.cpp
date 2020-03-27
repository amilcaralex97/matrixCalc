#include<cstdlib>
#include<iostream>
#include"matrizDinamica2D.h"
#include<stdlib.h>
#include"matriz_matriz.h"


using namespace std;
                        
matriz_matriz::matriz_matriz(void){}

void matriz_matriz::iniciar(int m, int n){
this->tamfil_re=m;
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

void matriz_matriz::llenar(void){
     
for(int i=0; i<tamfil_re; i++)
{for(int y=0; y<tamanoColumnas; y++)
{resultado[i][y]=0;}}

 int m=0;
for(int i=0; i<tamfil_re; i++)
{ for( ;m<tamanoColumnas;m++)
  {   for(int j=0; j<tamcol_re; j++)
      {resultado[i][m]=mat[i][j]*ptrMatrizDinamica2D[j][m] + resultado[i][m];}
   } m=0;
}

}


void matriz_matriz::imprimir(void){




if(tamfil_re==1 ||tamcol_re==1)
{cout<<"1 VECTOR"<<endl<<endl;}
else
{cout<<"1 MATRIZ" <<endl<<endl;}

for(int i=0; i<this->tamfil_re; i++){
for(int j=0; j<this->tamcol_re; j++)
cout<<this->mat[i][j]<<"\t";
cout<<endl;}

cout<<endl;
cout<<endl;


}

void matriz_matriz::imre(void){

if(tamfil_re==1 ||tamanoColumnas==1)
{cout<<"VECTOR RESULTANTE"<<endl<<endl;}
else
{cout<<"MATRIZ RESULTANTE"<<endl<<endl;}

for(int i=0; i<tamfil_re; i++)
{for(int y=0; y<tamanoColumnas; y++)
{cout<<resultado[i][y]<<"\t";}
cout<<endl;} }


