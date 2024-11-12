#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <bits/ranges_algo.h>
using namespace std;

//problem 1
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}
//problem 1

//problem 2

double sumMajorDiagonal(const double m[][SIZE]) {
    return m[0][0] + m[1][1] + m[2][2] + m[3][3];
}
//problem 2

//problem 3
const int N = 4;
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]) {
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            double res = 0.0;
            for (int j = 0; j < N; j++) {
                res += (double)a[k][j] * (double)b[j][i];
            }
            c[k][i] = res;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            cout << c[i][k] << " ";
        }
        cout << endl;
    }
}
// 1.0 2.0 3.0 4.0
// 5.0 6.0 7.0 8.0
// 9.0 10.0 11.0 12.0
// 13.0 14.0 15.0 16.0
// 0.5 1.5 2.5 3.5
// 4.5 5.5 6.5 7.5
// 8.5 9.5 10.5 11.5
// 12.5 13.5 14.5 15.5
//problem 3

//problem 4
void search(string& s, char& key) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == key) {
            cout << "Found" << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}
//problem 4

//problem 5
int count(const string&s,char a) {
    int counter = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            counter += 1;
        }
    }
    return counter;
}
//problem 5

//problem 6
void countOccurences(const char chars[], int counts[]) {
    string text;
    getline(cin, text);
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < text.length(); j++) {
            if(chars[i] == (char)tolower(text[j])) {
                counts[i] += 1;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << chars[i] << ":" << counts[i] << endl;
        }
    }
}
//problem 6


int main() {

    /*
    //problem 1
    int rows;
    cin >> rows;
    double m[rows][SIZE];
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Sum of column " << i << " = " << sumColumn(m, rows, i) << endl;
    }
    //problem 1
    */

    /*
    //problem 2
    double m[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    cout << sumMajorDiagonal(m) << endl;
    //problem 2
    */

    /*
    //problem 3
    double a[4][4];
    double b[4][4];
    double c[4][4];
    cout << "Enter matrix A:" << endl;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            cin >> a[i][k];
        }
    }
    cout << "Enter matrix B:" << endl;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            cin >> b[i][k];
        }
    }
    multiplyMatrix(a, b, c);
    //problem 3
    */

    /*
    //problem 4
    char spe;
    cin >> spe;
    string s;
    cin >> s;
    search(s, spe);
    //problem 4
    */

    /*
    //problem 5
    string s;
    char key;
    cin >> key;
    cin.ignore();
    getline(cin, s);
    cout << count(s, key) << endl;
    //problem 5
    */


    /*
    //problem 6

    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int counts[26] = {0};
    countOccurences(alphabet, counts);

    //problem 6
    */

    /*
    //problem 7
    int n;
    cin >> n;
    vector<int> grades(n);
    double ave = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
        ave += (double)grades[i];
    }
    sort(grades.begin(), grades.end());
    cout << "Minimum = " << grades[0] << endl;
    cout << "Maximum = " << grades[n - 1] << endl;
    cout << "Average = " << ave / (double)n << endl;
    //problem 7
    */

    /*
    //problem 8
    int n;
    cin >> n;
    vector<int> positives(n);
    int in;
    int address = 0;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in > 0) {
            positives[address] = in;
            address += 1;
        }
    }
    for (int i = 0; i < address; i++) {
        for (int j = i; j < address; j++) {
            if (positives[i] > positives[j]) {
                swap(positives[i], positives[j]);
            }
        }
    }
    for (int i = 0; i < address; i++) {
        cout << positives[i] << " ";
    }
    //problem 8
    */


    /*
    //problem 9

    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if ((nums[i - 1] - nums[i] > 1) && (nums[i + 1] - nums[i]) > 1) {
            cout << nums[i] << " ";
        }
    }

    //problem 9
    */
    return 0;
}
