class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle;
        double m_angle = (double)(minutes*6);
        double h_angle = (double)(hour*30) + (double)((double)minutes/2);
        if(hour==12) h_angle -= (double)(hour*30);
        angle = h_angle - m_angle;
        if(angle<0) angle = -angle;
        if(angle>180) angle = 360 - angle;
        return angle;
    }
};
