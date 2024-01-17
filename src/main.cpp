#include <iostream>
#include <memory>
using namespace std;

int main() {

	unique_ptr<int> p = make_unique<int>(9);
	cout << "По адресу " << &p << " лежит значение = " << *p << endl;

	return 0;
}
