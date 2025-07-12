#include <iostream>
#include <vector>
using namespace std;

int WaterContainer(vector<int> level){
    int MaxWater = INT_MIN;
    for (int i = 0; i < level.size(); i++)
    {
        for (int j = i+1; j < level.size(); j++)
        {
            int length = j - i;
            int breadth = min(level[i],level[j]);
            int WaterArea = length * breadth;
            MaxWater = max(MaxWater,WaterArea);  
        }
    }
    return MaxWater;
    
}

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout << WaterContainer(vec) << endl;
    return 0;
}