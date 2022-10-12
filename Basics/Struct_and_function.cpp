struct rectangle
{
    int len;
    int width;

};

void initialize(struct rectangle *r,int l,int b) //r = pointer to rectangle that fills l&b
{
    r->len =l;
    r->width =b;

}

int area(struct rectangle r)    //has its own value of rectangle
{
    return r.len * r.width;
}

void change_len(struct rectangle *r,int l)
{
        r->len =l;

}

int main()   //calling functions
{
    struct rectangle r;
    
    initialize (&r, 10, 5);   //initialize //call by address
    
    area(r);                               //call by value
    change_len(&r,20);//getting back adderss
}