//Koko eating bananas, leetcode problem 875, O(Nlog(M)) TC
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &piles,int h,int AllowdBanana,int count){
    int hours = 0;
    for (int i = 0; i < count; i++)
    {
        hours += (piles[i] + AllowdBanana - 1)/AllowdBanana; //ceil(7/3)=3...piles = 7 and AllowedBnana = 3 if we divide directly 7/3 = 2 but needed hour for this pile is 3.  
        if(hours > h) return false;
    }
    return true;
}

int KokoBanana(vector<int> &piles,int h){
    int st = 1;
    int ans = 0;
    int count = piles.size();
    int end = 0;
    for (int i = 0; i < count; i++)
    {
        end = max(piles[i],end); //Koko can eat the maximum of the given piles in one hour.
    }
    
    while (st<=end)
    {
        int mid = st+(end-st)/2;
        if (isValid(piles,h,mid,count)){
            end = mid-1;
            ans = mid;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {30,11,23,4,20};
    int hrs = 5;
    cout << KokoBanana(vec,hrs) << endl;
    return 0;
}