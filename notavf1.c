#include <stdio.h>


int main()
{

float ve,vc,vf;
    printf("Entre com sua m�dia de VE:\n");
    scanf("%f",&ve);
    printf("sua m�dia de VE �: %f \n",ve);
    printf("Entre com sua nota de VC:");
    scanf("%f",&vc);
    printf("sua m�dia de VC �: %f \n",vc);

    vf = (20 - vc - ve)/2 ;

    if(vf < 4){
        printf("voc� precisa tirar 4 na vf");
    }

     else
            printf("voc� precisa tirar %f na vf",vf);



    return 0;
}
