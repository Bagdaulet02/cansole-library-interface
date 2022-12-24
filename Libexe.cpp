#include <iostream>
#include "pugixml.hpp"
#include <string>
#include <stdio.h>
#include <cstdlib>

void Clearing(){
#ifdef unix
#	system("clear");
#else
#	system("cls");
#endif
}


	
int Searching(){
	Clearing();
	std::cout<<"\t\t\t[LibInterface]\t\t\t";
	std::cout<<"|\tSearching by:\n";
	std::cout<<"|\t1) name\n";
	std::cout<<"|\t2) author\n";
	std::cout<<"|\t3) tags\n";
	int searching_by;
	searching_by = getc(stdin);
	Clearing();

	switch(searching_by){
		case 1:
			//Searching_by_name();
			std::cout<<"1";
			break;
		case 2:
			//Searching_by_author();
			std::cout<<"2";
			break;
		case 3:
			//Searching_by_tags();
			std::cout<<"3";
			break;
		default:
			Clearing();
			std::cout<<"Error";
	}
	return 1;
}

int main(){
	Searching();
	return 0;
}
