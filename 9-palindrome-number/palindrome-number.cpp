class Solution {
public:
    bool isPalindrome(int x) {
     if(x>=0 && x<2147483647)   
     { int a=0,size = 0;
       int c = x, d=x;
       while ( c!= 0)
       {
        size++;
        c= c/10;
       }
       for(int i=0;i<size;i++)
      {
        int b= (d%10);
        d = d/10;
        if(a<214748364)
       { a = (a*10) + b;}
       else {return false;}
      }
      if( a == x)
      {return true;}
      else {return false;}  
    }
    else{return false;}
    }
};