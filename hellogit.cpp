#include <iostream>
#include <vector>

using namespace std;

int sqrt(int n){
    int target = n;
    int start = 0;
    int end = n;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(end >= start){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid > target){
            end = mid - 1;
        }
        if(mid*mid < target){
            ans = mid;
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int a;
    cout << "enter the number you want to find the square root of : " << endl;
    cin >> a;
    int answer = sqrt(a);
    double finalanswer = answer;
    int precision;
    cout << "enter the precision you want in the answer :  " << endl;
    cin >> precision;
    double step = 0.1;
    for(int i = 0; i < precision; i++){
        for(double j = finalanswer; j*j<=a; j+=step){
            finalanswer=j;
        }
        step = step / 10;
    }

    cout << "the square root of " << a << " is : "  << finalanswer;

}