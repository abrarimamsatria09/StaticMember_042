#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); // constructor
	~angka();	// destructor
	void cetakdata();
	void isidata();
};

//definisi member function
angka::angka(int i) {	//constructor
	panjang = i;
	arr = new int[i];
	isidata();
}

angka::~angka(){	//destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakdata() {
	for (int i=1;i<= panjang;i++) {
		cout << i << " = " << arr[i] << endl;
	}
}
