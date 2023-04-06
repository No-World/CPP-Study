#include<iostream> 
#include<algorithm> 
using namespace std; 

const int N= 1e5 + 10, INF= 1e9 + 10; 
int school[N], student[N], n, m, res; 

int main()
{ 
    cin >> m >> n; 
    for(int i=1; i<= m; i++) 
    	cin >> school[i]; 
    for(int i=1; i<= n; i++)
        cin >> student[i]; 
    school[m + 1] = INF; 
    sort(school + 1, school + m + 1); 
    for(int i = 1; i <= n; i++)
    { 
        int x = student[i]; 
        int l = 1, r = m + 1; 
        while(l < r)
        { 
            int mid=l + r >> 1; 
            if(school[mid] >= x)
                r = mid;
            else 
                l = mid + 1; 
        }
        if(l == 1)
            res += abs(x - school[l]);
        else
            res += min(abs(x - school[l]), abs(x - school[l - 1]));
    }
    cout << res;
    return 0;
}