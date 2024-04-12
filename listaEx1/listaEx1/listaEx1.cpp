#include <iostream>

using namespace std;

int termal();
int joaquim();
int bombom();
int agua();
int camisa();

int main() {
    termal();
    joaquim();
    bombom();
    agua();
    camisa();

    return 0;
}

int termal() {
    int instalacao = 300;
    int limpeza = 150;
    float manutencao = 499.99;

    float total = instalacao + limpeza + manutencao;

    cout << "Questao 1: ";
    cout << total;

    // Retornando um valor inteiro
    return 0;
};

int joaquim() {
    int horasPorDia = 8;
    float moneyPorHora = 35.00;

    float moneyPorDia = moneyPorHora * horasPorDia;

    cout << "\n";
    cout << "Questao 2: ";
    cout << moneyPorDia;

    return 0;
};

int bombom() {
    int unidadesPorCaixa = 27;
    int caixasCompradas = 16;

    int bombonsComprados = caixasCompradas * unidadesPorCaixa;

    cout << "\n";
    cout << "Questao 3: ";
    cout << bombonsComprados;

    return 0;
}

int agua() {
    int garrafasVendidas = 300;
    int garrafasPorCaixa = 20;

    int caixasUsadas = garrafasVendidas / garrafasPorCaixa;

    cout << "\n";
    cout << "Questao 4: ";
    cout << caixasUsadas;

    return 0;
}

int camisa() {
    int camisasCompradas = 120;
    int camisasVendidas = 80;
    float precoCamisa = 30.00;
    int camisasCompradasDnv = 50;

    int camisasRestantes = camisasCompradas + camisasCompradasDnv - camisasVendidas;
    float faturamento = camisasVendidas * precoCamisa;

    cout << "\n";
    cout << "Questao 5: ";
    cout << "\n";
    cout << "\n";
    cout << "faturamento = ";
    cout << faturamento;
    cout << "\n";
    cout << "camisas restantes = ";
    cout << camisasRestantes;

    cout << "\n";
    return 0;

}