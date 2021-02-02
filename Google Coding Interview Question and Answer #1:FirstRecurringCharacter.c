#include "stdio.h"
#include "string.h"
#include "ctype.h"

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}


void main()
{
	char st[]= "cvykkuglgmk";
	int alph[26],a,b;
    //char st[] = strupr(x);
    strupr(st);
	int l = strlen(st);
	for(a=0;a<26;a++)
		alph[a]=0;
	for(b=0;b<l;b++)
	{
		if(alph[((int)st[b])-65])
		{
			printf("the letter is %c", st[b]);
			break;
		}
		alph[(int)st[b]-65] = 1;
	}

}
