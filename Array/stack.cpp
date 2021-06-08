void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue is overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }
int main()
{
    int arr[n];
    
}