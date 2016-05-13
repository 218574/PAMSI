int bound(Node u, int n, int W)
{
    int j = 0, k = 0;
    int totweight = 0;
    int result = 0;

    if (u.weight >= W)
    {
        return 0;
    }
    else
    {
        result = u.profit;
        j = u.level + 1;
        totweight = u.weight;

        while ((j < n) && (totweight + T[j] <= W))
        {
            totweight = totweight + H[j];
            result = result + T[j];
            j++;
        }

        k = j;

        if (k < n)
        {
            result = result + (W - totweight) * H[k]/T[k];
        }
        return result;
    }
}