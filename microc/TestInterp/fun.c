  int fact(int i){
      if(i == 1){
          return 1;
      }else{
          return i * fact(i - 1);
      }
  }
  void main(){
      int n;
      n=4;
      print n;
      print fact(n);
  }