#include <iostream>
#include <string>
using namespace std;

template<typename T>
void swap(T d[], int x, int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

template<typename T1, typename T2>
void moveMax2End(T1 d[], T2 v[], int e){
	for(int i = 0; i < e-1; i++){
		if(d[i] > d[i+1]){
			swap(d,i,i+1);
			swap(v,i,i+1);
		}
	}
}

template <typename T1, typename T2>
void bubbleSort(T1 d[], T2 v[], int N){
	for(int end = N; end > 1; end--){
		moveMax2End(d,v,end);
	}
}

template <typename T>
int binarySearch(T data[], int N, T key){
	int first = 0, last = N-1, mid;
	do{
		mid = (first+last)/2;
		if(data[mid] == key) return mid;
		else if(data[mid] > key) last = mid-1;
		else first = mid+1;
	}while(first <= last);
	return -1;
}

int main(){
	unsigned int StudentID[] = {600610787,600610780,600610749,600612161,600610717,600612147,600610727,600610744,600610767.600610781,600610726,600610720,600610777};
	string grade102[] = {"F","D","D+","W","D","W","F","D+","W","F","D+","F+","D"};
	int N =sizeof(StudentID)/sizeof(StudentID[0]);
	unsigned int key;
	cout << "Input Student ID to search: ";
	cin >> key;
	
	bubbleSort(StudentID,grade102,N);
	int loc = binarySearch(StudentID,N,key);
	
	if(loc == -1) cout << "Student ID " << key << "was not found";
	else cout << "Student ID " << key << " got " << grade102[loc] << " in 261102";
	
	return 0;
}
