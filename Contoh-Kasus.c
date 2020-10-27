#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	
	cout<<"PILIHAN"<<endl;
	cout<<"1. Menghitung volume kubus"<<endl;
	cout<<"2. Menghitung luas lingkaran"<<endl;
	cout<<"3. Menghitung volume silinder"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	
	switch(pil){
	        case 1 : 
	        	cout<<"Input panjang sisi kubus : ";
	            cin>>bil1;
	            
	            hasil=bil1*bil1*bil1;
			    
			    cout<<"-----------------------------"<<endl;
	            cout<<"    "<<bil1<<"^3 = "<<hasil<<endl;
            	cout<<"-----------------------------"<<endl;
		
			
			break;
			
			case 2 : 
	        	cout<<"Input panjang jari-jari lingkaran : ";
	            cin>>bil1;
	            
	            hasil=3.14*bil1;
	        	
	        	cout<<"-----------------------------"<<endl;
	            cout<<"    "<<bil1<<" x 3.14 = "<<hasil<<endl;
            	cout<<"-----------------------------"<<endl;
            	
			break;
				case 3 : 
	        	cout<<"Input panjang jari-jari lingkaran : ";
	            cin>>bil1;
	            cout<<"Input tinggi silinder : ";
	            cin>>bil2;
	            
	            hasil=3.14*(bil1*bil1)*bil2;
		    
		        cout<<"-----------------------------"<<endl;
	            cout<<"    3.14 x ("<<bil1<<"^2) x " <<bil2<< " = "<<hasil<<endl;
            	cout<<"-----------------------------"<<endl;
            	
			break;
		
		default :
			cout<<"Kesalahan, Mohon masukan inputkan 1 / 2 / 3 "<<endl;
	}

	getch();
}