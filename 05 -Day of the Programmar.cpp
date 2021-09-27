string dayOfProgrammer(int year) {
    string date;
    
    
    if(year < 1918)
    {
        if(year%4 ==0)
            {
                date = "12.09.";
                date.append(to_string(year));
            }
        else {
                date = "13.09.";
                date.append(to_string(year));
        }
    }
    else if(year > 1918)
    {
        if(year%400 == 0 or (year%4==0 and year%100!=0))
        {
            date = "12.09.";
            date.append(to_string(year));
        }
        else {
                date = "13.09.";
                date.append(to_string(year));
        }
    }
    else {
                date = "26.09.";
                date.append(to_string(year));
    }
    
    return date;
}
