# include <iostream>

using namespace std;

// 使用简单选择算法排序

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
    int flag;
    
    for(int i = 0; i < 19; i++)
    {
        flag = i;
        for(int j = i +1; j < 20; j++)
        {
            /* code */
            if (input_data[j] < input_data[flag]) {
                /* code */
                flag = j;
            }
        }

        //交换部分 
        if (flag != i) {
            int p = input_data[i];
            input_data[i] = input_data[flag];
            input_data[flag] = p;

            cout << "the sort of " << i + 1 << ":";
            for(int i = 0; i < 20; i++)
                cout << input_data[i] << ", ";
            
            cout << "swap:" << input_data[i] <<  "<-->" << input_data[flag] << endl;
        }
    }

    // 输出部分
    {
        cout << "sort completed!" << endl;

        for(int i = 0; i < 20; i++)
        {
            cout << "the value of " << i << ": "<< input_data[i] << endl;
        }
    }
    return 0;
}