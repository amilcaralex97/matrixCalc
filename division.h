#include"matrizDinamica2D.h"

class division: public matrizDinamica2D {
public:
int** mat;
int** resultado;
int tamfil_re;
int tamcol_re;

division(void);

void iniciardiv(int, int);
void llenardiv(void);
void imprimirdiv(void);
void imrediv(void);



}; 

