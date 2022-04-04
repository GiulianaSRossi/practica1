/*Determinar los valores entre x1=0 y x2=25.
y = ax + b donde a=1 y b=2 */

#include <iostream>
using namespace std;

int main(){
	
	int a = 1, b = 2, y; 
	
	for(int i = 0; i <= 25; i++){ 
		
		y = a * i + b;
		
		cout << "El valor es: " << y << endl;
		
	}
	
	return 0;
}

