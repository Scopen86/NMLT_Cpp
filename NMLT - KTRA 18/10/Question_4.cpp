/*Một palindrome là một số hoặc một cụm từ mà đọc ngược hay đọc xuôi đều như nhau.
Ví dụ, những số gòm năm chữ số sau đèu là palindrome: 12321, 55555, 45554, và 11611.
Viết một chương trình đọc vào một số nguyên gồm năm chữ số và in ra màn hình "<number> is a palindrome!" nếu đó là một palindrome, ngược lại in ra "<number> is not a palindrome!".
Gợi ý: Sử dụng phép chia và phép lấy phần nguyên để tách số ra thành các chữ số riêng biệt.
For example:
Input Result
55555 55555 is a palindrome!*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number, remainder, reverse = 0;
    cin >> number; // 1234321

    vector<int> digits;
    int temp = number;
    bool isPalindrome = false;

    while (temp > 0) {
        remainder = temp % 10;
        digits.push_back(remainder);
        temp = temp / 10;
    }

    for (int i = 0; i < digits.size(); i++) {
        reverse = reverse * 10 + digits[i];
    }

    if (number == reverse) {
        cout << number << " is a palindrome!" << endl;
    } else {
        cout << number << " is not a palindrome!" << endl;
    }

    return 0;
}   
