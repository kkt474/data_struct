//  基本语法：
/*
1.capture: 捕获列表，定义如何捕获变量：值捕获、引用捕获
2.parameters: 参数列表
3.return_type: 返回类型，通常可以省略，编译器会自动推导
4.function_body: 函数体
    [capaure](parameters) -> return_type{
        // function body
    }
*/


// 按值捕获
// int x = 10;
// auto lambda = [x]() { return x + 5; }; // x 被按值捕获

// 按照引用捕获
// int y = 10;
// auto lambda = [&y]() { return y + 5; }; // y 被按引用捕获

// 捕获所有量
// auto lambda = [=]() { /* 按值捕获所有外部变量 */ };
// auto lambda_ref = [&]() { /* 按引用捕获所有外部变量 */ };

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> number = {1,2,3,4,5};

    // 打印每个元素
    std::for_each(number.begin(),number.end(),[](int value){
          std::cout << value << " ";
    });

    std::cout << std::endl;

    //  求和
    int sum = 0;
    std::for_each(number.begin(),number.end(),[&sum](int n){
          sum+=n;
    });
    std::cout << "Sum: " << sum << std::endl;


    return 0;
}
