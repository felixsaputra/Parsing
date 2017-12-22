#include <stdio.h>
#include <string.h>

int main()

{
	
	char f1[13];
	printf("Dalam program ini akan mensuggest nama");
	printf("\n \n");


	
	
    char file_to_open[] = "text_file.txt", ch;
    FILE *file_ptr;

    if((file_ptr = fopen(file_to_open, "r")) != NULL)
    {
    
        while((ch = fgetc(file_ptr)) != EOF)
        {
            putchar(ch);
        }
    }
    else
    {
        printf("Could not open %s\n", file_to_open);
       	return 1;
	}
    printf("\n\n");
	printf("tulis salah satu nama");
	scanf("%s", f1);
    
	
	if(strcmp(f1,"ba")==0){
    	printf("barbara\n");
	}
    else
    {
    	printf("want other name?\n");
	}
    
    if(strcmp(f1,"b")==0){
    	printf("barbara or bourbon\n");
	}
    else
    {
    	printf("want other name?\n");
	}
    
    if(strcmp(f1,"gi")==0){
    	printf("gin\n");
	}
    else
    {
    	printf("want other name?\n");
	}
    
    if(strcmp(f1,"bo")==0){
    	printf("bourbon\n");
	}
    else
    {
    	printf("want other name?\n");
	}
    
    if(strcmp(f1,"c")==0){
    	printf("chivas\n");
	}
    else
    {
    	printf("want other name?\n");
	}
    
    
    return(0);
}
