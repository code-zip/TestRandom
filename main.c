#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#ifdef _WIN32
#define LIMPIAR "cls"
#else
#define LIMPIAR "clear"
#endif

#define LIMIT 10
#define LIMITEXT 1000
//USE THIS DEFINE TO DELIMIT RUN FORM %
#define TOTALRUNN 10000

int main()
{
    int values[10];
    int i, j, k;

    float prom0;

    float prom1;
    float prom2;
    float prom3;
    float prom4;
    float prom5;
    float prom6;
    float prom7;
    float prom8;
    float prom9;

    float porc0;
    float porc1;
    float porc2;
    float porc3;
    float porc4;
    float porc5;
    float porc6;
    float porc7;
    float porc8;
    float porc9;



    int sum0 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;
    int sum7 = 0;
    int sum8 = 0;
    int sum9 = 0;
    srand(getpid());
    for (k = 0; k < 2; k++)
    {

        for (j = 0; j < LIMITEXT; j++)
        {

            printf("RUNNING # %d\n", j + 1);

            for (i = 0; i < LIMIT; i++)
            {

                values[i] = rand() %11;
                /////////////////////
                if (values[i] == 0)
                {
                    sum0++;
                }
                else if (values[i] == 1)
                {
                    sum1++;
                }
                else if (values[i] == 2)
                {
                    sum2++;
                }
                else if (values[i] == 3)
                {
                    sum3++;
                }
                else if (values[i] == 4)
                {
                    sum4++;
                }
                else if (values[i] == 5)
                {
                    sum5++;
                }
                else if (values[i] == 6)
                {
                    sum6++;
                }
                else if (values[i] == 7)
                {
                    sum7++;
                }
                else if (values[i] == 8)
                {
                    sum8++;
                }
                else if (values[i] == 9)
                {
                    sum9++;
                }
            }

            for (i = 0; i < LIMIT; i++)
            {

                printf("Valor de array # %d , = %d \n", i + 1, values[i]);
            }

            printf("\tRUNNING # %d\n\n", j + 1);
            system(LIMPIAR);
        }

        printf("RUNNING GRAL # %d \n", k);

        printf("Valores en sumatoria de 0 %d  \n", sum0);
        printf("Valores en sumatoria de 1 %d  \n", sum1);
        printf("Valores en sumatoria de 2 %d  \n", sum2);
        printf("Valores en sumatoria de 3 %d  \n", sum3);
        printf("Valores en sumatoria de 4 %d  \n", sum4);
        printf("Valores en sumatoria de 5 %d  \n", sum5);
        printf("Valores en sumatoria de 6 %d  \n", sum6);
        printf("Valores en sumatoria de 7 %d  \n", sum7);
        printf("Valores en sumatoria de 8 %d  \n", sum8);
        printf("Valores en sumatoria de 9 %d  \n", sum9);

        //system("pause");
        getchar();
        system(LIMPIAR);
    }
    prom0 = sum0 / 2;
    porc0 = (100 * sum0) / (LIMITEXT + LIMITEXT);
    printf("Promedio de NUMERO 0 en 2 ejecuciones = %2.f \n", prom0);
    printf("Porcentaje de NUMERO 0 en 2 ejecuciones = %2.f%% \n", porc0);

    return 0;
}
