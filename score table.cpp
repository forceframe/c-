#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void findColAvg(const int [][3], double [], int);
void showTable(const string[], const int [][3], const double [], int);

int main(){
	int score[][3] = {{10,20,30},{20,39,69},{10,12,10},{30,40,88}};
	string name[] = {"Sananee","Roger","Dome","Yuthapong"};
	double avg[3] = {};
	findColAvg(score,avg,4);
	showTable(name,score,avg,4);	
}

void findColAvg(const int src[][3], double dest[], int N){
	for(int i=0;i<N;i++){
		dest[0]+=src[i][0];
		dest[1]+=src[i][1];
		dest[2]+=src[i][2];
	}
	dest[0]/=N;
	dest[1]/=N;
	dest[2]/=N;
}

void showTable(const string n[], const int s[][3], const double a[], int N){
	cout << setw(12) << "Quiz";
	for(int j=1;j <= 3;j++) cout << setw(8) << j;
	cout << "\n------------------------------------------\n";
	for(int i=0;i < N;i++){
		cout << setw(12) << n[i];
		for(int j=0;j < 3;j++) cout << setw(8) << s[i][j];
		cout << "\n"; 
	}
	cout << "-------------------------------------------\n";
	cout << fixed << setprecision(2);
	cout << setw(12) << "Average";
	for(int j=0;j < 3;j++) cout << setw(8) << a[j];
}
