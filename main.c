#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
     

    char input[100];
    //FILE * fp;
    int i;
    
    //fopen
    fp = fopen("sample.txt", "w");
    
    for(i = 0; i < 3; i++){
    //fprintf
      printf("input a word: ");
      scanf("%s", input);
      fprintf(fp, "%s\n", input); 
}


    //fclose
    fclose(fp);    

    FILE * fp = NULL;
    char c;
    
    //fopen
    fp = fopen("sample.txt","r");
    if(fp == NULL)
          printf("Failed to open file!\n");
          return -1;

    while((c = fgetc(fp)) != EOF){
             putchar(c);
             } 
             
    /*
    while(fgets(input, 100, fp) > 0)
    {
                       printf("%i", input);
    }
    */
    

  system("PAUSE");	
  return 0;
}
