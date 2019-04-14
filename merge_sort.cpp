# include "iostream"

using namespace std;

// 使用shell排序算法排序

int main(){
    int input_data[20];

    // 输入部分
    {
        for(int i = 0; i < 20; i++)
        {
            /* code */
            try
            {
                cout << "please input the value of  " << i << endl;
                cin >> input_data[i];
                /* code */
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }catch(io_errc e){
                cout << e;
            }
        }
        
        cout << endl << "input complete!" << endl;
        cout << "input result:";

        for(int i = 0; i < 20; i++)
            cout << input_data[i] << ", ";
            
        cout << endl;
    }
    
    // 算法部分
    void merge(int a[], int b[], int low, int m, int high)
    {
        int i = low, j = m + 1, k =low;

        while (i < = m && j < high)
        {
            if (a[i] <= a[j])
            {   
                b[k++] = a[i++];

            }
            else
            {
                b[k++] = a[j++];
            }
            
        }

        while (i <= m)
        {
            /* code */
            b[k++] = a[i++];
        }

        while (j <= high)
        {
            /* code */
            b[k++] = a[j++];
        }
    }


    // 输出部分
    {
        cout << "sort completed!" << endl;
        cout << "sorted result:";

        for(int i = 0; i < 20; i++)
        {
            cout << input_data[i] << ",";
        }
    }

    return 0;
}