vector<int> find3Numbers(vector<int> arr, int N) {
    
    vector<int> v;
    v.push_back(INT_MAX);
    v.push_back(INT_MAX);
    for(int i=1;i<N;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]<v[1])
        {
            v.clear();
            v.push_back(arr[i-1]);
            v.push_back(arr[i]);
        }
        
        if(arr[i]>v[1])
        {
            v.push_back(arr[i]);
            return v;
            
        }
    }
    v.clear();
    return v;
    
