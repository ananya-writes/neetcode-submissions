class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=sumofsquares(n);
            if(n==1){
                return true;
            }
        }
        return false;
    }
    private:
    int sumofsquares(int n){

        int q = n;
        int ssq = 0;
        while(q>0){
            int dig = q%10;
            dig = dig*dig;
            ssq+=dig;
            q/=10;
        }
        return ssq;
    }
};

