#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, sum;
    FILE *num;
    num= fopen("C:/Users/es-abdoahmed022/Documents/sic c projects/num.txt","w");
    fprintf(num, "%d  %d\n", 5, 2);
    fclose(num);

    num= fopen("C:/Users/es-abdoahmed022/Documents/sic c projects/num.txt","r");


    fscanf(num, "%d", &num1);
    fscanf(num, "%d", &num2);


    sum= num1 + num2;
    fclose(num);

    num= fopen("C:/Users/es-abdoahmed022/Documents/sic c projects/num.txt","a");


    fprintf(num, "\nanswer= %d", sum);

    fclose(num);

   return 0;
}



