# include<stdio.h>

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time;

void display(time t){
    printf("The time is: %d:%d:%d\n", t.hours, t.minutes, t.seconds);
}

int timecmp(time t1, time t2){
    if (t1.hours>t2.hours)
    {
        return 1;
    }

    if (t1.hours<t2.hours)
    {
        return -1;
    }

    if (t1.minutes>t2.minutes)
    {
        return 1;
    }

    if (t1.minutes<t2.minutes)
    {
        return -1;
    }

    if (t1.seconds>t2.seconds)
    {
        return 1;
    }
    if (t1.seconds<t2.seconds)
    {
        return -1;
    }
    
    return 0;
}

int main()
{
    time t1 = {24,45,53};        
    time t2 = {24,05,23};  
    display(t1);      
    display(t2);   
    int a = timecmp(t1,t2);
    printf("Time comparision funtion returns: %d", a);   
    return 0;
}