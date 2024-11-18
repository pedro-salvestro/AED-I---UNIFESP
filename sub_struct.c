    #include <stdio.h>
    
    //criando um "tipo"
    typedef struct data_aniversario{
        int dia;
        int mes;
        int ano;
    }data; //simplifiquei o nome data_aniversario para somente data
    
    //criando um "subtipo" que usa a tipagem data 
    struct Aluno{
        int id;
        data nascimento;
    };
     
     
    int main () {
     
        //Criando um aluno
        struct Aluno aluno1;
     
        //Modificando valores
        aluno1.id = 150383;
        aluno1.nascimento.ano = 2004;
        aluno1.nascimento.mes = 4;
        aluno1.nascimento.dia = 13;
     
        //Imprimindo valores
        printf("Nascido em: %d / %d / %d\n",  aluno1.nascimento.dia,  aluno1.nascimento.mes,  aluno1.nascimento.ano);
    }
