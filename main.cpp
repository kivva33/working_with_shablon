#include <iostream>
/*template <typename T>
T max(T a, T b){
    std::cout << a << "\t" << b << std::endl;
    if(a > b)
        return a;
    return b;
};
void test_max(){
    int a = 4, b = 6;
    if(max(a, b) == b){
        std::cout << b << "\tINT OK\n";
    }
    float c = 4.4, d = 5.5;
    if(max(c, d) == d) {
        std::cout << d << "\tFLOAT OK\n";
    }
    char f[] = "aa", s[] = "bb";
    if(max(f, s) == s){
        std::cout << s << "\tCHAR OK\n";
    }
}*/

template <typename T>
class A{
private:
    T a;
public:
    A(){
        std::cout << "ON\n";
    }
    ~A(){
        std::cout << "OFF\n";
    }
    void SetA(T a){
        this->a = a;
    }
    T GetA(){
        return a;
    }
    /*virtual void for_class(){
        std::cout << "IN A\n";
    }*/
};
template <typename T>
struct for_class{
    T buff[10];
    T b;
    int n;
};

template <typename T>
class B : public A<T>{
private:
    for_class<T> Str;
public:
    /*void for_class(){
        std::cout << "IN B\n";
    }*/
    void Set_for_class_b(T b){
        Str.b = b;
    }
    T Get_for_class_b(){
        return Str.b;
    }
    void Set_for_class_buff(const T buff[10], int n){
        Str.n = n;
        for(int i = 0; i < n; i++){
            Str.buff[i] = buff;
        }
    }
};
void test_for_class(){

    A<int> D;
    D.SetA(10);
    std::cout << D.GetA() << std::endl;

    B<int> F;
    F.Set_for_class_b(10);
    std::cout << F.Get_for_class_b() << std::endl;
    F.SetA(14);
    std::cout << F.GetA() << std::endl;

    /*D.for_class();
    F.for_class();*/
}


int main() {

    test_for_class();
    return 0;
}
