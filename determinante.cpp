#include <cstdlib>
#include <iostream>
#include"determinante.h"

using namespace std;

  
  
void determinante::inicializarDeterminante(int Dim)
{
int Tam=101;
int a;
     
this->Mat= new long double*[Tam];
for(int i=1; i<=Tam; i++)
this->Mat[i]= new long double[Tam];

 
 
 for(A=1;A<=Dim;A++) for(B=1;B<=Dim;B++){
  
  /*a=rand()%2;
(a==1)? this->Mat[A][B]=rand()%10 :this->Mat[A][B]=-rand()%10;*/
  
  cout<<"posicion"; 
  cin>>Mat[A][B];
  
  
  }
  
  
  
  this->matuno= new long double*[Dim];
for(int i=0; i<Dim; i++)
this->matuno[i]= new long double[Dim];

  int x=0;
  int y=0;
  for(A=1;A<=Dim;A++) 
  {for(B=1;B<=Dim;B++)
  { matuno[x][y]=Mat[A][B];
  y++;}
  x++;
  y=0;}


}


long double determinante::llenarDeterminante(int Dim)
{
    int NoCero,Col,C1,C2,NoReg,Perm=0;
 long double Pivote,V1,Det=1;
 for(Col=1;Col<=Dim;Col++){
  NoCero=0;A=Col;
  while((NoCero==0)&&(A<=Dim)){
   if((Mat[A][Col]>0.0000001)||((Mat[A][Col]<-0.0000001))){
    NoCero=1;}
   else A++;}
  if (A>Dim) NoReg=1;
  if (A!=Col) Perm++;
  Pivote=Mat[A][Col];
  for(C1=1;C1<=(Dim);C1++){
   V1=Mat[A][C1];
   Mat[A][C1]=Mat[Col][C1];
   Mat[Col][C1]=V1;}
  for(C2=Col+1;C2<=Dim;C2++){
   V1=Mat[C2][Col];
   for(C1=Col;C1<=(Dim);C1++){
    Mat[C2][C1]=Mat[C2][C1]-((V1/Pivote)*Mat[Col][C1]);}}
 }
    for(C2=1;C2<=Dim;C2++) Det=Det*Mat[C2][C2];
 A=Perm;
 if ((A%2)==1) Det=-Det; 
 if (NoReg==1) Det=0;
    
    deter=Det;
   return Det;
     
}

void determinante::imprimirDeterminante(int Dim)
{ 

     for(A=1;A<=Dim;A++){
  for(B=1;B<=(Dim);B++)
   cout<<Mat[A][B]<<"\t";
  cout<<"\n";}
  

  }
  




//******************************************************************************************************************************************************






void determinante::inicializarInversa(int orden)
	{
this->matrizin= new long double*[orden];
for(int i=0; i<orden; i++)
this->matrizin[i]= new long double[orden];

this->C= new long double*[orden];
for(int i=0; i<orden; i++)
this->C[i]= new long double[orden];

this->inv= new long double*[orden];
for(int i=0; i<orden; i++)
this->inv[i]= new long double[orden];
		
		
int x=0;
for(int i=0; i<orden; i++)
{for(int j=0; j<orden; j++)
{matrizin[i][j]=0;
matrizin[i][i]=1;}}
 	
 	
	
	}




void determinante::llenarMatrizInversa(int orden)
	{  if(deter!=0)
	{
	
	
 
	// como se realiza por metodo gauss jordan evitar que el primer pivote sea cero
		int k=0;
	    for(int a=0;a<orden;a++)
          for(int b=0;b<orden;b++){
            	if( matuno[k][k]!=0){
                    C[a][b]= matuno[a][b];
            	inv[a][b]=matrizin[a][b];}
            	else
            	if( matuno[a][k]!=0)
            	{
            		int m=1;
            		if(m==1){
            		C[k][b]= matuno[a][b];
            		inv[k][b]=matrizin[a][b];
            		for(int l=1;l<orden;l++)
            		for(int m=0;m<orden;m++)
            		{
            			if(l!=a)
            			{
            				C[l][m]= matuno[l][m];
            				inv[l][m]=matrizin[l][m];
						}
						else
						{
							C[a][m]= matuno[k][m];
            				inv[a][m]=matrizin[k][m];
						}}m++;}
				}
            }
			//realizacion del metodo gauss jordan
  int l=0;
	    long double temp=0,aux=0;
	    for(int i=0;i<orden;i++){
		for(int a=0;a<orden;a++){
		temp=C[l][l];
		if(a!=l)
		{
			aux=C[a][l];
		}
            for(int b=0;b<orden;b++){
			C[l][b]=C[l][b]*(1/temp);
		    inv[l][b]=inv[l][b]*(1/temp);
		    if(a!=l){
			C[a][b]=C[a][b]-C[l][b]*aux;
			inv[a][b]=inv[a][b]-inv[l][b]*aux;}}
	}l++;}
	
for(int a=0; a<orden; a++)
{for(int b=0; b<orden; b++)
	{if(inv[a][b]<1e-012&&inv[a][b]>0 || inv[a][b]>-1e-012&&inv[a][b]<0)
            inv[a][b]=0;}}
            	//////////////////////

//////////////////////////////////////////////
  }
  
  else
  
       cout<<endl; 
	}



void determinante::ImprimirMatrizInversa(int orden)
	{
	
if(deter!=0)
{


for(int i=0; i<orden; i++)
{for(int j=0; j<orden; j++)
 {cout<<inv[i][j]<<"\t";}
 cout<<endl;
 
 } 
 
}

else
cout<<"El determinante es igual a 0, no existe matriz inversa"<<endl<<endl;
 
 
	}

   
 
 
//*************************************************************************************************************


void determinante::iniciardivision(int m, int n)
{
this->tamfil_re=m;
this->tamcol_re=n;
	
cout<<endl<<endl<<"Matriz A";

this->matrizb= new long double*[tamfil_re];
for(int i=0; i<tamfil_re; i++)
this->matrizb[i]= new long double[tamcol_re];
cout<<endl;

for(int i=0; i<tamfil_re; i++)
{for(int j=0; j<tamcol_re; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>matrizb[i][j];}}


this->resultado= new long double*[tamfil_re];
for(int i=0; i<tamfil_re; i++)
this->resultado[i]= new long double[tamcol_re];
}

void determinante::llenardivision(void){
     

long double cero=0;

for(int i=0; i<tamfil_re; i++)
{for(int y=0; y<tamcol_re; y++)
{resultado[i][y]=cero;}}

int m=0;
for(int i=0; i<tamfil_re; i++)
{ for( ;m<tamcol_re;m++)
  {   for(int j=0; j<tamcol_re; j++)
      {resultado[i][m]=matrizb[i][j]*inv[j][m] + resultado[i][m];}
   } m=0;
}




for(int i=0; i<tamfil_re; i++)
{ for(m=0; m<tamcol_re;m++)
  {  if(resultado[i][m]<1e-012&&resultado[i][m]>0 || resultado[i][m]>-1e-012&&resultado[i][m]<0)
            resultado[i][m]=0;}}


}

void determinante::imprimirdivision(void)
{
    cout<<endl<<endl;
cout<<"MATRIZ A/B"<<endl;

for(int i=0; i<tamfil_re; i++)
{for(int j=0; j<tamcol_re; j++)
cout<<resultado[i][j]<<"\t";
cout<<endl;} 
     
}

void determinante::imp(void)
{ 

cout<<"MATRIZ A"<<endl;
for(int i=0; i<tamfil_re; i++)
{for(int j=0; j<tamcol_re; j++)
cout<<matrizb[i][j]<<"\t";
cout<<endl;}

cout<<endl<<endl;
cout<<"MATRIZ B"<<endl;
for(int i=0; i<tamcol_re; i++)
{for(int j=0; j<tamcol_re; j++)
cout<<matuno[i][j]<<"\t";
cout<<endl;}  
 cout<<endl<<"Determinante:"<<deter<<endl<<endl;



  }
  

