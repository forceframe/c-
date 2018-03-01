#include <iostream>
using namespace std;

int linearSearch(int data[], int N, int key){
	for(int i = 0; i< N; i++){
		if(data[i] == key) return i;
	}
	return -1;
}

int main(){
	int data[] = {5,8,9,69,25,55,10,19,7,30,1,2};
	int N = sizeof(data)/sizeof(data[0]);
	int key;
	cout << "Input a number to search: ";
	cin >> key;
	
	int loc = linearSearch(data,N,key);
	
	if(loc == -1) cout << "Not found";
	else cout << "Found at data[" << loc << "]";
	
	return 0;
}
