#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>


void PermitirCaracterEspecial()
{

    setlocale(LC_ALL, "Portuguese"); //Acrescentar caracteres da l�ngua portuguesa, �,acentos,etc ...
};

void Login(char login[15], char senha[15])
{

    PermitirCaracterEspecial();
    printf("\n");
    printf(" ___________________________\n");
    printf("|Balan�o Patrimonial:       |\n");
    printf("|___________________________|");
    printf("\n|login: ");
    scanf("%s",login);
    printf("|___________________________|");
    printf("\n|Senha: ");
    scanf("%s",senha);
    printf("|___________________________|");
    printf("\n");
    system("cls");
}


void ExibirMenu(int ano)
{
    PermitirCaracterEspecial();
    system("color f2");
    printf("\n ________________________________________________\n");
    printf("|                   BEM VINDO !                  |\n");
    printf("|------------------------------------------------|\n");
    printf("|          Balan�o Patrimonial  %d             |\n",ano);
    printf("|------------------------------------------------|\n");
    printf("| 1 - Ativo Circulante                           |\n");
    printf("|------------------------------------------------|\n");
    printf("| 2 - Ativo N�o Circulante                       |\n");
    printf("|------------------------------------------------|\n");
    printf("| 3 - Passivo Circulante                         |\n");
    printf("|------------------------------------------------|\n");
    printf("| 4 - Passivo Nao Circulante                     |\n");
    printf("|------------------------------------------------|\n");
    printf("| 5 - Patrim�nio L�quido                         |\n");
    printf("|------------------------------------------------|\n");
    printf("| 6 - TOTAL (Ativo/Passivo/Patrim�nio L�quido)   |\n");
    printf("|------------------------------------------------|\n");
    printf("| 7 - Sair                                       |\n");
    printf("|________________________________________________|\n");
}

void AtivoC()
{

    system("cls");
    printf("|-------------------------------------|\n");
    printf("| 1 - Caixa                           |\n");
    printf("|-------------------------------------|\n");
    printf("| 2 - Contas a receber                |\n");
    printf("|-------------------------------------|\n");
    printf("| 3 - Aplica��es de conta poupan�a    |\n");
    printf("|-------------------------------------|\n");
    printf("| 4 - Estoque                         |\n");
    printf("|-------------------------------------|\n");
    printf("| 5 - Ativo circulante TOTAL:         |\n");
    printf("|-------------------------------------|\n");

}

void AtivoNaoC()
{

    system("cls");
    printf("|-------------------------------------|\n");
    printf("| 1 - Participa�ao em outras empresas |\n");
    printf("|-------------------------------------|\n");
    printf("| 2 - Aplica��o L.P                   |\n");
    printf("|-------------------------------------|\n");
    printf("| 3 - Imoveis                         |\n");
    printf("|-------------------------------------|\n");
    printf("| 4 - M�veis                          |\n");
    printf("|-------------------------------------|\n");
    printf("| 5 - Equipamentos                    |\n");
    printf("|-------------------------------------|\n");
    printf("| 6 - Ve�culos                        |\n");
    printf("|-------------------------------------|\n");
    printf("| 7 - Marcas/Patentes                 |\n");
    printf("|-------------------------------------|\n");
    printf("| 8 - Ativo N�O Circulante TOTAL:     |\n");
    printf("|-------------------------------------|\n");

}

void PassivoC()
{

    system("cls");
    printf("|-------------------------------------|\n");
    printf("| 1 - Emprestimos/Financiamentos C.P  |\n");
    printf("|-------------------------------------|\n");
    printf("| 2 - Contas a pagar                  |\n");
    printf("|-------------------------------------|\n");
    printf("| 3 - Sal�rios a pagar                |\n");
    printf("|-------------------------------------|\n");
    printf("| 4 - Fornecedores a pagar            |\n");
    printf("|-------------------------------------|\n");
    printf("| 5 - Impostos a pagar                |\n");
    printf("|-------------------------------------|\n");
    printf("| 6 - Passivo Circulante TOTAL         |\n");
    printf("|-------------------------------------|\n");

}

void PassivoNaoC()
{

    system("cls");
    printf("|-------------------------------------|\n");
    printf("| 1 - Emprestimos/Financiamentos L.P  |\n");
    printf("|-------------------------------------|\n");
    printf("| 2 - T�tulos a pagar L.P             |\n");
    printf("|-------------------------------------|\n");
    printf("| 3 - Passivo NAO circulante TOTAL    |\n");
    printf("|-------------------------------------|\n");


}

void PatLiquido()
{

    system("cls");
    printf("|-------------------------------------|\n");
    printf("| 1 - Capital Social                  |\n");
    printf("|-------------------------------------|\n");
    printf("| 2 - Reserva de Lucro                |\n");
    printf("|-------------------------------------|\n");
    printf("| 3 - Lucros/Preju�zos Acumulados     |\n");
    printf("|-------------------------------------|\n");
    printf("| 4 - Patrim�nio L�quido TOTAL        |\n");
    printf("|-------------------------------------|\n");

}

void SubMenu()
{

    printf("\n\n\n");
    printf("               ________________________________________________________\n");
    printf("              |                           |                            |\n");
    printf("              |                           |                            |\n");
    printf("              |       19- Para Sair       |  Pressione Qualquer N�mero |\n");
    printf("              |                           |    Para Voltar ao Menu...  |\n");
    printf("              |___________________________|____________________________|\n");

}


typedef struct Usuarios
{
    char login[15];
    char senha[15];
} Usuarios;

int main ()
{
//Criando um Login de us�rio
    Usuarios u1 ;
    strcpy(u1.login, "adm");
    strcpy(u1.senha, "1234");

    int loginAutenticado = -1 ;
    char login[15], senha[15];
    int ano ;
    int opc,opc2 ;
    float caixa =0, contasAreceb =0, aplicaCP =0, estoq =0, particpEmOutrasEmpre = 0,
          aplicaLP =0, Imoveis =0, moveis =0, equipamentos =0, veiculos =0, marcaPatentes =0,
          emprestiFinanciamentCP =0, contasApagar =0, salApagar =0, fornecApagar =0, impApagar =0,
          emprestiFinanciamentLP =0, titulosApagarLP = 0, capitalSoci =0, reservaDeLucro =0,
          lucrosPrejAcumu =0, atvCTotal = 0,atvNaoCtotal = 0, passCTotal = 0, passNAOcTotal = 0, patlTotal =0,
          ativoTotal =0, passivoTotal =0;


    FILE * arq;
    arq = fopen("BalancoPatrimonialOnurb.txt","a");
    if(arq == NULL)
    {
        printf("Nao foi Possivel Acessar o arquivo: ");
        exit(0);
    }

    while (loginAutenticado != 1 )   //Se repetir at� login existir
    {

        Login(login,senha); //fazendo login
        printf("\nVerifificando usu�rio, Por Favor Aguarde ...\n");
        // Sleep(2000);
        system("cls");
        if ( strcmp(u1.login,login) == 0 && strcmp(u1.senha,senha)  == 0 )   //caso login exista, executa alguma coisa
        {

            loginAutenticado = 1 ;

            // printf("Logado com Sucesso ...");
            // Sleep(2000);
            system("cls");

            printf("Digite o ano: ");
            scanf("%d",&ano);
            system("cls");
            do
            {
                ExibirMenu(ano);
                scanf("%d",& opc);
                system("cls");
                switch (opc)
                {

                case 1 :

                    AtivoC();
                    scanf("%d",&opc2);
                    if (opc2 == 1)
                    {
                        system("cls");
                        printf("Digite o valor em caixa: ");
                        scanf("%f",&caixa);


                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 2)
                    {
                        system("cls");
                        printf("Digite o valor de contas a receber: ");
                        scanf("%f",&contasAreceb);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 3)
                    {

                        system("cls");
                        printf("Digite o valor aplicado na conta poupan�a: ");
                        scanf("%f",&aplicaCP);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 4)
                    {
                        system("cls");
                        printf("Digite o valor em estoque: ");
                        scanf("%f",&estoq);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 5)
                    {
                        system("cls");

                        printf("\nCaixa: %0.2f\n", caixa);
                        printf("\nContas a receber: %0.2f\n",contasAreceb);
                        printf("\nAplica��es de conta poupan�a: %0.2f\n",aplicaCP);
                        printf("\nEstoque: %0.2f\n",estoq);
                        printf("\n___________________________________\n");
                        atvCTotal = caixa + contasAreceb + aplicaCP + estoq;
                        printf("\nATIVO Circulante TOTAL: %0.2f\n",atvCTotal);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");

                    }
                    else
                    {
                        system("cls");
                    }

                    break ;

                case 2 :

                    AtivoNaoC();
                    scanf("%d",&opc2);
                    if (opc2 == 1)
                    {
                        system("cls");
                        printf("Digite o valor em participa�ao em outras empresas: ");
                        scanf("%f",&particpEmOutrasEmpre);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 2)
                    {
                        system("cls");
                        printf("Digite o valor aplica��o L.P: ");
                        scanf("%f",&aplicaLP);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 3)
                    {

                        system("cls");
                        printf("Digite o valor em imoveis: ");
                        scanf("%f",&Imoveis);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 4)
                    {
                        system("cls");
                        printf("Digite o valor em moveis: ");
                        scanf("%f",&moveis);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 5)
                    {
                        system("cls");
                        printf("Digite o valor em equipamentos: ");
                        scanf("%f",&equipamentos);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 6)
                    {
                        system("cls");
                        printf("Digite o valor em veiculos: ");
                        scanf("%f",&veiculos);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 7)
                    {
                        system("cls");
                        printf("Digite o valor em marcas e patentes: ");
                        scanf("%f",&marcaPatentes);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 8)
                    {
                        system("cls");

                        printf("\nParticipa�ao em outras empresas: %0.2f\n", particpEmOutrasEmpre);
                        printf("\nAplica��o L.P: %0.2f\n",aplicaLP);
                        printf("\nImoveis: %0.2f\n",Imoveis);
                        printf("\nM�veis: %0.2f\n",moveis);
                        printf("\nEquipamentos: %0.2f\n",equipamentos);
                        printf("\nVe�culos: %0.2f\n",veiculos);
                        printf("\nMarcas/Patentes: %0.2f\n",marcaPatentes);
                        printf("\n______________________________________\n");
                        atvNaoCtotal = particpEmOutrasEmpre + aplicaLP + Imoveis + moveis + equipamentos + veiculos + marcaPatentes ;
                        printf("\nATIVO N�O Circulante TOTAL:: %0.2f\n",atvNaoCtotal);
                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    else
                    {
                        system("cls");
                    }

                    break ;

                case 3 :

                    PassivoC();
                    scanf("%d",&opc2);
                    if (opc2 == 1)
                    {
                        system("cls");
                        printf("Emprestimos/Financiamentos C.P: ");
                        scanf("%f",&emprestiFinanciamentCP);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 2)
                    {
                        system("cls");
                        printf("Contas a pagar: ");
                        scanf("%f",&contasApagar);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 3)
                    {

                        system("cls");
                        printf("Sal�rios a pagar: ");
                        scanf("%f",&salApagar);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 4)
                    {
                        system("cls");
                        printf("Fornecedores a pagar: ");
                        scanf("%f",&fornecApagar);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 5)
                    {
                        system("cls");
                        printf("Impostos a pagar: ");
                        scanf("%f",&impApagar);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 6)
                    {
                        system("cls");

                        printf("\nEmprestimos/Financiamentos C.P: %0.2f\n", emprestiFinanciamentCP);
                        printf("\nContas a pagar: %0.2f\n",contasApagar);
                        printf("\nSal�rios a pagar: %0.2f\n",salApagar);
                        printf("\nFornecedores a pagar: %0.2f\n",fornecApagar);
                        printf("\nImpostos a pagar: %0.2f\n",impApagar);
                        printf("\n______________________________________\n");
                        passCTotal = emprestiFinanciamentCP + contasApagar + salApagar + fornecApagar + impApagar;
                        printf("\nPASSIVO Circulante TOTAL:: %0.2f\n",passCTotal);
                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    else
                    {
                        system("cls");
                    }

                    break ;

                case 4 :

                    PassivoNaoC();
                    scanf("%d",&opc2);
                    if (opc2 == 1)
                    {
                        system("cls");
                        printf("Emprestimos/Financiamentos L.P: ");
                        scanf("%f",&emprestiFinanciamentLP);


                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 2)
                    {
                        system("cls");
                        printf("T�tulos a pagar L.P: ");
                        scanf("%f",&titulosApagarLP);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 3)
                    {
                        system("cls");

                        printf("\nEmprestimos/Financiamentos L.P: %0.2f\n",emprestiFinanciamentLP);
                        printf("\nT�tulos a pagar L.P: %0.2f\n", titulosApagarLP);
                        passNAOcTotal = emprestiFinanciamentLP + titulosApagarLP;
                        printf("\n______________________________________\n");
                        printf("\nPASSIVO N�O Circulante TOTAL: %0.2f\n",passNAOcTotal);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");

                    }
                    else
                    {
                        system("cls");
                    }

                    break ;

                case 5 :

                    PatLiquido();
                    scanf("%d",&opc2);
                    if (opc2 == 1)
                    {
                        system("cls");
                        printf("Capital Social: ");
                        scanf("%f",&capitalSoci);


                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 2)
                    {
                        system("cls");
                        printf("Reserva de Lucro: ");
                        scanf("%f",&reservaDeLucro);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 3)
                    {
                        system("cls");
                        printf("Lucros/Prejuizos acumulados: ");
                        scanf("%f",&lucrosPrejAcumu);

                        SubMenu();
                        scanf("%d",& opc);
                        system("cls");
                    }
                    if (opc2 == 4)
                    {
                        system("cls");

                        patlTotal = capitalSoci + reservaDeLucro + lucrosPrejAcumu;

                        printf("\nCapital Social: %0.2f\n",capitalSoci);
                        printf("\nReserva de Lucro: %0.2f\n", reservaDeLucro);
                        printf("\nLucros/Prejuizos acumulados: %0.2f\n", lucrosPrejAcumu);
                        printf("\n______________________________________\n");
                        printf("\nPatrim�nio L�quido TOTAL: %0.2f\n",patlTotal);

                        SubMenu();
                        scanf("%d",&opc);
                        system("cls");

                    }
                    else
                    {
                        system("cls");
                    }

                    break ;

                case 6 :

                    printf("\nATIVO Circulante TOTAL: %0.2f\n",atvCTotal);
                    printf("\nATIVO N�O Circulante TOTAL:: %0.2f\n",atvNaoCtotal);
                    printf("\nPASSIVO Circulante TOTAL:: %0.2f\n",passCTotal);
                    printf("\nPASSIVO N�O Circulante TOTAL: %0.2f\n",passNAOcTotal);

                    printf("\n______________________________________\n");

                    ativoTotal = atvCTotal + atvNaoCtotal;
                    printf("\nATIVO TOTAL: %0.2f\n",ativoTotal);
                    passivoTotal = passCTotal + passNAOcTotal;
                    printf("\nPASSIVO TOTAL: %0.2f\n",passivoTotal);
                    printf("\nPATRIM�NIO L�QUIDO TOTAL: %0.2f",patlTotal);
                    printf("\n______________________________________\n");
                    printf("\n\nVALOR ATIVLO TOTAL: %0.2f  |  VALOR TOTAL PASSIVO + PATRIM�NIO L�QUIDIO: %0.2f",ativoTotal,passivoTotal+patlTotal);

                    SubMenu();
                    scanf("%d",&opc);
                    system("cls");

                    break ;

                case 7 :

                    printf("\t\nSalvando ...");
                    Sleep(2000);
                    system("cls");

                    fprintf(arq,"\n");
                    fprintf(arq,"_____________________________________________________________________________________________________\n");
                    fprintf(arq,"\n                                   BALAN�O PATRIMONIAL/%d                                          \n",ano);
                    fprintf(arq,"_____________________________________________________________________________________________________\n");
                    fprintf(arq,"|          ATIVO CIRCULANTE                    |                PASSIVO CIRCULANTE                   \n");
                    fprintf(arq,"\n|______________________________________________|_____________________________________________________\n");
                    fprintf(arq,"| - Caixa: %0.2f                                | - Emprestimos/Financiamentos C.P: %0.2f              \n",caixa,emprestiFinanciamentCP);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Contas a receber %0.2f                      | - Contas a pagar: %0.2f                              \n",contasAreceb,contasApagar);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Aplica��es de conta poupan�a %0.2f          | - Sal�rios a pagar: %0.2f                            \n",aplicaCP,salApagar);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Estoque %0.2f                               | - Fornecedores a pagar: %0.2f                        \n",estoq,fornecApagar);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | - Impostos a pagar: %0.2f                            \n",impApagar);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | -                                                   \n");
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | -                                                   \n");
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Ativo circulante TOTAL: %0.2f               | Passivo Circulante TOTAL:                           \n",atvCTotal,passCTotal);
                    fprintf(arq,"_____________________________________________________________________________________________________\n");
                    fprintf(arq,"\n|           ATIVO N�O CIRCULANTE               |                PASSIVO N�O CIRCULANTE               \n");
                    fprintf(arq,"\n|______________________________________________|_____________________________________________________\n");
                    fprintf(arq,"| - Participa�ao em outras empresas: %0.2f      | - Emprestimos/Financiamentos L.P: %0.2f              \n",particpEmOutrasEmpre,emprestiFinanciamentLP);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Aplica��o L.P: %0.2f                        | - T�tulos a pagar L.P: %0.2f                         \n",aplicaLP,titulosApagarLP);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Imoveis: %0.2f                              | -                                                   \n",Imoveis);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - M�veis: %0.2f                               | -                                                   \n",moveis);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Equipamentos: %0.2f                         | -                                                   \n",equipamentos);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Ve�culos: %0.2f                             | -                                                   \n",veiculos);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Marcas/Patentes: %0.2f                      | -                                                   \n",marcaPatentes);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| - Ativo N�O Circulante TOTAL: %0.2f           | - Passivo NAO circulante TOTAL: %0.2f                \n",atvNaoCtotal,passNAOcTotal);
                    fprintf(arq,"_____________________________________________________________________________________________________\n");
                    fprintf(arq,"\n                    -                          |                   PATRIM�NIO L�QUIDO                \n");
                    fprintf(arq,"\n_______________________________________________|_____________________________________________________\n");
                    fprintf(arq,"| -                                            | - Capital Social: %0.2f                              \n",capitalSoci);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | - Reserva de Lucro: %0.2f                            \n",reservaDeLucro);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | - Lucros/Preju�zos Acumulados: %0.2f                 \n",lucrosPrejAcumu);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"| -                                            | - Patrim�nio L�quido TOTAL: %0.2f                    \n",patlTotal);
                    fprintf(arq,"_____________________________________________________________________________________________________\n");
                    fprintf(arq,"\n                ATIVO TOTAL                    |          PASSIVO TOTAL + PATRIM�NIO L�QUIDO         \n");
                    fprintf(arq,"\n_______________________________________________|_____________________________________________________\n");
                    fprintf(arq,"|                   %0.2f                       |            %0.2f + %0.2f = %0.2f                      \n",ativoTotal,passivoTotal,patlTotal,passivoTotal+patlTotal);
                    fprintf(arq,"|----------------------------------------------------------------------------------------------------\n");
                    fprintf(arq,"\n\n------------------------------------------------------------------------------------------------------\n\n");

                    printf("\t\nSaindo ...");
                    Sleep(2000);
                    system("cls");
                    printf("\n\n");

                    break ;

                default :

                    printf("\nOp��o Inv�lida !!!\nPor Favor Digite A op��o desejada de 1 a 19. \n");

                    break ;
                }


            }
            while(opc != 7);

            fclose(arq);

        }
        else
        {

            printf("\nLogin inexistente!!!\n");

            loginAutenticado = 0;

            printf("\nPor Favor Tente Novamente !...\n");
            Sleep(2000);
            system("cls");
        }
    }

    return 0;
}

