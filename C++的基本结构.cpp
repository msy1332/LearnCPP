#include <iostream>
// using namespace std;
int main()
{
    std::cout << "这是我的第一个C++程序！" << std::endl;
    return 0;
}

/*
    我们可以看到啊上面就是最简单的C++程序

    #include <iostream> 是一个预处理指令
    作用：告诉编译器包含标准输入输出流库，也就是头文件
    语法：#include <你要包含的头文件>
    
    using namespace std; 意思引入 std这个命名空间
    那什么是命名空间呢(namespace)？是一种用来组织代码、避免命名冲突的机制。
    作用：它会把一组相关的变量、函数、类、标识符封装在一个独立的作用域中，防止它们与其他代码中的同名标识符发生冲突，从而导致编译失败

    那为什么要引入呢？因为啊 下面的 cout就是定义在这个命名空间里面的
    语法：using namespace 你要引入的命名空间的名字; 
    注意：在C++中的每一个语句后面都要加上分号 ( ; )，除了预处理指令后面不需要加分号

    int main() 就是在整个程序的入口函数
    那什么是入口函数呢？其实啊入口函数就是程序开始是第一个被调用的函数，而这个函数就是整个程序的起点
    每个C++程序都必须包函数一个名字为main的函数

    而main函数下面被花括号里面就称之为函数体

    并且啊 main函数还有两种标准形式
    第一种：
    int main()
    {
        // 程序代码
        return 0; // 返回 0 表示程序成功结束
    }

    第二种形式：
    int main(int argc,char* argv[])
    {
        // argc 是命令行参数的个数
        // argv 是一个字符串数组，存储每个命令行参数
        return 0; // 返回 0 表示程序成功结束
    }

    上面的代码中 std::cout表示使用标准命名空间(也就是 std) cout对象。std是standard的缩写，代表C++表示库
    为了简化代码，我们可以使用 using namespace std;来简化代码
*/