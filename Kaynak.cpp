#include <iostream>
#include <ctime>

using namespace std;

// Countdown using for loop
void countdown(int n) {
    for (int i = n; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
}
//Döngü n kez çalýþýr ve her döngü adýmýnda sabit bir iþlem yapýlýr, bu nedenle zaman karmaþýklýðý O(n)'dir.

//  Sum of first n consecutive positive integers using while loop
int sumConsecutiveIntegersWhile(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}
//Döngü n kez çalýþýr ve her döngü adýmýnda sabit bir iþlem yapýlýr, bu nedenle zaman karmaþýklýðý O(n)'dir.

//  Sum of first n consecutive positive integers using do-while loop
int sumConsecutiveIntegersDoWhile(int n) {
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    return sum;
}
//Döngü n kez çalýþýr ve her döngü adýmýnda sabit bir iþlem yapýlýr, bu nedenle zaman karmaþýklýðý O(n)'dir.

int main() {
    int n;

    cout << "Enter the n: ";
    cin >> n;

    // Countdown using for loop
    cout << "Question 1.A: Countdown using for loop" << endl;
    clock_t start_time = clock(); 
    countdown(n);
    clock_t end_time = clock(); 

    double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC; // Geçen süreyi hesapla
    cout << "Elapsed Time: " << elapsed_time << " seconds" << endl;

    // Sum of first n consecutive positive integers using while loop
    cout << "Question 1.B: Sum of first n consecutive positive integers using while loop" << endl;
    start_time = clock(); 
    int sum1 = sumConsecutiveIntegersWhile(n);
    end_time = clock(); 
    cout << "The sum is: " << sum1 << endl;

    elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC; // Geçen süreyi hesapla
    cout << "Elapsed Time: " << elapsed_time << " seconds" << endl;

    // Sum of first n consecutive positive integers using do-while loop
    cout << "Question 1.C: Sum of first n consecutive positive integers using do-while loop" << endl;
    start_time = clock(); 
    int sum2 = sumConsecutiveIntegersDoWhile(n);
    end_time = clock(); 
    cout << "The sum is: " << sum2 << endl;

    elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC; // Geçen süreyi hesapla
    cout << "Elapsed Time: " << elapsed_time << " seconds" << endl;

    return 0;
}











