#include<stdio.h>
#include <time.h>

    // Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.


void calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento, int *dias, int *meses, int *anos) {
    time_t t;
    struct tm nascimento;
    time(&t);

    nascimento.tm_year = anoNascimento - 1900;
    nascimento.tm_mon = mesNascimento - 1;
    nascimento.tm_mday = diaNascimento;
    nascimento.tm_hour = 0;
    nascimento.tm_min = 0;
    nascimento.tm_sec = 0;
    nascimento.tm_isdst = -1;  

    double diferenca = difftime(t, mktime(&nascimento));

    *dias = diferenca / (60 * 60 * 24); 
    *anos = *dias / 365;
    *meses = (*dias % 365) / 30; 
    *dias = *dias - (*anos * 365) - (*meses * 30);
}

int main() {
    int diaNascimento, mesNascimento, anoNascimento;
    int dias, meses, anos;

   
    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNascimento, &mesNascimento, &anoNascimento);

    
    calcularIdade(diaNascimento, mesNascimento, anoNascimento, &dias, &meses, &anos);

   
    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}


  









