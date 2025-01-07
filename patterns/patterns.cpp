#include <iostream>
using namespace std;

void symmetry(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 0; j--){
            cout << "*";
        }
        for (int j = 1; j < 2 * i; j++){
            cout << " ";
        }
        for (int j = (n - i); j >= 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
// bool checkArmstrong(int n){
// 	int count=0;
// 	int original=n;
// 	while(n>0){
// 		n=n/10;
// 		count++;
// 	}
// 	cout << count;
	// int sum=0;
	// while(n!=0){
	// 	int ld=n%10;
	// 	sum+= ld^count;
	// 	n=n/10;
	// }
	// if(original==sum){
	// 	return true;
	// }
	// return false;
//}


void backtrackingreverseN(int i,int n){
    if(i>n){
        return;
    }
    backtrackingreverseN(i+1,n);
    cout << i << endl;
}

int main()
{
    // symmetry(5);
    //pattern1(5);
    //checkArmstrong(15389);
    backtrackingreverseN(0,5);
    return 0;
}