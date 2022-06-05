void main(int ecp){
  match ecp with
  | 1 -> {print 'd' : ecp;break;}
  | 2 -> {print 'd' : ecp+1;break;}
  | _ -> print 'd' : 0;
  print 'd' : ecp;
}