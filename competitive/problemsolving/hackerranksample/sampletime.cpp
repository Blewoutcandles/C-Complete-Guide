#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;

int main(){
    struct timeval start, end;
    gettimeofday(&start, NULL);
    ios_base:: sync_with_stdio(false);
    //mention the function name here
    gettimeofday(&end, NULL);
    double totalTime;
    totalTime = (end.tv_sec - start.tv_sec)*1e6;
    totalTime = (totalTime +(end.tv_sec - start.tv_sec)) * 1e-6;
    cout << "RUNTIME : " << totalTime*1000 << "ms" << endl;
    return 0;
}