# include "iostream"

using namespace std;

// 使用直接插入算法排序

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
   for(int i = 1; i < 20; i++)
   {
       flag = input_data[i];

       int j = i - 1;

       while (flag < input_data[j] && j > -1) {
           /* code */
           input_data[j + 1] = input_data[j];
           j--;
       }

       input_data[j + 1] = flag;

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