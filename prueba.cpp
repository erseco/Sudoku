#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <set>
#include <list>
#include <iterator>
using namespace std;

int main(){
	
		set<unsigned int> mi_set;
		list<unsigned int> mi_lista;
	
	mi_set.insert(1);
	mi_set.insert(2);
	mi_set.insert(3);
	mi_set.insert(4);
	mi_set.insert(5);
	mi_set.insert(6);
	
	
	set<unsigned int>::iterator i;
	
	for(i=mi_set.begin();i!=mi_set.end();++i){
		
		mi_lista.insert(mi_lista.end(),*i);
		cout << endl << "inserto elemento: "<< *i; 
		
		}
	cout << endl << "Y ahora imprimo la lista";
	list<unsigned int>::iterator j;
	for(j=mi_lista.begin();j!=mi_lista.end();++j){
		
		//cout << mi_lista;
		cout << endl << *j;
		//mi_lista.pop_front();
		
		}	
		
	
	
}
