#include<iostream>
#include "UDicolaV2.h"
using namespace std;
int main(){
	DicolaV2* C=new DicolaV2();
	for (int i = 10; i <=50; i=i+10){
					C->poner(i);
	}
	cout<<C->to_str()<<endl;
	//<<7,4,3,2<<
	C->poner(60);
	cout<<C->to_str()<<endl;
	int e;
	C->sacar(e);
	cout<<"elemento="<<e<<endl;
	C->poner_frente(88);
	cout<<C->to_str()<<endl;
	C->sacar_final(e);
	cout<<"elemento="<<e<<endl;
	 cout<<C->to_str()<<endl;
	e=C->primero();
	cout<<"elemento="<<e<<endl;
	e=C->ultimo();
	cout<<"elemento="<<e<<endl;
	//cout<<"ultimo="<<C->ultimo()<<endl;
	system("pause");
	return 0;

}


