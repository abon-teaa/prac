class Solution {
public:
    int romanToInt(string s) {
        //ee
        if(s.length()>=1 && s.length()<= 15)
        {
            int a=0,b=0,c=0,d=0,e=0,x=0,y=0,z=0;
            char temp [17];
            strcpy(temp, s.c_str());
            for(int i=0; i<s.length(); i++)
            {
                if(temp[i]=='I')
                {
                    if(temp[i+1] == 'V')
                    {
                        if(a==0){a=1;}
                        a=a*4;
                        i++;
                        continue;
                    }
                    else if(temp[i+1] == 'X')
                    {
                        if(a==0){a=1;}
                        a=a*9;
                        i++;
                        continue;
                    }
                    else
                    {
                        a++;
                    }
                }
                else if(temp[i]=='V')
                {
                    b++;
                }
                else if(temp[i]=='X')
                {
                    if(temp[i+1]== 'C')
                    {
                        if(c==0){c=1;}
                        c=c*9;
                        i++;
                        continue;
                    }
                    if(temp[i+1] == 'L')
                    {
                        if(c==0){c=1;}
                        c=c*4;
                        i++;
                        continue;
                    }
                    else
                    {
                        c++;
                    }
                }
                else if(temp[i]=='L')
                {
                    d++;
                }
                else if(temp[i]=='C')
                {
                    if(temp[i+1]== 'M')
                    {
                        if(e==0){e=1;}
                        e=e*9;
                        i++;
                        continue;
                    }
                    else if(temp[i+1]== 'D')
                    {
                        if(e==0){e=1;}
                        e=e*4;
                        i++;
                        continue;
                    }
                    else
                    {
                        e++;
                    }
                }
                else if(temp[i]=='D')
                {
                    x++;
                }
                else if(temp[i]=='M')
                {
                    y++;
                }
            }
            z = (1*a) + (5*b) + (10*c) + (50*d) + (100*e) + (500*x) + (1000*y);
           return z; 
        }
        return 0;
    }

};