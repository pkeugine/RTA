class Solution {
public: 
    /* 
    
    Time Complexity: O(n) 
    Space Complexity: O(1)
    
    */
    vector<int> sortedSquares(vector<int>& A) { 
        
        int n = A.size();  
        int highestSquareIdx = n - 1; 
        int left = 0, right = n - 1; 
        vector<int> squares(n); 
        
        while(left<=right){ 
        
            int leftSquare = A[left]*A[left]; 
            int rightSquare = A[right]*A[right]; 
            
            if(leftSquare>rightSquare){ 
            
                squares[highestSquareIdx] = leftSquare; 
                highestSquareIdx--; 
                left++;
            } 
            
            else{ 
            
                squares[highestSquareIdx] = rightSquare; 
                highestSquareIdx--; 
                right--;
            
            } 
            
        
        } 
        
        return squares;
        
        
    }
}; 


auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
