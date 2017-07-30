// HW4 submitted  by Chris Panican
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define PATNUMBER 100
#define PATLENGTH 200
/*#define DEBUG*/


int rabin_karp (char s[],char t[], int l) {
    int N = strlen(s);
    int M = strlen(t);
    int total_char = 256;
    int i, j;
    int p = 0;
    int p_temp = 0;
    int h_temp = 1;

    for (i = 0; i < M - 1; i++) {
        h_temp = (h_temp * total_char) % l;
    }
    for (i = 0; i < M; i++) {
        p = (total_char * p + t[i]) % l;
        p_temp = (total_char * p_temp + s[i]) % l;
    }

    for (i = 0; i <= N - M; i++) {
        if (p == p_temp) {
            for (j = 0; j < M; j++) {
                if (s[i + j] != t[j]) {
                    break;
                }
            }
            if (j == M) {
                return i;
            }
        }
        if (i < N - M) {
            p_temp = (total_char * (p_temp - s[i] * h_temp) + s[i + M]) % l;
            if (p_temp < 0)
                p_temp = (p_temp + l);
        }
    }
    return -1;
}

int multi_string_search(char *s, char **t, int k, int l) {
    int i, j;
    for(i = 0; i < k; i++) {
        j = rabin_karp(s, t[i], l);
        if(j != -1)
            return j;
    }
    return -1;
}


int main(void)
{  char sequence[100001];
    char *patterns[PATNUMBER];
    char t[PATNUMBER*PATLENGTH];
    int i, j;
    for(i=0; i<100000; i++)
        sequence[i] = 'a';
    sequence[100000]='\0';
    for(i=0; i<4000; i++)
    {  j = rand()%100000;
        sequence[j]='b';
    }
    for(i=0; i<PATNUMBER; i++)
    {  patterns[i] = t + PATLENGTH*i;
        for(j=0; j< PATLENGTH-1; j++)
            t[PATLENGTH*i+j] = sequence[PATLENGTH*i+j];
        t[PATLENGTH*i+PATLENGTH -1] = '\0';

    }
    for(i=0; i<PATNUMBER-1; i++)
    {  t[PATLENGTH*i+PATLENGTH -15] = 'b';
        t[PATLENGTH*i+PATLENGTH -14] = 'b';
        t[PATLENGTH*i+PATLENGTH -13] = 'b';
    }
#ifdef DEBUG
    { FILE *fp1, *fp2;
       fp1 = fopen("sequence", "w");
       fprintf(fp1, "%s\n", sequence);
       fclose(fp1);
       fp2 = fopen("patterns", "w");
       for(i=0; i<100; i++)
	 fprintf(fp2, "%s\n", patterns[i]);
       fclose(fp2);
   }
#else
    if(multi_string_search(sequence, patterns, PATNUMBER, PATLENGTH-1) == (PATNUMBER-1)*PATLENGTH )
        printf("accepted\n");
    else
        printf("%s,%d needs check?\n","",multi_string_search(sequence, patterns, PATNUMBER, PATLENGTH-1));
#endif
}
