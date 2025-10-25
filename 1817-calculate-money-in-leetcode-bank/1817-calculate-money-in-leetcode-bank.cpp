class Solution {
public:
    
    int totalMoney(int n) {
        if(n<=7){
            return n * (n+1)/2;
        }
        int fullWeeks = n / 7;
        int remainingDays = n % 7;
        
        // Sum of complete weeks
        int weekSum = 0;
        for (int week = 0; week < fullWeeks; week++) {
            weekSum += 28 + week * 7;  // 28 + 35 + 42 + ...
        }
        
        // Sum of remaining days
        int remainingSum = 0;
        for (int day = 1; day <= remainingDays; day++) {
            remainingSum += fullWeeks + day;
        }
        
        return weekSum + remainingSum;
    }
};