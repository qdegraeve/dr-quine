#include <stdio.h>

/*
  super fonction
*/
void print(char *c){printf(c, 10, 10, 47, 10, 10, 47, 10, 10, 10, 47, 10, 10, 47, 10, 34, c, 34, 10);}
int main(){
/*
  chaine de sortie
*/
char *c="#include <stdio.h>%c%c%c*%c  super fonction%c*%c%cvoid print(char *c){printf(c, 10, 10, 47, 10, 10, 47, 10, 10, 10, 47, 10, 10, 47, 10, 34, c, 34, 10);}%cint main(){%c%c*%c  chaine de sortie%c*%c%cchar *c=%c%s%c;print(c);}%c";print(c);}
