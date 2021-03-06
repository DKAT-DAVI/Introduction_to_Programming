/*5. Faça um programa que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch.*/

int number(int num)
{
    switch (num)
    {
    case 0:
        printf("\t0 -> ZERO");
        break;
    case 1:
        printf("\t1 -> UM");
        break;
    case 2:
        printf("\t2 -> DOIS");
        break;
    case 3:
        printf("\t3 -> TRES");
        break;
    case 4:
        printf("\t4 -> QUATRO");
        break;
    case 5:
        printf("\t5 -> CINCO");
        break;
    case 6:
        printf("\t6 -> SEIS");
        break;
    case 7:
        printf("\t7 -> SETE");
        break;
    case 8:
        printf("\t8 -> OITO");
        break;
    case 9:
        printf("\t9 -> NOVE");
        break;
    case 10:
        printf("\t10 -> DEZ");
        break;
    }

    return 0;
}

int error(int numero)
{
    while (numero > 10 || numero < 0)
    {
        printf("\nERRO!  ERRO!  ERRO!  ERRO!  ERRO!\n");
       
        printf("\nDigite apenas numeros entre 1 e 10!");
        printf("\nDigite um numero entre 1 e 10: ");
        scanf("%d", &numero);
    }

    number(numero);

        return 0;
}

int main()
{
    int a;

    printf("\nDigite um numero entre 1 e 10: ");
    scanf("%d", &a);

    error(a);

    number(a);

    printf("\n\n");

    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA