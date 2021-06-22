 #include<bits/stdc++.h>

using namespace std;
int main()
{
    int prev_int_num;
    float x1,y1,x2,y2,x0,y0;
    printf("Enter 1st point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter 2nd point: ");
    scanf("%f %f",&x2,&y2);
    float m = (y2-y1)/(x2-x1);
    printf("(X,Y) = (%.0f,%.0f)\n",x1,y1);
    while(1){
        if(x1==x2 || y1==y2)break;
        if(m>0 && m<=1){
            x1 = x1 + 1;
            y0 = y1 + m;
            prev_int_num = y0;
            float temp = y0-(float)prev_int_num;
            y1 = y0;
            if(temp>=0.5){
                y0 = ceil(y0);
            }else{
                y0 = floor(y0);
            }
            printf("(X,Y) = (%.0f,%.0f)\n",x1,y0);
        }
        else if(m>=-1 && m<=0){
            x1 = x1 - 1;
            y0 = y1 - m;
            prev_int_num = y0;
            float temp = y0-(float)prev_int_num;
            y1 = y0;
            if(temp>=0.5){
                y0 = ceil(y0);
            }else{
                y0 = floor(y0);
            }
            printf("(X,Y) = (%.0f,%.0f)\n",x1,y0);
        }
        else if(m>1){
            x0 = x1 + (1/m);
            y1 = y1 + 1;
            prev_int_num = x0;
            float temp = x0-(float)prev_int_num;
            x1 = x0;
            if(temp>=0.5){
                x0 = ceil(x0);
            }else{
                x0 = floor(x0);
            }
            printf("(X,Y) = (%.0f,%.0f)\n",x0,y1);
        }
        else{
            x0 = x1 - (1/m);
            y1 = y1 - 1;
            prev_int_num = x0;
            float temp = x0-(float)prev_int_num;
            x1 = x0;
            if(temp>=0.5){
                x0 = ceil(x0);
            }else{
                x0 = floor(x0);
            }
            printf("(X,Y) = (%.0f,%.0f)\n",x0,y1);
        }
    }

    return 0;
}
