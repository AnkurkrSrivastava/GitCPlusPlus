#include <iostream>
using namespace std;

class phoneNo{
    string no;
    public:
        void setNumber(string n){
            no = n;
        }
        bool is_digit(){
            for (char c : no)
            {
                if (!isdigit(c))
                {
                    return false;
                }
            }
            return true;
        }

        void check_valid(){
            if (no.length() == 10 && is_digit())
            {
                cout << "The no. is valid: " << no << endl;
            }else{
                cout << "Invalid no. entered" << endl;
            }
            
        }
};

int main(){
    phoneNo p1;
    phoneNo p2;
    p1.setNumber("1234567890");
    p2.setNumber("123456789a");
    p1.check_valid();
    p2.check_valid();
    return 0;
}