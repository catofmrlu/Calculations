# include <iostream>

using namespace std;

// 使用冒泡算法排序

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
    int flag = -1;
   
   for(int j = 20 - 1; j > 0; j--)
   {
        for(int i = 0; i < j; i++)
        {
           
               
            if (input_data[i] > input_data[i + 1]) {
                /* code */
                flag = input_data[i];
                input_data[i] = input_data[i+1];
                input_data[i+1] = flag;
            }
        }

        if(flag == -1){
                cout << "the list is sorted!" << endl;
                return 0;
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