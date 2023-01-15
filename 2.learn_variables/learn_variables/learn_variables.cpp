// learn_variables.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
	int yearOfBirth = 1995;
	char gender = 'f';
	bool isOlderThan18 = true;
	float averageGrade = 4.5;
	double balance = 45678945856;

	cout << "Size of int is " << sizeof(int) << " bytes\n";
	// -1,-2,-3,....., -2147483648
	cout << "Int min value is " << INT_MIN << endl;
	//0+,1,2,3,...., +2147483647
	cout << "Int max value is " << INT_MAX << endl;

	cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
	cout << "UInt max value is " << UINT_MAX << endl;
	cout << "Size of bool is " << sizeof(bool) << " bytes\n";
	cout << "Size of char is " << sizeof(char) << " bytes\n";
	cout << "Size of float is " << sizeof(float) << " bytes\n";
	cout << "Size of double is " << sizeof(double) << " bytes\n";

	system("pause>0");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
