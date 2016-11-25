#include<iostream>
using namespace std;
enum class Color :int {red,green,orange,blue,violet,yellow,purple};
main()
{

Color obj;
Color x = Color::red;
if(x == Color:: red)
cout<< "enum classes do not convert to other types" <<endl;


}
