int minDist(int a[], int n, int x, int y) {
    int min_dist = INT_MAX;
    int i=0;
    int prev;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x || a[i]==y)
        {
            prev=i;
            break;
        }
    }
    for(;i<n;i++)
    {
        if(a[i]==x || a[i]==y)
        {
            if(a[i]!=a[prev] && abs(i-prev)<min_dist)
            {
                min_dist = abs(i-prev);
                prev = i;
            }
            else
            {
                prev = i;
            }
        }
    }
    return min_dist;
}
