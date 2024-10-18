/*René Descartes (triết gia, nhà khoa học, nhà toán học người Pháp) từng nói: "Những con số hoàn hảo, giống như những người đàn ông hoàn hảo, vô cùng hiếm" 
Nhập vào một số bất kỳ và kiểm tra xem đó có phải số hoàn hảo hay không, In ra "true" nếu đúng và "false" trong trường hợp ngược lại. 
Biết một số nguyên dương được gọi là số hoàn hảo khi nó bằng tống các ước của nó (trừ chính nó) Ví du 6-1+2+3 nên nó là số hoàn hảo.

For example:
Input Result
8128
true*/


#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int sum = 0;
    
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }


    if (sum == number) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
