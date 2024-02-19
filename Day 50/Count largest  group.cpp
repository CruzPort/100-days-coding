class Solution {
public:
    
    int count(int n){
        int sum = 0;
        while (n) 
            sum += (n % 10), n /= 10;
        return sum;
    } 
    
    int countLargestGroup(int n) {
        int hash[40] = {0}, ans = 0, cnt = 0;
        for (int i = 1; i<= n; i++)  
            cnt = max(cnt, ++hash[count(i)]); 
        for (int i = 1; i < 40; i++) 
            if (hash[i] == cnt) 
                ans++;
        return ans;
    }
};
