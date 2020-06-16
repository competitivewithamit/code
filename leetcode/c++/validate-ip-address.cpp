class Solution {
    bool validateIPv4(string s)
    {
        s.push_back('.');
        string t="";
        for(auto a: s)
        {
            if (a=='.')
            {
                if(t==""||t.length()>=4||t.compare("256")>=0||(t.length()!=1&&t[0]=='0'))
                    return false;
                else
                    t="";
            }
            else
                {
                if(a<'0'||a>'9')
                    return false;
                t.push_back(a);
            }
        }
        return true;
    }
    bool validateIPv6(string s)
    {
        s.push_back(':');
        string t="";
        for(auto a: s)
        {
            if (a==':')
            {
                if(t==""||t.length()>=5)
                    return false;
                else
                    t="";
            }
            else
            {
                if((a>='a'&&a<='f')||(a>='A'&&a<='F')||(a>='0'&&a<='9'))
                    t.push_back(a);
                else
                     return false;
                
            }
        }
        return true;
    }
public:
    string validIPAddress(string IP) {
        int cd=0,cc=0;
        for(auto& a:IP)
        {
            if(a=='.')
                cd++;
            else if(a==':')
                cc++;
        }
        if(cd == 3&&validateIPv4(IP))
            return "IPv4";
        else if(cc == 7&&validateIPv6(IP))
            return "IPv6";
        else
            return "Neither";
        
        return "Neither";
    }
};
