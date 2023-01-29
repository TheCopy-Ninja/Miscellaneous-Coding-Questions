// Create Program To Sort Dates in Ascending Order >>>

#include<iostream>

using namespace std;

struct Dates
{
    int month;
    int year;
};
void Sort_Dates(Dates arr[], int n)
{
    // Sorting Year in Ascending;
    for (int i = 1; i <=n; i++)
    {   
        int TempYear;
        int TempMonth;
        for (int j = i+1; j <=n;j++)
        {
           if (arr[i].year>arr[j].year)
           {
                TempYear=arr[i].year; TempMonth=arr[i].month;
                arr[i].year=arr[j].year; arr[i].month=arr[j].month;
                arr[j].year=TempYear; arr[j].month=TempMonth;
           }
           else if (arr[i].year==arr[j].year)
           {
            // If Years are Same then Sorting Month in Ascending;
             for (int i = 1; i <=n; i++)
            {   
                int TempYear;
                int TempMonth;
                for (int j = i+1; j <=n;j++)
                {
                if (arr[i].month>arr[j].month)
                    {
                         TempMonth=arr[i].month;
                         arr[i].month=arr[j].month;
                         arr[j].month=TempMonth;
                    }
                }   
            }
           }   
        }   
    }
    
    for (int i = 1; i<=n ; i++)
    {
        cout<< arr[i].month << "-";
        cout<< arr[i].year;
        cout<<endl;
    }
}

int main()
{   
    int n;
    cout << "Enter The Number of Dates: ";
    cin >> n;

    struct Dates arr[n]; //Initializing Array to Structure

    for (int i = 1; i<=n ; i++)
    {
        cout<< "Enter The Date " << i << " in MM/YYYY Format:";
        cin>> arr[i].month;cin>> arr[i].year;
    }
    Sort_Dates( arr, n);
    
    return 0;
}