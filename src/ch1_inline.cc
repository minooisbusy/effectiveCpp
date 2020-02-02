#include<iostream>

#define max(a, b) (a)>(b)? (a):(b)
template<typename T>
inline T callWithMax(const T& a, const T& b)
{
    return a>b? a:b;
}
int main()
{
    int a=5, b=0;

    std::cout<<a<<","<< b<<std::endl;
    int res = max(++a,b);
    
    std::cout<<a<<","<< b<<","<<res<<std::endl;
    a=5; b=0;
    res = max(++a,b+10);
    std::cout<<a<<","<< b<<","<<res<<std::endl;
    a=5;b=0;
    res = callWithMax(++a,10+b);
    std::cout<<a<<","<< b<<","<<res<<std::endl;


}
