#include <stdio.h>


int main()
{

float ve,vc,vf;
    printf("Entre com sua média de VE:\n");
    scanf("%f",&ve);
    printf("sua média de VE é: %f \n",ve);
    printf("Entre com sua nota de VC:");
    scanf("%f",&vc);
    printf("sua média de VC é: %f \n",vc);

    vf = (20 - vc - ve)/2 ;

    if(vf < 4){
        printf("você precisa tirar 4 na vf");
    }

     else
            printf("você precisa tirar %f na vf",vf);



    return 0;
}
