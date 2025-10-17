#include <iostream>
using namespace std;

int main()
{
    int firstnum, secondnum, answer;
    char mathop;
    
    cout << "Input the first number: ";
    cin >> firstnum;
    
    cout << "Input second number: ";
    cin >> secondnum;
    
    cout << "Input math operator: ";
    cin >> mathop;
    
    switch (mathop) {
    	
        case '+':
        answer = firstnum + secondnum;
        break;n
            
        case '-':
        answer = firstnum - secondnum;
        break;
            
        case '/':
        answer = firstnum / secondnum;
        break;
            
        case '*':
        answer = firstnum * secondnum;
        break;
        
        case '%':
        answer = firstnum % secondnum;
        break;
            
        default:
        cout << "Invalid operator!";
    }
    
    cout << "The answer for "<< firstnum << mathop << secondnum << " is " << answer << endl;
    
    return 0;
}

