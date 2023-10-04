int romanToInteger(string str){
int n = str.size();
        int ans=0,prev=0;
        
        for(int i=n-1;i>=0;i--){
            int temp=0;
            if(str[i]=='I')
                temp = 1;
            else if(str[i]=='V')
                temp = 5;
            else if(str[i]=='X')
                temp = 10;
            else if(str[i]=='L')
                temp = 50;
            else if(str[i]=='C')
                temp = 100;
            else if(str[i]=='D')
                temp = 500;
            else if(str[i]=='M')
                temp = 1000;
            
            if(temp < prev)
                ans-=temp;
            else 
                ans+=temp;
                
            prev = temp;
            
        }
        
        return ans;
}
