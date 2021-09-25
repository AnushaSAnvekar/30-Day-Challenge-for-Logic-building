vector<int> breakingRecords(vector<int> scores) {
    int minS,maxS,minCount=0,maxCount=0;
    minS = scores[0];
    maxS = scores[0];
    
    for(int i=1;i<scores.size();i++)
    {
        int s = scores[i];
        
        if(s<minS)
        {
            minS = s;
            minCount++;
        }
        else if(s>maxS)
        {
            maxS = s;
            maxCount++;
        }
    }
    vector<int> count;
    count.push_back(maxCount);
    count.push_back(minCount);
    return count;
    
}
