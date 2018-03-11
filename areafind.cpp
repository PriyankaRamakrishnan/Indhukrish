#include <iostream>
using namespace std;
class shape {
public:
	int l, w;
	void get_sq_len() {
		cout << "\nLength :";
		cin >> l;
	}
	void get_rect_val() {
		cout << "\nLength and width :";
		cin >> l >> w;
	}
};
class square : public shape {
public:
	int ar;
	void sq_area() {
		ar = l * l;
		cout << "\nSquare Area :" << ar;
	}
};
class rectangle : public shape {
public:
	int ra;
	void rect_area() {
		ra = l * w;
		cout << "\nRectangle area :" << ra;
	}
};
int main() {
	square obj1;
	rectangle obj2;
	obj1.get_sq_len();
	obj1.sq_area();
	obj2.get_rect_val();
	obj2.rect_area();
	return 0;
}
