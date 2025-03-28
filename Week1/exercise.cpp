
---

## **📌 `week1/exercises.cpp` (실습 문제 코드)**
동아리원들이 실습할 수 있도록 문제 코드 파일을 제공합니다.

```cpp
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
