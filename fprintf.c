/* A public domain wrapper for C fprintf */
#include <stdio.h>
#include <string.h>

int pd_fprintf(char* fn,char* m,char* str)
{
char* ch=str;
FILE* out=fopen(fn,m);
while(*ch!=0x00)
{
/*handle backslashed characters*/
if(*ch=='\\')
{
switch(*(ch+1))
{
case 'n':
	fputc('\n',out);
	ch+=2;
	break;
case 'r':
	fputc('\r',out);
	ch+=2;
	break;
case '\\':
	fputc('\\',out);
	ch+=2;
	break;
case 't':
	fputc('\t',out);
	ch+=2;
	break;
case 'v':
	fputc('\v',out);
	ch+=2;
	break;
case 'a':
	fputc('\a',out);
	ch+=2;
	break;
default:
	/*ignore and move on*/
	ch+=2;
}
}
else
{
    fputc(*ch,out);
    ch++;
}
}
fclose(out);
return 0;
}

int main(int argc, char *argv[])
{
   if(!strcmp(argv[1], "--help"))
   {
      puts("FPRINTF\nUsage: FPRINTF filename \"mode\" \"string\"");
      return 0;
   }
   return pd_fprintf(argv[1],argv[2],argv[3]);
}
