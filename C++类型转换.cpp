#include <iostream>
using namespace std;
int main()
{
    // 隐式转换
    int intValue = 42;
    double doubleValue = intValue; // int 自动转换为 double
    
    // 注意：如果将浮点数转化为整数的话会导致浮点数的精度丢失，就比如下面的这样
    double doubleValue2 = 54.34;
    int intValue2 = doubleValue2;


    cout << "整数值：" << intValue << endl;
    cout << "转换为浮点值：" << doubleValue << endl;

    int a = 10;
    double b = 3.14;
    double result = a + b; // a 自动转换为 double

    cout << "10 + 3.14 = " << result << endl;

    // 强制转化
    double pi = 3.1415926;

    // C风格强制转化
    int intPie1 = (int)pi;
    // int intPie1 = int(pi); 两个写法是等价的

    // C++风格强制转化
    int intPie2 = static_cast<int>(pi);
    /*
        那C++风格的强制转换有什么好处呢
    */


    return 0;
}

/*
    类型转换
    什么是类型转化？其实啊类型转换就是一个类型转换为另一个类型
    但是呢类型转换又分为隐式转换和强制转换
    那什么是隐式转化？就是一个类型自动的转化为另一个类型
    而强制转换就是我们手动的将一个类型转化为另一个类型

*/