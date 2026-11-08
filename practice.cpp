// // MASTER FOR LOOP
// // STAR PATTERNS

// #include<iostream>
// #include<vector>
// using namespace std;

// void pattern1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern2(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern3(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern4(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern5(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern6(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern7(int n){
//     int start = 1;
//     for(int i=0; i<n; i++){
//         if(i%2 == 0){
//             start = 1;
//         }else {start = 0;}
//         for(int j=0; j<i+1; j++){
//             cout<<start;
//             start = 1-start;
//         }
//         cout<<endl;
//     }
// }

// void pattern8(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         char ch='A';
//         for(int j=0; j<i+1; j++){
//             cout<<ch;
//             ch++;
//         }
//         ch = ch-2;
//         for(int j=0; j<i; j++){
//             cout<<ch;
//             ch--;
//         }
//         cout<<endl;
//     }
// }

// void pattern9(int n){
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for(int j=0; j<n-i-1; j++){
//             ch++;
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// void pattern10(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<2*(n-i-1); j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-2; i>=0; i--){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<2*(n-i-1); j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void pattern11(int n){
//     int size = 2*n-1;
//     for(int i=0; i<size; i++){
//         int val = n;
//         for(int j=0; j<size; j++){
//             cout<<val<<" ";
//             if(j < i && j < size-i-1){
//                 val--;
//             }
//             else if(j>= size-i-1 && j >= i){
//                 val++;
//             }
//         }
//         cout<<endl;
//     }
// }

// // Extra Patterns

// void pattern12(int n){
//     int size = 2*n+1;
//     for(int i=0; i<size; i++){
//         string ch = "-";
//         for(int j=0; j<size; j++){
//             cout<<ch<<" ";
//             if(j < i && j<size-i-1){
//                 ch = "#";
//             }
//             else if(j >= i && j>= size-i-1){
//                 ch = "-";
//             }
//         }
//         cout<<endl;
//     }
// }

// void pattern13(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == 0 || j == 0 || i == n-1 || j == n-1){
//                 if((i+j)%2 == 0){
//                     cout<<"*";
//                 }
//                 else{ cout<<".";}
//             }
//             else{ cout<<" ";}
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>> n;
//     pattern13(n);
//     return 0;
// }



// Basic Math Problems : 


// Armstrong number
// #include<iostream>
// #include <vector>
// using namespace std;

// bool isArmstrong(int n){
//     int size = 0, sum = 0;
//     int org = n;
//     while(n > 0){
//         n = n/10;
//         size++;
//     }
//     n = org;
//     while(n>0){
//         int rem = n%10;
//         int prod = 1;
//         for(int i=0; i<size; i++){
//             prod *= rem;
//         }
//         sum += prod;
//         n = n/10;
//     }
//     return sum == org;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >>n;
//     if(isArmstrong(n)){
//         cout<<n<<" is an armstrong number."<<endl;
//     }
//     else{
//         cout<<n<<" is not an armstrong number."<<endl;
//     }
//     return 0;
// }



// Prime Number 

// #include<iostream>
// using namespace std;

// int primeUptoN(int n){
//     if(n<2){
//         return 0;
//     }
//     int count = 1;
//     for(int i=3; i<=n; i++){
//         bool isPrime = true;
//         for(int j=2; j*j<=i; j++){
//             if(i%j == 0){
//                 isPrime = false;
//                 break;
//             }
//         }
//         if(isPrime){count++;}
//     }
//     return count;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >>n;
//     int count = primeUptoN(n);
//     cout<<count<<" prime number are present upto "<<n<<endl;
//     return 0;
// }


// LCM of two numbers 

// #include<iostream>
// using namespace std;

// // int lcm(int x, int y){
// //     int ans = x*y;
// //     int maxNum = max(x,y);

// //     for(int i=x*y; i>=maxNum; i--){
// //         if(i%x == 0 && i%y == 0){
// //             ans = i;
// //         }
// //     }
// //     return ans;
// // }

// int lcm(int x, int y){
//     int maxNum = max(x, y);
//     int step = maxNum;
//     while(true){
//         if(maxNum % x == 0 && maxNum % y == 0){
//             return maxNum;
//         }
//         maxNum += step;
//     }
// }

// int main(){
//     int a,b;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<"Enter the value of b : ";
//     cin>>b;
//     int ans = lcm(a,b);
//     cout<<"The LCM of "<<a<<" and "<<b<<" is : "<<ans<<endl;
//     return 0;
// }



// Basic Hashing Problem


// Highest Occuring Element in an Array

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int mostFrequentElement(vector<int> &arr){
//     unordered_map<int, int> freq;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         freq[arr[i]]++;
//     }
//     int ans = arr[0];
//     int maxFreq = 0;
//     for(auto it: freq){
//         if(it.second > maxFreq || (it.second == maxFreq && it.first<ans)){
//             maxFreq = it.second;
//             ans = it.first;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 2, 4, 2, 5};
//     cout<<"The most frequent element in the array : "<<mostFrequentElement(arr)<<endl;
//     return 0;
// }



// Second Highest Occuring Element in Array

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int secondMostFrequentElement(vector<int> &arr){
//     unordered_map<int, int> freq;
//     for(int num: arr){
//         freq[num]++;
//     }
//     int maxFreq = 0;
//     int secondFreq = 0;
//     int maxAns = -1;
//     int secondAns = -1;
//     for(auto it: freq){
//         if(it.second > maxFreq){
//             secondFreq = maxFreq;
//             secondAns = maxAns;
//             maxFreq = it.second;
//             maxAns = it.first;
//         }
//         else if(it.second == maxFreq){
//             if(secondFreq < maxFreq || it.first < secondAns){
//                 secondFreq = it.second;
//                 secondAns = it.first;
//             }
//         }
//         else if(it.second > secondFreq){
//             secondFreq = it.second;
//             secondAns = it.first;
//         }
//         else if(it.second == secondFreq){
//             if(secondAns == -1 || it.first < secondAns){
//                 secondAns = it.first;
//             }
//         }
//     }
//     return secondAns;
// }

// int main(){
    // vector<int> arr = {1, 2, 3, 4, 2, 4, 2, 5};
    // cout<<"The second most frequent element in the array : "<<secondMostFrequentElement(arr)<<endl;
    // return 0;
// }



// Sum of Highest and Lowest Frequency

#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int sumHighestAndLowestFrequency(vector<int> &nums){
    unordered_map<int,int> freq;
    int n = nums.size();
    for(int num: nums){
        freq[num]++;
    }
    int minFreq = n, maxFreq = 0;
    int minAns = -1, maxAns = -1;
    for(auto it: freq){
        int element = it.first;
        int count = it.second;
        if(count > maxFreq){
            maxFreq = count;
            maxAns = element;
        } 
        else if(count == maxFreq && element < maxFreq){
            maxAns = element;
        }
        if(count < minFreq){
            minFreq = count;
            minAns = element;
        }
        else if(count == minFreq && element < minAns){
            minAns = element;
        }
    }
    return maxAns + minAns;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 2, 4, 2, 5, 1};
    cout<<"The sum of highest and lowest frequency elements are : "<<sumHighestAndLowestFrequency(arr)<<endl;
    return 0;
}