#include <iostream>

using namespace std;

int main(){
	
	int tope = 6;
	
	for(int i = 1; i <= 6; i++){
		for(int j = i; j <= tope; j++){
			cout << j << " ";
		}
		cout << endl;
		tope++;
	}
		
	system("pause");
	return 0;
}
