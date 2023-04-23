#include <iostream>
#include <map>
#include <string>

using namespace std;


int* makeIntArray(void);

int main(void) {
    int* ret = NULL;
    ret = makeIntArray();
    
    printf("%d %d\n", ret[0], ret[1]);
    printf("テスト\n");
    printf("%d %d\n", ret[0], ret[1]);
}

int* makeIntArray(void) {
    int array[] = {1, 2};
    return array;
}