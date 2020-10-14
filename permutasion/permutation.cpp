#include <iostream>
#include <cmath>

using namespace std;






/*
 * This file should be debug
 * This file includes logical issues
 * There is no syntax errors
 * Issue prediction on class factoriel
 * Probably I catch the issue (when you give a value bigger than 12 to "n", aplication cant calculate the right answer but no problem with "r")
 *
 *
 *
*/
class factoriel{
    

    public:
        
        factoriel(){

       //cout << "Class has been constructed"<<endl;

        }

        ~factoriel(){
         //   cout << "Class has been deconstructed"<<endl;
        }

        long result = 0;
        long total = 1;
        
        int facstuff(int number){
        
            for(int i = 1; i <= number;i++ ){


               total *= i;
               result = total;
                 
                
            }
        return (long)result;

}
};
int permutasyon(int firstnumber,int secondnumber){

    factoriel *fac1 = new factoriel();
    factoriel *fac2 = new factoriel();    

    
    
    return fac1 -> facstuff(firstnumber) / fac2 ->facstuff(firstnumber - secondnumber);
      
        


delete fac1;
delete fac2;
};



int main(){



int input;
int input2;

cout << "Please enter your clusters of number (n) :";
cin >> input;
cout << "Please enter your (r) factor :";
cin >> input2;
cout << permutasyon(input,input2) << endl;



return 0;
}
