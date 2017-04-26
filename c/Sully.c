#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main(void){
int i=19;
char gcc[100] = "";
char name[19] = "";
FILE *fp;
if(strcmp(__FILE__, "Sully.c")){i--;};
if(i < 0){return(0);}
sprintf(name, "Sully_%d", i);
sprintf(gcc, "clang -Wall -Wextra -Werror %s.c -o %s && ./%s", name, name, name);
char *c="#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <strings.h>%1$cint main(void){%1$cint i=%3$d;%1$cchar gcc[100] = %4$c%4$c;%1$cchar name[19] = %4$c%4$c;%1$cFILE *fp;%1$cif(strcmp(__FILE__, %4$cSully.c%4$c)){i--;};%1$cif(i < 0){return(0);}%1$csprintf(name, %4$cSully_%2$cd%4$c, i);%1$csprintf(gcc, %4$cclang -Wall -Wextra -Werror %2$cs.c -o %2$cs && ./%2$cs%4$c, name, name, name);%1$cchar *c=%4$c%5$s%4$c;fprintf(fp = fopen(strcat(name, %4$c.c%4$c), %4$cw%4$c), c, 10, 37, i, 34, c);fclose(fp);return(system(gcc));}%1$c";fprintf(fp = fopen(strcat(name, ".c"), "w"), c, 10, 37, i, 34, c);fclose(fp);return(system(gcc));}
