#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int idade, opiniao, total_opiniao, idade_maior_pessimo = 0, id1=0, id2=0, id3=0, id4=0, id5=0, c1 = 0, c2 = 0, c3=0, c4 = 0, c5 = 0;
float media_idade_otimo = 0, percentual_opiniao;


printf("Informe sua idade: ");
scanf("%d", &idade);

while (idade > 0){
        printf("Dê sua avaliação: \n1 - Péssimo\n2 - Ruim\n3 - Regular\n4 - Bom\n5 - Ótimo\n");
        scanf("%d", &opiniao);

        switch (opiniao){
            case 1:
                id1 += idade;
                c1++;
                if (idade > idade_maior_pessimo){
                    idade_maior_pessimo = idade;
                }
                break;
            case 2:
                id2 += idade;
                c2++;
                break;
            case 3:
                id3 += idade;
                c3++;
                break;
            case 4:
                id4 += idade;
                c4++;
                break;
            case 5:
                id5 += idade;
                c5++;
                break;
            default:
                printf("Selecione uma opção válida!");
                break;

        }

printf("Informe sua idade: ");
scanf("%d", &idade);
}

// 1 - Quantas pessoas responderam em cada tipo de opiniao.
total_opiniao = c1+c2+c3+c4+c5;
printf("Avaliações: \nPéssimo: %d\nRuim: %d\nRegular: %d\nBom: %d\nÓtimo: %d\nTotal de avaliações: %d\n", c1, c2, c3, c4, c5, total_opiniao);

//2 - Calcular media de idade dos que responderam ótimo.
if (c5 > 0){
    media_idade_otimo = id5/c5;
    printf("\nMédia da idade de quem avaliou como ótimo: %f\n", media_idade_otimo);
}
else{
    printf("Média Ótimo: Ninguém avaliou como ótimo!\n");
}

//3 - Exibir a maior idade entre os que responderam pessimo.
printf("Maior idade de quem availou como péssimo: %d.\n", idade_maior_pessimo);

//4 - Percental de opinioes bom e otimo em relacao ao total.
if (total_opiniao > 0){
    percentual_opiniao = ((float)(c4+c5)/total_opiniao)*100;
    printf("O percentual de quem avaliou como Bom ou Ótimo: %.2f %%.", percentual_opiniao);
}
else{
    printf("Ninguém avaliou como Bom ou ótimo!");
}

}
