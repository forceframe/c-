#include <iostream>
#include <string>
using namespace std;

int linearSearch(string data[], int N, string key){
	for(int i = 0; i < N; i++){
		if(data[i] == key) return i;
	}
	return -1;
}

int main(){
	string name[] = {"Supat", "Jean", "Jikiminolo", "Noina", "Krisanawan", "Tiew", "suvisa"};
	double weight[] = {72, 5, 75.2, 88, 73, 70.6, 84.9, 99, 99.99};
	int N = sizeof(weight)/sizeof(weight[0]);
	string key;
	cout << "Input name to find weight: ";
	cin >> key;
	
	int loc = linearSearch(name,N,key);
	
	if(loc == -1) cout << "Not found";
	else cout << key << "' s weight is " << weight[loc] << "kg";
	
	return 0;
}
