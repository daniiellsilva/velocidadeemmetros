#include <iostream>

using namespace std;

int main(){
	
	float quilometros, metros;
	
	cout << "Entre com a velocidade em metros por segundos m/s: ";
	cin >> metros;
	
	quilometros = metros * 3.6;
	
	cout << "A velocidade em quilometros eh: " << quilometros << " km/h\n";
	
	system ("pause");
	return(0);
}
