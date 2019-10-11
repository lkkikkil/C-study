#include "HugeInteger.h"
#include <iostream>

using namespace std;

int main() {
	cout << "사용 가능한 연산자는 ==, !=, >, <, >=, <=, *, / 가 있습니다 +, - 를 이용하기 위해서는 각각 add()와 substract()를 이용해 주세요\n"
		<< "또한, 입력값과 계산을 통한 값은 40자리를 넘지 못하므로 주의하십시오.\n\n";

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
