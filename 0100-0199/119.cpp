class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(rowIndex+1,1);
        if (rowIndex<2)
            return r;
        int n1,n2;
        for(int i=2;i<=rowIndex;i++){
            n1=i;
            for(int j=1;j<=i/2;j++){
                n2=r[j+1]+r[j];
                r[j]=n1;
                n1=n2;
            }
            if(i%2==1)
                r[i/2+1]=r[i/2];
        }
        for(int i=rowIndex-1;i>rowIndex/2;i--){
            r[i]=r[rowIndex-i];
        }
        return r;
        
    }
};
