#include <stdio.h>
#define FT() int main(){\
/*
  chaine de sortie
*/\
int i=5;\
while(i >= 0){\
char *c="#include <stdio.h>%c#define FT() int main(){%c%c%c*%c  chaine de sortie%c*%c%c%cint i=%d;%c%cwhile(i >= 0){%c%cchar *c=%c%s%c;fprintf(sully(i), c, 10, 92, 10, 47, 10, 10, 47, 92, 10, i, 92, 10, 92, 10, 34, c, 34, 10, 10, 34, 37, 34, 34, 34, 10, 10, 10);i--;}}%c%cFILE* sully(x){char str[19];sprintf(str, %c./Sully_%cd.c%c, x); return fopen(str, %cw%c);}%c%cFT()%c";fprintf(sully(i), c, 10, 92, 10, 47, 10, 10, 47, 92, 10, i, 92, 10, 92, 10, 34, c, 34, 10, 10, 34, 37, 34, 34, 34, 10, 10, 10);i--;}}

FILE* sully(x){char str[19];sprintf(str, "./Sully_%d.c", x); return fopen(str, "w");}

FT()
