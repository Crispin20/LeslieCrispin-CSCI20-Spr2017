// Leslie Crispin
//4-11-17
/*****Create a class called ArrayTools which will store a single integer array and each of the following functions.  Use my main function to run your class.

    Print – print the array values on the screen in order
    Find_min – search the array between two sizes to return the location of the minimum value in that part of the array
    Find_max –
    Find_sum – return the sum of all values in the array
    Num_even/odd – count the number of even and odd numbers in the array
    
    
    Search – search the array for a specified value and return the location if the value is found and -1 otherwise
    Is_sorted – check to see of the array is sorted in ascending order.
***/
#include<iostream>
using namespace std; 

class ArrayTools{
    public:
    void SetPrint( int size1, int size2);
   
    void SetFind_min(int size1, int size2){
   if(size1 < size2){
    size1 = single_;    
}
    else {
        size2= single_;
    }
}
    void SetFind_max(int size1, int size2);
    void SetFind_sum(int SIZE);
    void SetNum_evenOrOdd();
    void SetSearch();
    void SetIs_sorted();
    
    int GetPrint() const;
    int GetFind_min() const;
    int GetFind_max() const;
    int GetFind_sum() const;
    int GetNum_evenOrOdds() const;
    int GetSearch() const;
    int GetIs_sorted() const;

    private:
    int single_ = 0;
};

void ArrayTools::SetPrint(int size1, int size2 ){
    ///NEED A FOR
    
}



void ArrayTools::SetFind_max(int size1, int size2){
      if(size1 > size2){
    size1 = single_;    
        
    }
    else{
    size2 = single_;
    }
}
void ArrayTools::SetFind_sum(int SIZE){
    int sum = 0;
    int num = 0;
     while (SIZE >= 0) {             
             
        sum = sum + num;
        
       }
}
    

    

    


int main(){
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin >> myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}   
