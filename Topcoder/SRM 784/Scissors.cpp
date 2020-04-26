class Scissors{
public:
  int openingTime(int N){
    int cur = 1;
    int i;
    for (i=1; ;i++){
      if (cur>N){
        i--;
        break;
      }
      cur*=2;
      
    }
    return i*10;
  }  
};