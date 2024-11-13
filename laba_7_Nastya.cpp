#include <iostream>
#include <stack>
#include <cmath> // ��� ������� abs

int main() {
    std::stack<int> st;
    int num;
    char choice;

    // �������� �������� � ����
    std::cout << "Write numbers/q to out:" << std::endl;
    while (true) {
        std::cout << "Write: ";
        std::cin >> num;
        if (std::cin.fail()) break;
        st.push(num);
    }

    // ���������� ������� ���������� ��������
    int count = 0;
    while (!st.empty()) {
        int top = st.top();
        st.pop();

        // �������� �� � ������� ����������
        if (abs(top) >= 10 && abs(top) <= 99) {
            count++;
        }
    }

    std::cout << "Sum of numbers that had two-digit numbers: " << count << std::endl;

    return 0;
}

