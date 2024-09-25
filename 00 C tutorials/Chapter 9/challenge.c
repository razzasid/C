# include<stdio.h>

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time;

typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d, time t ){
    printf("The timestamp is: %d-%d-%d %d:%d:%d\n",d.date,d.month,d.year, t.hours, t.minutes, t.seconds);
}


int timestampcmp(date d1, date d2, time t1, time t2){
    // Make decision on the basis of Year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }

    // Make decision on the basis of Month comparison
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month) {
        return -1;
    }

    // Make decision on the basis of Date comparison
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date) {
        return -1;
    }
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
    time t1 = {24,45,23};        
    time t2 = {24,45,23};  
    
    date d1 = {5, 11, 31};
    date d2 = {5, 11, 31};
    
    display(d1,t1);      
    display(d2,t2);   
    int a = timestampcmp(d1,d2,t1,t2);
    printf("Time comparision funtion returns: %d", a);   
    return 0;
}