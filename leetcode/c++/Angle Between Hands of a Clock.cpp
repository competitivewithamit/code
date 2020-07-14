class Solution {
public:
    double angleClock(int h, int m) {
        double hd=m*0.5;
        double md=m*6;
        double ex=h*30;
        if(h==12)
            ex=0;
        double ans=abs(md-hd-ex);
        
        return min(ans,360-ans);
    }
};
