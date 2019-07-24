//
//  main.cpp
//
//
//  Created by mac_ck on 24/07/2019.
//  Copyright © 2019 mac_ck. All rights reserved.
//

#include <iostream>
#include <typeinfo>

struct Something{
    int a, b, c, d;
    
};

using namespace std;
int main(int argc, const char * argv[]) {
    int x = 5;
    double d = 1.5;
    
    cout << x << endl;
    cout << &x << endl; // & : address-of operator
    cout << long(&x) << endl;
    
    // de-reference operator (*)
    // 포인터 - 저 쪽 주소에 가면 이 데이터가 있어요~
    // 그럼 거기에 진짜로 뭐가 들어가있는지 내가 들여다볼게! 의미
    
    cout << *(&x) << endl << endl;
    
    int * ptr_x;
    ptr_x = &x;
    
    typedef int* pint;
    pint ptr_y = &x;
    cout << ptr_y << endl;
    cout << *ptr_y << endl;
    
    //함수 return type과 parameter에도 포인터 사용가능
    double *ptr_d = &d;
    cout << ptr_d << endl;
    cout << *ptr_d << endl;
    
    cout << typeid(ptr_x).name() << endl; //Pi <= pointer to integer
    cout << typeid(d).name() << endl;
    
    
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    // 64비트에서 주소크기 8바이트 (더 많은 주소체계를 처리하기위해)
    
    Something ss;
    Something *ptr_s;
    
    cout << sizeof(Something) << endl;
    cout << sizeof(ss) << endl;
    cout << sizeof(ptr_s) << endl; // 구조체 포인터의 크기 역시 주소이기 떄문에 8바이트
    
    int *ptr_z;
    cout << *ptr_z << endl; // 초기화가 안되었는데 de-refence를 처리하라고 한다면 쓰레기값이 나온다.
    return 0;
}
