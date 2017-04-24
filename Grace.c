#include <stdio.h>
#define Grace_kid fopen("./Grace_kid.c", "w")
#define FT() int main(){\
/*
  chaine de sortie
*/\
char *c="#include <stdio.h>%c#define Grace_kid fopen(%c./Grace_kid.c%c, %cw%c)%c#define FT() int main(){%c%c%c*%c  chaine de sortie%c*%c%c%cchar *c=%c%s%c;fprintf(Grace_kid, c, 10, 34, 34, 34, 34, 10, 92, 10, 47, 10, 10, 47, 92, 10, 34, c, 34, 10, 10, 10);}%c%cFT()%c";fprintf(Grace_kid, c, 10, 34, 34, 34, 34, 10, 92, 10, 47, 10, 10, 47, 92, 10, 34, c, 34, 10, 10, 10);}

FT()
