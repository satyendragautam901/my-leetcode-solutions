class Solution {
public:
    bool hasAlternatingBits(int n) {
        // bitset is used to store binary representation of any number

        bitset<32> bi(n);

        int highest = log2(n); // highest set bits
        for(int i = 0; i<=highest; i++){
            cout<<bi[i]<<" "<<bi[i+1]<<endl;
            if(bi[i] == bi[i+1])
                return false;
        }
        return true;
    }
};