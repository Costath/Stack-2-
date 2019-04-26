/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/

#include <iostream>
#include <stack>
#include <locale.h>

class ClassPilha /*: public std::stack<int>*/
{
	private:
		std::stack<int> Stack;
	public:
		void Push(int element);
		int Pop();
		int Size();
		bool isEmpty();
		int Top();
};
