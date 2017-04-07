/*************************************************************************
	> File Name: test.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月28日 星期二 11时17分08秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<string>
int main ()
{
      std::string pi = "pi is " + std::to_string(3.1415926);
      std::string perfect = std::to_string(1+2+4+7+14) + " is a perfect number";
      std::cout << pi << '\n';
      std::cout << perfect << '\n';
      return 0;

}
