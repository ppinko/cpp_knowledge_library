/*
MIN HEAP IMPLEMENTATION
*/

#include <algorithm>
#include <iostream>
#include <vector>

struct Min_Heap {
    private:
        std::vector<int> mh {};

        int parent(int i){return (i-1) / 2;}

        int left_child(int i){return 2*i + 1;}

        int right_child(int i){return 2*i + 2;}

        void heapify_up(int i){
            if (i != 0 && mh[parent(i)] > mh[i]){
                swap(i, parent(i));
                heapify_up(parent(i));
            }           
        }

        void heapify_down(int i){
            int lefty = left_child(i);
            int righty = right_child(i);
            int minimal = mh[i];
            if (lefty >= size())
                int x = 0;
            else if (lefty == size() - 1){
                if(minimal > mh[lefty]){
                    swap(i, lefty);
                }
            }
            else {
                if (mh[lefty] <= mh[righty]){
                    if (mh[lefty] < minimal){
                        swap(i, lefty);
                        heapify_down(lefty);
                    }
                }
                else if (mh[righty] < minimal){
                        swap(i, righty);
                        heapify_down(righty);
                }
            }
        }

        void swap(int i, int j){
            int temp = mh[i];
            mh[i] = mh[j];
            mh[j] = temp;
        }

    public:
        unsigned int size(){return mh.size();}

        int top(){
            try {
                if (size() == 0)
                    throw 0;
                return mh[0];
            }
            catch (int &ex){
                std::cerr << "Index out of range\n";
            }
            return 0;
        }

        void push(int i){
            mh.push_back(i);
            int j = size() - 1;
            heapify_up(j);
        }

        void pop(){
            swap(0, size() - 1);
            mh.pop_back();
            heapify_down(0);
        }

        void display_vec(){
            std::cout << "[ ";
            for (int a : mh){
                std::cout << a << " ";
            }
            std::cout << "]\n";
        }

        void erase(int i){
            auto it = std::find(mh.begin(), mh.end(), i);
            int dist = it - mh.begin();
            swap(dist, size() - 1);
            mh.pop_back();
            heapify_down(dist);
        }
};

int main(){
    Min_Heap mh1 {};
    mh1.push(5);
    mh1.push(7);
    // mh1.display_vec();
    mh1.push(2);
    // mh1.display_vec();
    mh1.push(10);
    // mh1.display_vec();
    mh1.push(1);
    // mh1.display_vec();
    mh1.push(8);
    // mh1.display_vec();
    mh1.push(2);
    mh1.display_vec();
    // std::cout << mh1.top() << std::endl;
    
    // std::cout << "\n--------------\n";
    mh1.push(0);
    mh1.display_vec();
    // std::cout << mh1.top() << std::endl;

    std::cout << "\n--------------\n";
    mh1.pop();
    mh1.display_vec();
    // std::cout << mh1.top() << std::endl;

    std::cout << "\n--------------\n";
    mh1.erase(2);
    mh1.display_vec();
    // std::cout << mh1.top() << std::endl;

    return 0;
}