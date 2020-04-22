#include <iostream>

using namespace std;
template <typename T>                                 /*when both data type are of same nature. Here T will hold the data type passed by the calling
                                                            function*/
T add(T x, T y)
{
    return(x+y);
}
template<typename T, typename U>
                                                /*When both data types are different in nature. Here function return type is of T nature*/
U add(T x, U y)
{
    return(x+y);
}


int main()
{
    cout<<"Sum of 2 and 3 is: "<<add<int>(2,3)<<endl;
    cout<<"Sum of 2 and 2.5 is: "<<add<int,float>(2,2.5)<<endl;

    return 0;
}
