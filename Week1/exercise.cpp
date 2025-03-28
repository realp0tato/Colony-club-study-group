
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "두 개의 숫자를 입력하세요: ";
    cin >> a >> b;

    cout << "합: " << a + b << endl;
    cout << "몫: " << a / b << ", 나머지: " << a % b << endl;
    
    return 0;
}
