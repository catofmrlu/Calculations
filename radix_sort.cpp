# include "iostream"

using namespace std;

// 使用基数排序算法排序

int main(){

    
    int input_data[20] = 
    {32, 2, 43, 0, 43, 
    11, 48, 983, 56, 43, 
    11, 0, 87, 66, 42, 
    31, 22, 20, 98, 35};

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

        
        cout << endl << "input complete!" << endl;
        cout << "input result:";

        for(int i = 0; i < 20; i++)
            cout << input_data[i] << ", ";
            
        cout << endl;
    }
    
    // 算法部分
    int value_max = input_data[0];
    for (int i = 1; i < 20; i++){
        if (input_data[i] > value_max){
            value_max = input_data[i];
        }
    }
    cout << "value_max:" << value_max << endl;

    int d = 0;
    while (value_max > 0)
    {
        d++;
        value_max /= 10;
    }

    cout << "the max is:" << d << endl;

    int k, j, count[10], temp[20], radix = 1;
    for (int i = 0; i < d; i++)
    {
        for ( int i = 0; i < 10; i++)
            count[i] = 0;
        for (int i = 0; i < 20; i++)
        {
            k = input_data[i] / radix % 10;
            count[k]++; /* 计数器 */
        }

        for (j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j]; /* 计算count[j]及之前的所有的总值 */
        for (j = 19; j >= 0; j--)
        {
            k = (input_data[j] / radix) % 10;
            /* 由前面计算的总值从后面依次输入对应位置 */
            temp[count[k] - 1] = input_data[j]; 
            count[k]--;
        }

        for (j = 0; j < 20; j++)
            input_data[j] = temp[j];

        radix *= 10;
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