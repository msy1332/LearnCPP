#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "这是我的第一个C++程序！" << endl;

    int a;
    cin >> a;

    string str;
    getline(std::cin,str);
    return 0;
}

/*
    输入输出是程序与用户交互的基本方式。
    在C++中提供了标准的输入输出功能
    输出功能主要是使用 cout这个对象
    例如上面的这个代码

    输入功能主要是使用 cin这个对象
    例如上面的这个代码
    并且啊输入使用 cin对象来获取用户输入时，是以空格或者是回车来代表用户的结束输入，结束输入后 cin就会将用户输入的值赋值给我们通过 cin >> 后面指定的变量
    代码： cin >> a >> a;
    用户输入: 1 2
    或者: 1
         2
    这时后我们就会发现 a的是刚好就是用户输入的 1,而 b的值就是用户刚好输入的 2，也就是说啊 cin是由空格和回车作为分隔的

    但是这样的话我们就获取不了用户输入的空格了？那有没有其他的方法呢？
    有的有的！就是使用 getline这个函数，具体用法如下
    函数原型: 
        istream& getline(istream& is, string& str, char delim);
        istream& getline(istream& is, string& str);  // 默认分隔符为 '\n'
    函数参数：
        istream 指定输入流，如 std::cin、文件流等
        str 指定接受的内容保存在哪个变量
        delim 可选参数，指定分隔符，意思指定当遇到哪个字符时停止读取
*/