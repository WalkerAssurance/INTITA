#include <iostream>
#include <windows.h>
#include <cmath>
 
using namespace std;
 
int main()
{
	int x1, x2, y1, y2;
	cout<<"Input start point ";
	cin>>x1;
	cin>>y1;
	cout<<"Input end point ";
	cin>>x2;
	cin>>y2;
	if ((x1 + 1 == x2 || x1 - 1 == x2 || x1 == x2)&&(y1 + 1 == y2 || y1 - 1 == y2 || y1 == y2)){
	//abs(
	cout<<"Correct coords";	
	}else{
		cout<<"Wrong coords";
	}
	

}	

/*
{
	int S;
	float R;
	const float PI=3.14;
	cout<<"Input Value for Square ";
	cin>>S;
	R=sqrt(S/PI);
	cout<<"Result = "<<R;
}

{
	setlocale(LC_ALL, "Russian");
  int m, n;
  cout << "������� ������ � ������: " << endl;
  cin >> m;
  n = m / 1024;
  cout <<"= "<< n << " ��������";
}
	
{
    int L;
    cout << "L:";
    cin >> L;
    int Lm;
    Lm=L/100;
    cout << Lm;
    return 0;
}

{
int m, n;
cout << "M:" << endl;
cin >> m;
n = m / 1000;
cout << n;
}

{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
 
  int k;
  cout << "������� ����� ����� � ��������� 1-7:  "; 
  cin >> k;
  switch (k) {
   case 1: cout << "�����������\n"; break;
   case 2: cout << "�������\n"; break;
   case 3: cout << "�����\n"; break;
   case 4: cout << "�������\n"; break;
   case 5: cout << "�������\n"; break;
   case 6: cout << "�������\n"; break;
   case 7: cout << "�����������\n"; break;
    default: cout << "��� ������ ��� ������.\n";
  }
  system ("pause");
  return 0;
}

*/
