# include <iostream>

using namespace std;

// 使用shell排序算法排序

// 本算法还没有完全解决

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
        
        // cout << endl << "input complete!" << endl;
        // cout << "input result:";

        for(int i = 0; i < 20; i++)
            cout << input_data[i] << ", ";
            
        cout << endl;
    }
    
    // 算法部分
    cout << "into calculation area" << endl;

    try
    {
        for (int j = 20; j > 1; j--)
        {
            cout << "the value of j:" << j << endl;

            int temp;

            for (int i = j / 2 - 1; i >= 0; i--)
            {
                if (input_data[i] > input_data[2 * i - 1] && (2 * i - 1) < j)
                {
                    cout << "2 * i - 1 :" << 2 * i - 1<<endl;
                    temp = input_data[i];
                    input_data[i] = input_data[2 * i - 1];
                    input_data[2 * i - 1] = temp;
                }
                if (input_data[i] > input_data[2 * i] && 2 * i < j) 
                {
                    cout << "2 * i :" << 2 * i <<endl;

                    temp = input_data[i];
                    input_data[i] = input_data[2 * i];
                    input_data[2 * i] = temp;
                }
            }

            temp = input_data[0];
            input_data[0] = input_data[j];
            input_data[j] = temp;        
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "appear some error!" << endl;
    }

    // 输出部分
    {
        cout << "into output raea" << endl;

        cout << "sort completed!" << endl;
        cout << "sorted result:";

        for(int i = 0; i < 20; i++)
        {
            cout << input_data[i] << ",";
        }
    }

    return 0;
}