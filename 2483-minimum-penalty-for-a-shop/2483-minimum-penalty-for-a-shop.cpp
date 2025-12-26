class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int ans = 0;
        int besttime = 0;
        int penalty = 0;

        for(int i = 0;  i<n ; i++){
            if(customers[i] == 'Y')
               { ans--;}
            else{
                ans++;
            }
            if(ans < penalty){
                besttime = i+1;
                penalty = ans;
            }
        }
        return besttime;
    }
};