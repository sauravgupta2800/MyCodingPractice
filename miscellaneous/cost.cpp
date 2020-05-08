
    int P,S,T,H,x,cost=0;
    cin>>P>>S>>T>>H>>x;
    //P=6000,S=10,T=5,H=6500,x=7;
    if(S<x)
    {
        cout<<0;
        return 0;
    }
    if(x<S-T)
    {
        cout<<x*P<<endl;
        return 0;
    }
    if(x>S-T)
    {
        int diff=x-(S-T);
        x=diff;
        cost=(S-T)*P;
    }
    if(x<=T)
    {
        cost+=H*x;
    }
    cout<<cost<<endl;
}
