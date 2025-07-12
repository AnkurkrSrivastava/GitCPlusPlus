#include <iostream>
#include <vector>
using namespace std;

int WaterContainer(vector<int> level){
    int MaxWater = INT_MIN;
    int leftindex = 0;
    int n = level.size();
    int rightindex = n-1;
    while(leftindex < rightindex){
        int length = rightindex - leftindex;
        int breadth = min(level[leftindex],level[rightindex]);
        int WaterArea = length*breadth;
        MaxWater = max(MaxWater,WaterArea);
        
        if (level[leftindex] < level[rightindex])
        {
            leftindex++;
        }else{
            rightindex--;
        }
        
    }    
    return MaxWater;
    
}

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout << WaterContainer(vec) << endl;
    return 0;
}