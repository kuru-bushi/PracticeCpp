#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {
    map<string, string>* capitalcities;
   make_dict_01(capitalcities);
    // std::cout << a << std::endl;
    return 0;
}

void make_dict_01(map<string, string>capitalcities){
    capitalcities["NewDelhi"] = "India";
    capitalcities["Bangalore"] = "Karnataka";
    capitalcities["Mumbai"] = "Maharashtra";
    capitalcities["Chennai"] = "TamilNadu";

    // for (auto element :capitalcities) {
    //     //element.first represents the key in the map
    //     cout<<element.first<<" is the capital of ";
    //     //element.second represents the value in the map
    //     cout<<element.second<<endl;
    // }

}
