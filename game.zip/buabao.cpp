#include<iostream>
using namespace std;
#include<ctime>

int main()
{
	cout << "\n\n\t\t =============== TRO CHOI KEO - BUA - BAO ===============";
	cout << "\n 1 <=> KEO";
	cout << "\n 2 <=> BUA";
	cout << "\n 3 <=> BAO";
	cout << "\n\n\t\t ===============           END            ===============";

	// BƯỚC 1: CHO NGƯỜI CHƠI CHỌN KÉO BÚA HOẶC BAO
	int nguoichoi; // biến này chứa giá trị là 1, 2 hoặc 3
	cout << "\nMoi ban nhap lua chon: ";
	cin >> nguoichoi;

	// BƯỚC 2: CHO MÁY CHỌN ==> RANDOM 1 GIÁ TRỊ NGẪU NHIÊN TRONG [1, 3]
	srand(time(NULL));
	int may = rand() % 3 + 1; // random trong đoạn [a, b] theo công thức sau: rand() % (b - a + 1) + a

	// BƯỚC 3: SO SÁNH ĐỂ TÌM NGƯỜI THẮNG CUỘC !!!!
	if(nguoichoi == 1) // người chơi chọn KÉO
	{
		if(may == 3)
		{
			cout << "\nNguoi choi chon: KEO";
			cout << "\nMay chon: BAO";
			cout << "\n\n\t\tNGUOI CHOI WIN ! ";
		}
		else if(may == 2)
		{
			cout << "\nNguoi choi chon: KEO";
			cout << "\nMay chon: BUA";
			cout << "\n\n\t\tMAY WIN !";
		}
		else
		{
			cout << "\nNguoi choi chon: KEO";
			cout << "\nMay chon: KEO";
			cout << "\n\n\t\tKET QUA HOA NHAU !!!!";
		}
	}
	else if(nguoichoi == 2) // người chơi chọn BÚA
	{
		if(may == 3) // máy chọn BAO
		{
			cout << "\nNguoi choi chon: BUA";
			cout << "\nMay chon: BAO";
			cout << "\n\n\t\tMAY WIN ! ";
		}
		else if(may == 1) // máy chọn KÉO
		{
			cout << "\nNguoi choi chon: BUA";
			cout << "\nMay chon: KEO";
			cout << "\n\n\t\tNGUOI CHOI THANG!";
		}
		else
		{
			cout << "\nNguoi choi chon: BUA";
			cout << "\nMay chon: BUA";
			cout << "\n\n\t\t KET QUA HOA NHAU !!!!";
		}
	}
	else if(nguoichoi == 3) // người chơi chọn BAO
	{
		if(may == 1) // máy chọn KÉO
		{
			cout << "\nNguoi choi chon: BAO";
			cout << "\nMay chon: KEO";
			cout << "\n\n\t\tMAY WIN ! ";
		}
		else if(may == 2) // máy chọn BÚA
		{
			cout << "\nNguoi choi chon: BAO";
			cout << "\nMay chon: BUA";
			cout << "\n\n\t\tNGUOI CHOI THANG!";
		}
		else
		{
			cout << "\nNguoi choi chon: BAO";
			cout << "\nMay chon: BAO";
			cout << "\n\n\t\t KET QUA HOA NHAU !!!!";
		}
	}

	system("pause");
	return 0;
}