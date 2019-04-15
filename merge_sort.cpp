# include "iostream"

using namespace std;

// 使用shell排序算法排序

// 本算法还没有解决！！

void merge(int a[], int low, int m, int high)
{
        int i = low, j = m + 1, k =0;
        int temp[high - low + 1];
        cout << "high - low + 1:" << high - low + 1 << endl;

        while (i <= m && j < high)
        {
            if (a[i] <= a[j])
            {   
                temp[k++] = a[i++];

            }
            else
            {
                temp[k++] = a[j++];
            }
            
        }

        while (i <= m)
        {
            /* code */
            temp[k++] = a[i++];
        }

        while (j <= high)
        {
            /* code */
            temp[k++] = a[j++];
        }

        k = 0;
        for (int i = low; i <= high; i++)
        {
            a[i] = temp[k++];
        }

        // delete temp;
}

void mergeSort(int a[], int p, int q){
    if (p < q)
    {
        int r = (p + q) / 2;
        mergeSort(a, p, r);
        mergeSort(a, r + 1, q);
        merge(a, p, r, q);
        cout << "-----r:" << r << endl;
    }
}


int main(){

    int input_data[20];

    // 输入部分
    {
        // for(int i = 0; i < 20; i++)
        // {
        //     /* code */
        //     try
        //     {
        //         cout << "please input the value of  " << i << endl;
        //         cin >> input_data[i];
        //         /* code */
        //     }
        //     catch(const std::exception& e)
        //     {
        //         std::cerr << e.what() << '\n';
        //     }catch(io_errc e){
        //         cout << e;
        //     }
        // }

        int input_data[20] = 
        {32, 2, 43, 0, 43, 
        11, 48, 983, 56, 43, 
        11, 0, 87, 66, 42, 
        31, 22, 20, 98, 35};
        
        cout << endl << "input complete!" << endl;
        cout << "input result:";

        for(int i = 0; i < 20; i++)
            cout << input_data[i] << ", ";
            
        cout << endl;
    }
    
    // 算法部分
    try
    {
        mergeSort(input_data, 0, 19);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "出现异常！";
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