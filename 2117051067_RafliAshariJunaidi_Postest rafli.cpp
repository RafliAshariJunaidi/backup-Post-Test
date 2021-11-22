//Nama : Rafli Ashari Junaidi
//Npm  : 2117051067
//Kelas: S1 Ilmu Komputer

//Sebelum mengerjakan ingat rumus:
//	1. keliling tabung = 2*22/7*jari jari
//	2. volume tabung = 22/7* jari jari * tinggi 

#include<iostream>
using namespace std;

int main(){
	int mencari_keliling_atau_volume_tabung;
	float jari_jari_R;
	float tinggi_T;
	float keliling;
	float volume;
	
	cin>>mencari_keliling_atau_volume_tabung;
	
	if (mencari_keliling_atau_volume_tabung == 1){
		cout<<"nilai jari jari tabung :";
		cin>>jari_jari_R;
		keliling = (2*22*jari_jari_R)/7;
		cout<<"hasil keliling tabung:"<<keliling;	
	}
	else if (mencari_keliling_atau_volume_tabung == 2){
		cout<<"nilai jari jari tabung:";
		cin>>jari_jari_R;
		
		cout<<"nilai tinggi tabung:";
		cin>>tinggi_T;
		volume = (22*jari_jari_R*jari_jari_R*tinggi_T)/7;
		cout<<"hasil volume tabung:"<<volume;
	}
	else {
		cout <<"syntax error";
	}
	
	return 0;
}
	
		
	
	
