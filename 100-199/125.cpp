class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.length()-1;
        int left=0;
        while(right>left){
            
            //0-48; 9-57 
            if(s[left]>47&&s[left]<58){
                if(s[left]==s[right]){
                    left++;
                    right--;
                }else if((s[right]>96&&s[right]<123)||(s[right]>64&&s[right]<91)||(s[right]>47&&s[right]<58)){
                    return false;
                }else{
                    right--;
                }
            //A-65; Z-90; a-97; z-122
            }else if((s[left]>96&&s[left]<123)||(s[left]>64&&s[left]<91)){
                if((s[right]>96&&s[right]<123)||(s[right]>64&&s[right]<91)){
                    if(s[left]==s[right]||s[left]-s[right]==32||s[left]-s[right]==-32){
                        left++;
                        right--;
                    }else{
                        return false;
                    }
                }else if((s[right]>96&&s[right]<123)||(s[right]>64&&s[right]<91)||(s[right]>47&&s[right]<58)){
                        return false;
                }else{
                    right--;
                }               
            }else{
                left++;
                if((s[right]<65||s[right]>122||(s[right]>90&&s[right]<97))&&(s[right]<48||s[right]>57)){
                    right--;
                }
            }
            
        }
        return true;
    }
};
