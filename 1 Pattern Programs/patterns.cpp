#include <iostream>
using namespace std;

void pattern1(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns (inner loop): n columns
        for (int j = 0; j < n; j++) {
            // Step 3: Printing ' * ' in the inner loop
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern2(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns (inner loop): i columns
        for (int j = 0; j <= i; j++) {
            // Step 3: Printing ' * ' in the inner loop 'i' number of times
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern3(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 1; i <= n; i++) {
        // Step 2: Focus on the number of columns (inner loop): i columns
        for (int j = 1; j <= i; j++) {
            // Step 3: Printing j in the inner loop till j is less than or equals to i
            cout<<j<<" ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern4(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 1; i <= n; i++) {
        // Step 2: Focus on the number of columns (inner loop): i columns
        for (int j = 1; j <= i; j++) {
            // Step 3: Printing i in the inner loop till j is less than or equals to i
            cout<<i<<" ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern5(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns (inner loop): i columns ( columns decreasing in number, so n-i)
        for (int j = 0; j < n-i; j++) {
            // Step 3: Printing i in the inner loop till j is less than or equals to i
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern6(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    for (int i = 1; i <= n; i++) {
        // Step 2: Focus on the number of columns (inner loop): i columns ( columns decreasing in number, so n-i)
        for (int j = 1; j <= n-i+1; j++) {
            // Step 3: Printing i in the inner loop till j is less than or equals to i
            cout<<j<<" ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
   }
}

void pattern7(int n) {
    // Step 1: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: n - i - 1, e.g. if n = 4, step 1: 3, step 2: 2, step 3: 1, step 4: 0
        for (int j = 0; j < n-i-1; j++) {
            // Step 3.1: Printing spaces n-i-1 times
            cout<<"  ";
        }

        // Step 2.2: Stars - Number of columns: 2 * i + 1, e.g. step 1: 1, step 2: 3, step 3: 5, step 4: 7
        for (int j = 0; j < 2*i+1 ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
    }
}

void pattern8(int n) {
    // Step 1: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: i
        for (int j = 0; j < i; j++) {
            // Step 3.1: Printing spaces i times
            cout<<"  ";
        }

        // Step 2.2: Stars - Number of columns: 2*n - (2*i + 1) + 1, e.g. step 1: 9, step 2: 7, step 3: 5, step 4: 3
        for (int j = 0; j < 2*n - (2*i + 1) ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
    }
}

void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

void pattern9_alt(int n) {
    // Upper Pyramid
    // Step 1.1: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: n - i - 1, e.g. if n = 4, step 1: 3, step 2: 2, step 3: 1, step 4: 0
        for (int j = 0; j < n-i-1; j++) {
            // Step 3.1: Printing spaces n-i-1 times
            cout<<"  ";
        }

        // Step 2.2: Stars - Number of columns: 2 * i + 1, e.g. step 1: 1, step 2: 3, step 3: 5, step 4: 7
        for (int j = 0; j < 2*i+1 ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }

        // Step 2.3: Spaces - Number of columns: n - i - 1, e.g. if n = 4, step 1: 3, step 2: 2, step 3: 1, step 4: 0
        for (int j = 0; j < n-i-1; j++) {
            // Step 3.3: Printing spaces n-i-1 times
            cout<<"  ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: We need to make a similar pattern for the lower pyramid
    }

    // Lower Pyramid
    // Step 1.2: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.4: Spaces - Number of columns: i
        for (int j = 0; j < i; j++) {
            // Step 3.1: Printing spaces i times
            cout<<"  ";
        }

        // Step 2.5: Stars - Number of columns: 2*n - (2*i + 1) + 1, e.g. step 1: 9, step 2: 7, step 3: 5, step 4: 3
        for (int j = 0; j < 2*n - (2*i + 1) ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }

        // Step 2.6: Spaces - Number of columns: i
        for (int j = 0; j < i; j++) {
            // Step 3.3: Printing spaces i times
            cout<<"  ";
        }
        cout<<endl;
        // Step 4.2: Observing Symmetry: NOT REQUIRED
    }
}

void pattern10(int n) {
    // Step 1: Focus on the number of rows (outer loop): 2*n-1 rows, step 1: 1, step 2: 3, step 3: 5, step 4: 7
    for (int i = 1; i <= 2*n-1; i++) {
        int stars;
        // Step 2: Focus on the number of columns (inner loop): increases till halfway point, then decreases.
        // Step 2.1: If i is less than or equals to n, then number of columns: i (For Upper Triangle)
        if (i <= n) {
            stars=i;
        }

        // Step 2.2: If i is greater than n, then number of columns: 2*n - i (For Lower Triangle)
        else {
            stars=2*n-i;
        }
        for (int j = 1; j <= stars; j++) {
            // Step 3: Printing * in the inner loop till j is less than or equals to stars
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: Already done
   }
}

void pattern11(int n) {
    // Step 1: Focus on the number of rows (outer loop): n rows
    int start;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) start = 1;              // When i is even, e.g. row 0, 2, 4
        else start = 0;                         // When i is odd, e.g. row 1, 3, 5

        // Step 2: Focus on the number of columns (inner loop): i columns ( columns increasing in number, so j<i)
        for (int j = 0; j <= i; j++) {
            // Step 3: Printing start in the inner loop till j is less than or equals to i
            cout<<start<<" ";
            // Flipping start from 0 to 1 and vice versa
            start = 1 - start;
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
    }
}

void pattern12(int n) {
    // Step 1: Focus on the number of rows: n rows
    for (int i = 1; i <= n; i++) {
        // Step 2.1: Focus on the number of numbers: i numbers in ascending order, e.g. from 1 to 4
        for (int j = 1; j <= i; j++) {
            // Step 3.1: Printing j in the inner loop till j is less than or equals to i
            cout<<j;
        } 

        // Step 2.2: There are always 2 * (n-1) spaces, e.g. when n=4, step 1: 6, step 2: 4, step 3: 2, step 4: 0
        for (int j = 1; j <= 2 * (n-i); j++) {
            // Step 3.2: Printing spaces in the inner loop till j is less than or equals to 2 * (n-1)
            cout<<" ";
        }

        // Step 2.3: Focus on the number of numbers: i numbers in descending order, e.g. from 4 to 1
        for (int j = i; j >= 1; j--) {
            // Step 3.1: Printing j in the inner loop till j is greater than or equals to i
            cout<<j;
        } 
        cout<<endl;
    }
}

void pattern13(int n) {
    // Step 1: Focus on the number of rows: n rows
    int count=1;
    for (int i = 1; i <= n; i++) {
        // Step 2: Focus on the number of columns: i number columns
        for (int j = 1; j <= i; j++, count++) {
            // Step 3: Printing count in the inner loop i times
            cout<<count<<" ";
        } 
        cout<<endl;
    }
}

void pattern14(int n) {
    // Step 1: Focus on the number of rows: n rows
    int count=1;
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns: i columns
        // E.g. when i = 3, we have to print A B C, ch <= "A" + i is same as ch <= "A" + 2 which is same as ch <= "C"
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            // Step 3: Printing ch in the inner loop i times
            cout<<ch<<" ";
        } 
        cout<<endl;
    }
}

void pattern15(int n) {
    // Step 1: Focus on the number of rows: n rows
    int count=1;
    for (int i = 1; i <= n; i++) {
        // Step 2: Focus on the number of columns: i columns in decreasing order
        for (char ch = 'A'; ch <= 'A' + (n-i); ch++) {
            // Step 3: Printing ch in the inner loop i times
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n) {
    // Step 1: Focus on the number of rows: n rows
    int count=1;
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns: i columns in increasing orderf
        for (char ch = 'A' + i, j = 0; j <= i; j++) {
            // Step 3: Printing ch in the inner loop i times
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int n) {
    // Step 1: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: n - i - 1, e.g. if n = 4, step 1: 3, step 2: 2, step 3: 1, step 4: 0
        for (int j = 0; j < n-i-1; j++) {
            // Step 3.1: Printing spaces n-i-1 times
            cout<<"  ";
        }

        char ch='A';
        // Step 2.2: Stars - Number of columns: 2 * i + 1, e.g. step 1: 1, step 2: 3, step 3: 5, step 4: 7
        for (int j = 0; j < 2*i+1 ; j++) {
            // Step 3.2: Printing stars 2*i+1 times
            cout<<ch<<" ";

            // Step 4: Observing Symmetry: char will increase till midpoint, after which it will decrease.
            if (j < (2*i+1)/2) ch++;
            else ch--;
        }

        cout<<endl;
    }
}

void pattern18(int n) {
    // Step 1: Focus on the number of rows: n rows
    int count=1;
    for (int i = 0; i < n; i++) {
        // Step 2: Focus on the number of columns: i columns in increasing order
        for (char ch = 'A' + n - i; ch <= 'A'+n; ch++) {          // E.g. when n=3, step 1: E, step 2: D E, step 3: C D E
            // Step 3: Printing ch in the inner loop i times
            char ch2 = ch - 1;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n) {
    
    // Step 1.1: UPPER PART- Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2.1: Stars- Focus on the number of columns: n-i stars ( columns decreasing in number, so n-i)
        for (int j = 0; j < n-i; j++) {
            // Step 3.1: Printing * in the inner loop till j is less than n-i
            cout<<"* ";
        }

        // Step 2.2 Spaces- Focus on the number of columns: 2*i spaces
        for (int j = 0; j < 2*i; j++) {
            // Step 3.2: Printing spaces in the inner loop till j is less than 2*i
            cout<<"  ";
        }
        
        // Step 2.3: Stars- Focus on the number of columns: n-i stars ( columns decreasing in number, so n-i)
        for (int j = 0; j < n-i; j++) {
            // Step 3.3: Printing * in the inner loop till j is less than n-i
            cout<<"* ";
        }
        cout<<endl;    
   }

    // Step 4: Observing Symmetry: We create a similar but opposite pattern for the lower part

    // Step 1.2: LOWER PART- Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2.4: Stars- Focus on the number of columns: i+1 stars ( columns increasing in number, so i+1)
        for (int j = 0; j <= i; j++) {
            // Step 3.4: Printing * in the inner loop till j is less than or equals to i
            cout<<"* ";
        }

        // Step 2.5: Spaces- Focus on the number of columns: 2*n - 2*i - 1 spaces
        for (int j = 1; j < (2*n - 2*i) - 1; j++) {
            // Step 3.5: Printing * in the inner loop till j is less than 2*n - 2*i - 1
            cout<<"  ";
        }

        // Step 2.6: Stars- Focus on the number of columns: i+1 stars ( columns increasing in number, so i+1)
        for (int j = 0; j <= i; j++) {
            // Step 3.6: Printing * in the inner loop till j is less than or equals to i
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern20(int n) {
    // Step 1.1: Focus on the number of rows: n rows
    for (int i = 0; i < n; i++) {
        // Step 2.1: Stars- Focus on the number of columns: i+1 stars in increasing order
        for (int j = 0; j <= i; j++) {
            // Step 3.1: Printing stars in the inner loop till j <= i
            cout<<"* ";
        }

        // Step 2.2: Spaces- Focus on the number of columns: 2*n - 2*i spaces
        for (int j = 1; j < (2*n - 2*i) - 1; j++) {
            // Step 2.2: Printing spaces in the inner loop till j < 2*n - 2*i - 1
            cout<<"  ";
        }

        // Step 2.3: Stars- Focus on the number of columns: i+1 stars in increasing order
        for (int j = 0; j <= i; j++) {
            // Step 3.3: Printing stars in the inner loop till j <= i
            cout<<"* ";
        }
        cout<<endl;
    }

    // Step 4: Observing Symmetry: We create a similar but opposite pattern for the lower part

    // Step 1.2: Focus on the number of rows: n rows
    for (int i = 0; i < n; i++) {
        // Step 2.4: Stars- Focus on the number of columns: 2*n - 2*i stars
        for (int j = 0; j < n - i - 1; j++) {
            // Step 3.4: Printing * in the inner loop till j < 2*n - 2*i
            cout<<"* ";
        }

        // Step 2.5: Spaces- Focus on the number of columns
        for (int j = 0; j < (2*i) + 2; j++) {
            // Step 3.5: Prining spaces in the inner loop till j is less than or equals to 2*n - 2*i
            cout<<"  ";
        }

        // Step 2.6: Stars- Focus on the number of columns: 2*n - 2*i stars
        for (int j = 0; j < n - i - 1; j++) {
            // Step 3.6: Printing * in the inner loop till j < 2*n - 2*i
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern21(int n) {
    // Upper Border - n stars
    for (int j = 0; j < n; j++) {
        // Printing * n times
        cout<<"* ";
    }

    cout<<endl;
    
    // Step 1: Focus on the number of rows: n rows
    for (int i = 0; i < n-2; i++) {
        // Step 2.1: Main Pattern - Printing 1 * followed by n - 2 spaces followed by another *
        cout<<"* ";
        for (int j = 0; j < n-2; j++) {
            // Step 3.1: Printing spaces n-2 times
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }

    // Lower Border - n stars
    for (int j = 0; j < n; j++) {
        // Printing * n times
        cout<<"* ";
    }
}

void pattern22(int n) {
    // Step 1: Focus on the number of rows: 2*n - 1 rows
    for (int i = 0; i < 2*n - 1; i++) {
        // Step 2: Focus on the number of columns: 2*n - 1 columns
        for (int j = 0; j < 2*n - 1; j++) {
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;

            // Step 3: Printing the minimum distance of 4 directions after subtracting it from n
            cout<<(n - min(min(top, bottom), min(left, right)))<<" ";           // As min takes only 2 args at a time
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern18(n);
}