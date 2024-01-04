class GospersHack
{
public:
    int Implementation(int k, int n);
};

int GospersHack::Implementation(int k, int n)
{
    int set = (1 << k) - 1;
    int limit = 1 << n;
    while (set < limit)
    {
        // TODO stuff(set);
        int c = set & -set;
        int r = set + c;
        set = (((r ^ set) >> 2) / c) | r;
    }
}
