#include <iostream> //Biblioteca padrão.
#include "cmath" //Bibliotecas de funções matematicas para utilização da função "pow()" para realizar o calculo de exponenciação.
#include <iomanip> //Biblioteca instalada com objetivo do uso do manipulador de fluxo "setprecision" para formatar os valores exibidos na tela.

//Protótipos
void interaçãoComUsuario();
double execuçãoDoCalculo(double, double);

int main() {
	std::cout << "Developed by Rodrigo Liberato v1.0\n";
	std::cout << "------Calculadora IMC------\n" << "Você está na faixa de peso ideal?\n";
	interaçãoComUsuario(); //Interação com o usuário
}
void interaçãoComUsuario() { //Função exclusiva para interagir com o usuario mostrando-lhe, após o calculo, os detalhes de acordo com sua faixa de peso atual.
	double resultadoFinal{ 0 }, massaCorporal{ 0 }, altura{ 0 };
	std::cout << "Digite o valor de sua massa corporal (kg): ";
	std::cin >> massaCorporal;
	std::cout << "Digite o valor de sua altura (m): ";
	std::cin >> altura;

	resultadoFinal = execuçãoDoCalculo(massaCorporal, altura); //Atribui o resultado de retorno do imc a variável.
	std::cout << "O resultado final do calculo de IMC é: " << std::setprecision(4) << resultadoFinal << " como resultado final\n";

	if (resultadoFinal >= 18.5 && resultadoFinal <= 25) { //Estrutura condicional composta para responder detalhadamente ao usuário relativo a sua faixa de peso atual de acordo com os valores inseridos e calculados.
		std::cout << "Faixa de peso ideal. Você está em uma faixa de peso ideal! Continue nesse ritmo!\n";
	}
	else if (resultadoFinal <= 17) {
		std::cout << "Faixa de peso de nível perigosa. Você está muito abaixo do peso! Consulte um profissional especializado!\n";
	}
	else if (resultadoFinal >= 17 && resultadoFinal < 18.5) {
		std::cout << "Faixa de peso de nível perigosa. Você está abaixo do peso!\n";

	}
	else if (resultadoFinal >= 25 && resultadoFinal < 30) {
		std::cout << "Faixa de peso de nível pouco perigoso. Você está em sobrepeso! Inicie uma alimentação balanceada com uma rotina de exercicios regular!\n";

	}
	else if (resultadoFinal >= 30 && resultadoFinal < 35) {
		std::cout << "Faixa de peso de nível perigoso. Você está na faixa de Obesidade! Siga uma dieta e uma rotina de exercicios regular para emagrecer!\n";

	}
	else if(resultadoFinal >= 35 && resultadoFinal < 40){
		std::cout << "Faixa de peso em nível considerávelmente perigoso. Obesidade severa! Consulte um profissional especializado para realizar os procedimentos necessários para uma perca de peso significativa!\n";

	}
	else if (resultadoFinal > 40) {
		std::cout << "Faixa de peso em nivel critico. Obesidade morbida! Tome medidas urgentes e o quanto antes! A permanência em obesidade morbida causará significativos efeitos negativos a sua saúde, podendo leva-lo a obito caso não haja cuidados com um profissional clinico especializado!\n";
	}
	else {
		std::cout << "Valor invalido ou que está fora do padrão da faixa de pesos determinados pelo IMC.\n";
	}

}
double execuçãoDoCalculo(double massaCorp, double alturaCorp) { //Função exclusiva para execução do calculo de IMC ao qual retorna o valor posteriormente.
	double resultadoDeRetorno{ 0 };
	return resultadoDeRetorno = massaCorp / std::pow(alturaCorp, 2); //Função de exponenciação referente a biblioteca instalada "cmath".
}
