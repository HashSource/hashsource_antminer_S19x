int __fastcall sub_57874(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  size_t v4; // r3
  size_t v6; // r3
  size_t v12; // [sp+14h] [bp-18h] BYREF
  size_t n; // [sp+18h] [bp-14h]
  size_t v14; // [sp+1Ch] [bp-10h]
  unsigned int v15; // [sp+20h] [bp-Ch]
  size_t i; // [sp+24h] [bp-8h]

  n = sub_575AC((int)a3, a4, (int *)&v12);
  if ( !memcmp(a3, &a3[v12], n) )
  {
    v14 = 0;
    v15 = 0;
    while ( a2 - a4 >= v15 )
    {
      v4 = v14;
      if ( n >= v14 )
        v4 = n;
      for ( i = v4; i < a4 && a3[i] == *(unsigned __int8 *)(a1 + i + v15); ++i )
        ;
      if ( a4 > i )
      {
        v15 += i - n + 1;
        v14 = 0;
      }
      else
      {
        for ( i = n - 1; i + 1 > v14 && a3[i] == *(unsigned __int8 *)(a1 + i + v15); --i )
          ;
        if ( i + 1 < v14 + 1 )
          return a1 + v15;
        v15 += v12;
        v14 = a4 - v12;
      }
    }
  }
  else
  {
    v6 = n;
    if ( a4 - n >= n )
      v6 = a4 - n;
    v12 = v6 + 1;
    v15 = 0;
    while ( a2 - a4 >= v15 )
    {
      for ( i = n; i < a4 && a3[i] == *(unsigned __int8 *)(a1 + i + v15); ++i )
        ;
      if ( a4 > i )
      {
        v15 += i - n + 1;
      }
      else
      {
        for ( i = n - 1; i != -1 && a3[i] == *(unsigned __int8 *)(a1 + i + v15); --i )
          ;
        if ( i == -1 )
          return a1 + v15;
        v15 += v12;
      }
    }
  }
  return 0;
}
