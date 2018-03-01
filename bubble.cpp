#include <iostream>
using namespace std;

void swap(double d[], int x, int y){
	double temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

void show(double d[], int N){
	for(int i = 0; i < N; i++){
		cout << d[i] << " ";
	}
	cout << "\n";
}

bool moveMax2End(double d[], int e){
	bool swap_flag = false;
	for(int i = 0; i < e-1; i++){
		if(d[i] > d[i+1]){
	    swap(d,i,i+1);
	    swap_flag = true;
	    }
	}
	return swap_flag;
}

void bubbleSort(double d[], int N){
	for(int end = N; end > 1; end--){
		bool didSwap = moveMax2End(d, end);
		show(d,N);
		if(!didSwap) break;
	}
}


int main(){
	double data[] = {7,4,5,2,1,4};
	int N = sizeof(data)/sizeof(data[0]);
	cout << "Original: ";
	show(data,N);
	cout << "Sorting Process:\n";
	bubbleSort(data,N);
	return 0;
}
