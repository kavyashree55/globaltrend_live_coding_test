#include<iostream>
#include<vector>
using namespace std;

int knapsack(int cap,vector<int> &weights, vector<int> &values ){
    int num_items=weights.size();
    vector<vector<int>> dp(num_items+1,vector<int> (cap+1,0));
    for(int i=1;i<=num_items;++i){
        for(int j=1;j<=cap;++j){
            if(weights[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weights[i-1]+values[i-1]]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[num_items][cap];
}


int main(){
    vector<int> weights ={1,2,3};
    vector<int> values={10,15,14};
    int cap=6;
    int max_value=knapsack(cap,weights,values);
    cout<<"Maximum value in the knapsack:" << max_value;
    return 0; 

}
