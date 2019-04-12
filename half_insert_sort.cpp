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
       cout << "flag:" << flag << endl;

       int low = 0, high = i - 1;

       while (low <= high) {
           /* code */
           int mid = (low + high) / 2;

           if (flag > input_data[mid])
               low = mid + 1;
           else
               high  = mid - 1;
            
            cout << "low and high:" << low << "---" << high <<endl;
       }
           
        for (int j = i - 1; j >= high + 1; j--)
        {
            /* code */
            input_data[j + 1] = input_data[j]; 
            cout << "the value of j:" << j;
        }

        input_data[high + 1] = flag;
           
   }
   

    // 输出部分
    {
        cout << "sort completed!" << endl;

        for(int i = 0; i < 20; i++)
            cout << input_data[i] << ",";
    }

    return 0;
}