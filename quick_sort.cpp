# include <iostream>

using namespace std;

// 使用简单选择算法排序

// 算法实现部分
void quickSort(int a[], int left, int right){
    int i = left, j = right, temp;

    if (left < right){
        temp = a[left];

        while (i != j){

            while (j > i && a[j] > temp)
            {
                j--;
                /* code */
            }

            if (i < j)
            {
                /* code */
                a[i++] = a[j];
            }

            while (i < j && a[i] < temp)
            {
                /* code */
                i++;
            }

            if (i < j)
            {
                /* code */
                a[j--] = a[i];
            }

        }

        a[i] = temp;

        quickSort(a, left, i -1);
        quickSort(a, i +1, right);
            
    }
    
}

// 主程序
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
   quickSort(input_data, 0, 19);

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
