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