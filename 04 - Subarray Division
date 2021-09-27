int birthday(vector<int> s, int d, int m) {
    
    int sum=0,count=0;
    for(int i=0;i<m;i++)
        sum+=s[i];
        
    
    int l=0,r=m-1;
    for(int i=m;i<s.size();i++)
    {
        cout<<s[i]<<" "<<s[i-m]<<endl;
        if(sum==d)
            {
                count++;                
            }
        
        sum = sum + s[i] - s[i-m];
        l++;
        r++;
    }
    if(sum == d )
        count++;
    return count;
}
