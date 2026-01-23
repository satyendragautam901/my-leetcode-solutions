/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int result = guess(mid);

            if(result == 0){
                return mid; // You found the number
            }
            else if(result == 1){
                // Your guess is smaller, go to right half
                low = mid + 1;
            }
            else{
                // Your guess is larger, go to left half
                high = mid - 1;
            }
        }

        return -1; // This line is just to satisfy the compiler, theoretically never reached
    }
};