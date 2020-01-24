#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int s4artes()
{
    int novadisc,adddis;
    system("pause");
    system("clear");
    printf("\n\tNOVO SEMESTRE ESTA CHEGANDO...");
    printf("\n\tTELA PARA ADICIONAR, REMOVER OU TRANCAR CURSO\n");
    printf("\tO que deseja?\n\n1-Adicionar disciplina?\n2-Remover disciplina?\n3-Trancar curso?\n:");
    scanf("%i",&novadisc);
    switch (novadisc)
    {
    case 1:
        printf("1-Historia da Arte - Prof Naiara \n2-Pintura - Prof M. Lopes\n\n");
        scanf("%i",&adddis);
        system("clear");
        switch (adddis)
        {
        case 1:
            printf("Historia da Arte adicionada para o proximo semestre...\n");
            break;
        case 2:
            printf("Pintura adicionada para o proximo semestre...\n");
            break;
        default:
            printf("disciplina indisponivel\n");
            break;
        }
        break;
    case 2:
        printf("1-Libras - Prof Naiara \n2-Desenho - Prof M. Evangelista\n\n");
        scanf("%i",&adddis);
        system("clear");
        switch (adddis)
        {
        case 1:
            printf("Libras removida com sucesso...\n");
            break;
        case 2:
            printf("Desenho removido com sucesso...\n");
            break;
        default:
            printf("disciplina indisponivel\n");
            break;
            break;
        }
    case 3:
        system("clear");
        printf("\nNeste momento, voce esta prestes a trancar o curso\n\n");
        printf("1-Sim, eu desejo trancar o curso\n2-Nao, vou pensar novamente.\n:");
        scanf("%i",&adddis);
        if (adddis==1)
        {
            printf("Curso trancado em definitivo.. Entre em contato com a Secretaria\n");
        }
        else if(adddis==2)
        {
            printf("Voce fez a escolha certa.\n");
        }
        else
        {
            printf("opcao invalida\n");
        }
        break;
    }
    return 0;
}
int s4com()
{
    
    int novadisc,adddis;
    system("pause");
    system("clear");
    printf("\n\tNOVO SEMESTRE ESTA CHEGANDO...");
    printf("\n\tTELA PARA ADICIONAR, REMOVER OU TRANCAR CURSO\n");
    printf("\tO que deseja?\n\n1-Adicionar disciplina?\n2-Remover disciplina?\n3-Trancar curso?\n:");
    scanf("%i",&novadisc);
    switch (novadisc)
    {
    case 1:
        printf("1-Estrutuda de dados - Prof Atricia \n2-Estatistica - Prof Edney\n\n");
        scanf("%i",&adddis);
        system("clear");
        switch (adddis)
        {
        case 1:
            printf("Estrutura de dados adicionada para o proximo semestre...\n");
            break;
        case 2:
            printf("Estatistica adicionada para o proximo semestre...\n");
            break;
        default:
            printf("disciplina indisponivel\n");
            break;
        }
        break;
    case 2:
        printf("1-Calculo I - Prof Edney \n2-Arquitetura - Prof Evaldo\n\n");
        scanf("%i",&adddis);
        system("clear");
        switch (adddis)
        {
        case 1:
            printf("Calculo I removido com sucesso...\n");
            break;
        case 2:
            printf("Arquitetura removido com sucesso...\n");
            break;
        default:
            printf("disciplina indisponivel\n");
            break;
        }
        break;
    case 3:
        system("clear");
        printf("\nNeste momento, voce esta prestes a trancar o curso\n\n");
        printf("1-Sim, eu desejo trancar o curso\n2-Nao, vou pensar novamente.\n:");
        scanf("%i",&adddis);
        if (adddis==1)
        {
            printf("Curso trancado em definitivo.. Entre em contato com a Secretaria\n");
        }
        else if(adddis==2)
        {
            printf("Voce fez a escolha certa.\n");
        }
        else
        {
            printf("opcao invalida\n");
        }
        break;
    }
    system("clear");
    return 0;
}

int profartes()
{
    char status[50];
    printf("\n\tTELA DE RECLAMACOES, ELOGIOS E OPINIOES AOS PROFESSORES:\n ");
    printf("Deixe seu comentario como forma avaliativa:\n");
    scanf("\n%[^\n]s", &status);
    printf("\nComentario registrado com sucesso! - %s\n",status);
    return 0;
}

int profcomp()
{
    char status[50];
    printf("\n\tTELA DE RECLAMACOES, ELOGIOS E OPINIOES AOS PROFESSORES:\n ");
    printf("Deixe seu comentario como forma avaliativa:\n");
    scanf("\n%[^\n]s", &status);
    printf("\nComentario registrado com sucesso! - %s\n",status);
    return 0;
}


int disciplinaArtes()
{
    int disc;
    float media,ap1,ap2,trab1;

    printf("Primeira avaliacao:");
    scanf("%f",&ap1);
    printf("Segunda avaliacao:");
    scanf("%f",&ap2);
    printf("Trabalho avaliativo:");
    scanf("%f",&trab1);
    media = (ap1+ap2+trab1)/3;

    if (media>=10)
    {
        printf("\tMedia 10! \n\tVoce esta aprovado!\n\n");
    }
    else if (media<=10 && media>=7)
    {
        printf("\tMedia %.1f! \n\tVoce esta aprovado!\n\n",media);
    }
    else if (media>=4 && media<=6.9)
    {
        printf("\tMedia %.1f! \n\tVoce esta na final!\n\n",media);
    }
    else if (media<4)
    {
        printf("\tMedia %.1f! \n\tVoce esta reprovado!\n\n",media);
    }
    return 0;
}
int disciplinaComputacao()
{

    int disc;
    float media,ap1,ap2,trab1;

    printf("Primeira avaliacao:");
    scanf("%f",&ap1);
    printf("Segunda avaliacao:");
    scanf("%f",&ap2);
    printf("Trabalho avaliativo:");
    scanf("%f",&trab1);
    media = (ap1+ap2+trab1)/3;

    if (media>=10)
    {
        printf("\tMedia 10! \n\tVoce esta aprovado!\n\n");
    }
    else if (media<=10 && media>=7)
    {
        printf("\tMedia %.1f! \n\tVoce esta aprovado!\n\n",media);
    }
    else if (media>=4 && media<=6.9)
    {
        printf("\tMedia %.1f! \n\tVoce esta na final!\n\n",media);
    }
    else if (media<4)
    {
        printf("\tMedia %.1f! \n\tVoce esta reprovado!\n\n",media);
    }
    return 0;
}

int loginArtes()
{
    char c;
    char login[20];
    char senha[20];
    int a=10;
    int i=0;
    int verifica_senha=0;
    while(verifica_senha==0)
    {
        printf("\n\tlogin:");
        fflush(stdin);
        gets(login);
        printf("\tsenha: ");

        while((c=getch())!=13)
        {
            senha[i]=c;
            i++;
            printf("*");
        }
        senha[i]='\0';
        i=0;
        system("clear");
        a= strcmp(senha,"artes"); //
        if((login!='alex' || login!='roberta' || login!='matheus' ) && a==0)
        {
            printf("Usuario logado");
            verifica_senha=1;
            break;
        }
        else
        {
            printf("Usuario: %s \nou\nsenha: %s invalidos\n",login,senha);
        }
    }
    system("clear");
    printf("\tSeja bem vindo, %s!\t\n\n",login);
    return 0;
}

int loginComputacao()
{
    char c;
    char login[20];
    char senha[20];
    int a=10;
    int i=0;
    int verifica_senha=0;
    while(verifica_senha==0)
    {
        printf("\n\tlogin:");
        fflush(stdin);
        gets(login);
        printf("\tsenha: ");
        while((c=getch())!=13)
        {
            senha[i]=c;
            i++;
            printf("*");
        }
        senha[i]='\0';
        i=0;
        system("cls");
        a= strcmp(senha,"computacao");
        if((login!='jonas' || login!='filipe' || login!='vidal' ) && a==0)
        {
            printf("Usuario logado");
            verifica_senha=1;
        }
        else
        {
            printf("Usuario: %s \nou\nsenha: %s invalidos\n",login,senha);
        }
        system("clear");
    }
    printf("\tSeja bem vindo, %s!\t\n\n",login);
    return 0;
}

int main()
{
    char c;
    char login[20];
    char senha[20],status[50];
    int a=10,tentativas=0;
    int i=0,prof,novadisc,adddis;
    int verifica_senha=0,s4com(),s4artes();
    int num_curso,disc,novosemestre,voltsair;
    float media,ap1,ap2,trab1;


    printf("- - - - - - - - - - - - - - -\n");
    printf("- Sistema de Alunos da UECE -\n");
    printf("- - - - - - - - - - - - - - -");

    printf("\nESCOLHA SEU CURSO:\n");
    printf("1-Artes Visuais:\n2-Computacao:\n:");
    scanf("%i",&num_curso);

       switch (num_curso)
    {
    case 1:
        printf("Por questoes de seguranca, digite seu usuario e senha\n");
        loginArtes();
        printf("1-Estetica\n2-Sociologia da Educacao\n");
        printf("Escolha a disciplina para consultar sua media.\n");
        scanf("%i",&disc);

        tentativas = 1;
        while (disc!=1&&disc!=2 &&(tentativas<3))
        {
            tentativas++;
            system("clear");
            printf("1-Estetica\n2-Sociologia da Educacao\n");
            printf("Escolha a disciplina para consultar sua media.\n");
            scanf("%i",&disc);
        }

        switch (disc)
        {
        case 1:
            system("clear");
            printf("\n\t- Estetica - ATRIBUA SUAS NOTAS\t\n");
            disciplinaArtes();
            system("pause");
            system("clear");
            printf("\n\tDISCIPLINA MINISTRADA POR JESSICA LEMOS\n");
            profartes();
            break;
        case 2:
            system("clear");
            printf("\n\t- Sociologia da Educacao - ATRIBUA SUAS NOTAS\t\n");
            disciplinaArtes();
            system("pause");
            system("clear");
            printf("\n\tDISCIPLINA MINISTRADA POR MARCOS EVANGELISTA\n");
            profartes();
            break;

        default:
            system("clear");
            printf("\tvoce nao esta matriculado nesta disciplina\t\n");
            system("pause");
            break;
        }
        s4artes();
        break;
        break;

    case 2:
        printf("Por questoes de seguranca, digite seu usuario e senha\n");
        loginComputacao();

        printf("1-Algoritmos\n2-Matematica discreta\n");
        printf("Escolha a disciplina para consultar sua media.\n");
        scanf("%i",&disc);

        tentativas = 1;
        while (disc!=1&&disc!=2 &&(tentativas<3))
        {
            tentativas++;
            system("clear");
            printf("1-Algoritmos\n2-Matematica discreta\n");
            printf("Escolha a disciplina para consultar sua media.\n");
            scanf("%i",&disc);
        }

        switch (disc)
        {
        case 1:
            system("clear");
            printf("\n\t- Algoritmos - ATRIBUA SUAS NOTAS\t\n");
            disciplinaComputacao();
            system("pause");
            system("clear");
            printf("\n\tDISCIPLINA MINISTRADA POR ATRICIA SABINO\n");
            profcomp();
            break;
        case 2:
            system("clear");
            printf("\n\t- Matematica discreta - ATRIBUA SUAS NOTAS\t\n");
            disciplinaComputacao();
            system("pause");
            system("clear");
            printf("\n\tDISCIPLINA MINISTRADA POR EDNEY GREGORIO\n");
            profcomp();
            break;
        default:
            system("clear");
            printf("\tvoce nao esta matriculado nesta disciplina\t\n");
            break;
        }
        s4com();
        break;
    break;
    }

    return 0;
}
