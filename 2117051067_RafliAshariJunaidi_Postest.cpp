#include <iostream>
using namespace std;
 
int main(){
    int a=0, b, c, 
	
	jumlah=0, i, n;
     
    cout<<"Menentukan banyak jumlah Deret Aritmatika"<<endl;
    
    cout<<"Masukkan suku awal : ";
    
	cin>>a;
    
	cout<<"Masukkan beda setiap bilangan : ";
    
	cin>>b;
    
	cout<<"Masukkan jumlah  deret ke-n : ";
    
	cin>>n;
     
    
	cout<<"Deret ke-"<<n<<" : ";
    
	cout<<a<<",";
    
	jumlah=jumlah+a; 
    
	for(i=0; i<n-1; i++){
    
	c=a+b;
    
	a=c;
    
	cout<<c<<",";
    
	jumlah=jumlah+c;                      
    }
     
    
	cout<<"Jumlah deret ke-"<<n<<" : ";
    
	cout<<jumlah; 
         
    return 0;
}
