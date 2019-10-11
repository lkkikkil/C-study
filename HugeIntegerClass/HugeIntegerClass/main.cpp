#include "HugeInteger.h"
#include <iostream>

using namespace std;

int main() {
	cout << "��� ������ �����ڴ� ==, !=, >, <, >=, <=, *, / �� �ֽ��ϴ� +, - �� �̿��ϱ� ���ؼ��� ���� add()�� substract()�� �̿��� �ּ���\n"
		<< "����, �Է°��� ����� ���� ���� 40�ڸ��� ���� ���ϹǷ� �����Ͻʽÿ�.\n\n";

	HugeInteger hugeInteger1(20000323);
	HugeInteger hugeInteger2("19990103");
	HugeInteger hugeInteger3(3000);

	cout << "hugeInteger1 = " << hugeInteger1;
	cout << "\nhugeInteger2 = " << hugeInteger2;

	cout << "\n\nhugeInteger1 = hugeInteger2 : " << ((hugeInteger1 == hugeInteger2) ? "true" : "false") << "\n";
	cout << "hugeInteger1 != hugeInteger2 : " << ((hugeInteger1 != hugeInteger2) ? "true" : "false") << "\n";
	cout << "hugeInteger1 > hugeInteger2 : " << ((hugeInteger1 > hugeInteger2) ? "true" : "false") << "\n";
	cout << "hugeInteger1 < hugeInteger2 : " << ((hugeInteger1 < hugeInteger2) ? "true" : "false") << "\n";
	cout << "hugeInteger1 >= hugeInteger2 : " << ((hugeInteger1 >= hugeInteger2) ? "true" : "false") << "\n";
	cout << "hugeInteger1 <= hugeInteger2 : " << ((hugeInteger1 <= hugeInteger2) ? "true" : "false") << "\n\n";

	cout << "\nhugeInteger1 * hugeInteger2 = " << hugeInteger1 * hugeInteger2 << "\n";

	cout << "\nhugeInteger3 = " << hugeInteger3;

	cout << "\n\nhugeInteger1 / hugeInteger3 = " << hugeInteger1 / hugeInteger3 << "\n";
	cout << "hugeInteger2 / hugeInteger3 = " << hugeInteger2 / hugeInteger3 << "\n";
}
