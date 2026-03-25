#include <iostream>
#include <string>
using namespace std;
int main()
{

    // 数字字面量
    int decimal = 43; // 十进制
    int octal = 052;  // 八进制(以0开头)
    int hex = 0x2A;   // 十六进制(以0x开头) 

    cout << "十进制：" << decimal << endl;
    cout << "八进制：" << octal << endl;
    cout << "十六进制：" << hex << endl;

    // 浮点字面量
    double d1 = 3.14;
    double d2 = 1.23e-4; // 科学记数法
    float d3 = 3.14f; // 单精度浮点数(以f结尾，而f其实就是 float的缩写)
    
    cout << "普通浮点数：" << d1 << endl;
    cout << "科学记数法：" << d2 << endl;
    cout << "float 类型：" << d3 << endl;

    // 转义字符
    char newline = '\n';        // 换行
    char tab = '\t';            // 制表符
    char quote = '\'';          // 单引号
    char double_quotes = '\"';  // 双引号

    cout << "第一行" << newline << "第二行" << endl;
    cout << "姓名：" << tab << "张三" << endl;
    cout << "单引号：" << quote << endl;
    cout << "双引号：" << double_quotes << endl;

    // 字符串字面量
    string str = "Hello\tWorld\n";
    cout << "字符串：" << str << endl;
    return 0;
}

/*
    字面量和转义字符
    什么字面量？其实啊字面量就是我们在代码里直接写的值
    而转义字符是用于表示一些特殊字符
*/