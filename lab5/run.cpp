#include "allocator.hpp"
#include "vector.hpp"
#include <vector>
int main(int argc, char **argv){
    cout<<"map:\n";
    std::map<int, int, std::less<int>,Allocator<std::pair<const int,int>, 50>> my_map;
    my_map[0] = 1;
    for(int i=1; i<20; ++i){
        my_map[i] = i + my_map[i-1];
        cout<<"i: "<< i << ", value: "<< my_map[i]<<endl;
    }

    cout<<"\nvector:\n";
    MyVector<int, Allocator<int, 50>> my_vec = {11,22,33,44,55,66,77,88,99};
    //my_vec.push_back(100);
    my_vec.pop_back();
    my_vec.push_back(1000);
    for(int i=0;i<5;i++){
        cout<<my_vec[i] << endl;
        cout<<my_vec[8]<<endl;
    }
}