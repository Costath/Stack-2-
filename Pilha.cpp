/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/

#include "Pilha.hpp"


void ClassPilha::Push(int element){
	
	Stack.push(element);
	
}

int ClassPilha::Pop(){
	int retirado;
	
	retirado = Stack.top();
	
	Stack.pop();
	
	return retirado;
}

int ClassPilha::Size(){
	
	return Stack.size();
}

bool ClassPilha::isEmpty(){

	return Stack.empty();
}

int ClassPilha::Top(){
		
	return Stack.top();
}



