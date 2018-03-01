#include <iostream>
using namespace std;

void swap(int d[], int x, int y){
	int temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

void show(int d[], int N){
	for(int i = 0; i < N; i++){
		cout << d[i] << " ";
	}
	cout << "\n";
}

void moveMax2End(int d[], int e){
	for(int i = 0; i < e - 1; i++){
		if(d[i] > d[i+1]) swap(d,i,i+1);
	}
}

void bubbleSort(int d[], int N){
	for(int end = N; end > 1; end--){
		moveMax2End(d, end);
	}
}

int binarySearch(int data[], int N, int key){
	cout << "Comparison Sequence: ";
	int first = 0, last = N-1, mid;
	do{
		mid = (first+last)/2;
		cout << data[mid] << " ";
		if(data[mid] == key) return mid;
		else if(data[mid] > key) last = mid-1;
		else first = mid +1;
	}while(first <= last);
	return -1;
}

int main(){
	int data[] = {5,8,9,69,23,55,10,19,7,30,1,2};
	int N = sizeof(data)/sizeof(data[0]);
	int key;
	cout << "input a number to search: ";
	cin >> key;
	
	cout << "Sorted data: ";
	bubbleSort(data, N);
	show(data, N);
	
	int loc = binarySearch(data,N,key);
	cout << "\n";
	
	if(loc == -1) cout << "Not found";
	else cout << "Found at data[" << loc << "]";
	
	return 0;
}
