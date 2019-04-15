# include "iostream"

using namespace std;

// 使用shell排序算法排序

// 本算法还没有完全完成！！

int main(){
    int input_data[20];

    // 输入部分
    {
        int input_data[20] = 
        {32, 2, 43, 0, 43, 
        11, 48, 983, 56, 43, 
        11, 0, 87, 66, 42, 
        31, 22, 20, 98, 35};

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
   int i, j, d, temp;

    d = 20 / 2;

    while (d > 0){
        for (int i = d; i < 20; i++)
        {
            j = i - d;

            while (j >= 0)
            {
                if (input_data[j] > input_data[j + d])
                {
                    temp = input_data[j];
                    input_data[j] = input_data[i];
                    input_data[i] = temp;

                    j = j -d;
                }
                else
                    j = -1;
                
                if (d =1)
                {
                    cout << "i:" << i << endl;
                    /* code */
                }
                
            }
        }

        d = d / 2;
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