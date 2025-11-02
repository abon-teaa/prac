class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if( strs.size()>=1 && strs.size()<=200)
      {
        string a="";
         if(strs.size()==1)
         { return strs[0];}
            if(strs[0].length()>=0 && strs[0].length()<=200)
            {
                for(int j=0; j< strs[0].length(); j++)
                {
                string p= strs[0], q= strs[1];
                if(p[j]== q[j])
                {
                    a+=p[j];
                }
                else if( a=="")
                {
                    return "";
                }
                else if(p[j]!=q[j])
                {
                    break;
                }
                }
                if(strs.size()>1){for(int i=2; i<strs.size();i++)
                {
                if(strs[i].length()>=0 && strs[i].length()<=200)
                
               {for(int k=0; k < a.length(); k++)
               {
                 string x = strs[i];
                 if(a.empty())
                 {
                    return "";
                 }
                 else if (x[k]!=a[k])
                 {
                    a=a.substr(0, k);
                    break;
                 }
               }} }
            return a;}
        }
      } return ""; 
    }
};