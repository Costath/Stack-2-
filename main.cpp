/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/
#include <iostream>
#include "Pilha.hpp"

int main() {
	setlocale(LC_ALL, "");
	
	ClassPilha Pilha;
	bool sair = false;
	int menu, element;

	while (!sair){

		printf("1 - push\n");
		printf("2 - pop\n");
		printf("3 - size\n");
		printf("4 - isEmpty\n");
		printf("5 - top\n");
		printf("6 - sair\n\n");

		scanf("%d", &menu);

		switch(menu){
			case 1:		//push
				printf("\n\nElemento a ser inserido: ");
				scanf("%d", &element);
				Pilha.Push(element);

				system("cls");

			break;
			case 2:		//pop
				if(!Pilha.isEmpty()){
					printf("\n\nO elemento \"%d\" foi retirado\n\n", Pilha.Pop());

				}else{
					printf("\n\nERRO - A pilha está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 3:		//size
				printf("\n\nTamanho da pilha: %d\n\n", Pilha.Size());

				system("pause");
				system("cls");

			break;
			case 4:		//isEmpty
				if(Pilha.isEmpty()){		//retorna 'true' caso a pilha esteja vazia, 'false' caso contrário
					printf("\n\nA pilha está vazia.\n\n");
				}else{
					printf("\n\nA pilha não está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 5:		//top
				if(!Pilha.isEmpty()){		//chama a função top caso a pilha não esteja vazia
					printf("\n\nElemento no topo da pilha: %d\n\n", Pilha.Top());
				}else{
					printf("\n\nERRO - A pilha está vazia.\n\n");
				}

				system("pause");
				system("cls");

			break;
			case 6:		//sair
				sair = true;
				printf("\nObrigado!\n");

			break;
			default:
				printf("Opção inexistente. Tente de novo.\n\n");
				system("pause");
				system("cls");
				
		}

	}

	return 0;
}
