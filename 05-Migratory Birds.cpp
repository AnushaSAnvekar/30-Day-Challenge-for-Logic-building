int migratoryBirds(vector<int> arr) {
    
    sort(arr.begin(),arr.end());
    int maxCount=0,count=1;
    int maxID;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else 
        {
            if (count > maxCount)
            {
                maxCount = count;
                maxID = arr[i-1];
            }
            count=1;
        }
    }
    return maxID;
}
