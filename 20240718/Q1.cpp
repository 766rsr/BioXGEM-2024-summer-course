#include<iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int i, j, temp, x, a, b, n;
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, ans[4];
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		x = rand()%10;
		temp = num[i];
		num[i] = num[x];
		num[x] = temp;
	}
	
	cout<<num[0]<<num[1]<<num[2]<<num[3]<<endl;
	
	n = 0;
	while(true){
		a = 0;
		b = 0;
		n++;
		
		cout<<"Please input four digits (0~9):";
		cin>>temp;
		
		for(i = 0; i < 4; i++){
			ans[3-i] = temp%10;
			temp /= 10;
		}
		
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				if(num[i] == ans[j]){
					if(i == j){
						a++;
					}else{
						b++;
					}
				}
			}
		}
		
		if(a==4){
			cout<<"You got it!!"<<n<<"times!!"<<endl;
			break;
		}else{
			cout<<"The result is "<<a<<"A "<<b<<"B "<<endl;
		}
	}
}