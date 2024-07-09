template<typename T>
class Vector {
T *arr;
int cs;
int ms;
public :
    Vector(int max_size=1  ){
        cs=0;
         ms=max_size ;
        arr=new T[ms];
    }
T front (){
    return arr[0];
}
int size (){
    return cs;
}
T back (){
    return arr[cs-1];
}
int capacity ()const{
    return ms;
}
int at (const int i){
    return arr[i];
}
void push_back (const T d){
    if (cs==ms){
            T *oldArr = arr;
            ms=2*ms;
            arr = new T[ms];
            for(int i = 0 ; i<cs ;i++){
                arr[ i ] = oldArr[ i ];
            }
            delete [] oldArr;
    }
    arr[cs]=d;
    cs++;
}
void pop_back (int d){
    if(cs>=0){
    cs--;
    }
}
bool isEmpty()const{
    return ( cs==0 );
}
T  operator[](const int i)const{
return arr[i];
}
};