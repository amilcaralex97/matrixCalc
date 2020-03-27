class determinante{
public:
int A,B;
long double** Mat;
long double** matrizin;
long double** matuno;
long double** matrizb;
 float** inversabn;
long double** resultado;
long double** C;
long double** inv;
long double deter;
int tamfil_re;
int tamcol_re;



void inicializarDeterminante(int);
long double llenarDeterminante(int);
void imprimirDeterminante(int);  
 
 
 
void inicializarInversa(int);
void llenarMatrizInversa(int);
void ImprimirMatrizInversa(int);

void iniciardivision(int, int);
void llenardivision(void);
void imprimirdivision(void);
void imp(void);

 
};

