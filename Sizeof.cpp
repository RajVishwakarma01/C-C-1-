//"Write a Program for use of predefined sizeof() function to display the data type"
#include<stdio.h>
int main()
{
	printf("int = %lu byts \n",sizeof(int));
	printf("int = %lu bit\n",sizeof(int)*8);
    printf("char = %lu byts \n",sizeof(char));
    printf("char = %lu bit \n",sizeof(char)*8);
    printf("float = %lu byts \n",sizeof(float));
    printf("float = %lu bit \n",sizeof(float)*8);
    printf("double = %lu byts \n",sizeof(double));
       printf("double = %lu bit \n",sizeof(double)*8);
	return 0;  

}

