int __fastcall sub_57028(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  size_t v4; // r3
  size_t v6; // r3
  _DWORD v12[256]; // [sp+14h] [bp-420h]
  unsigned int v13; // [sp+414h] [bp-20h] BYREF
  int v14; // [sp+418h] [bp-1Ch]
  size_t n; // [sp+41Ch] [bp-18h]
  unsigned int v16; // [sp+420h] [bp-14h]
  size_t v17; // [sp+424h] [bp-10h]
  unsigned int v18; // [sp+428h] [bp-Ch]
  size_t i; // [sp+42Ch] [bp-8h]

  n = sub_56A28((int)a3, a4, (int *)&v13);
  for ( i = 0; i <= 0xFF; ++i )
    v12[i] = a4;
  for ( i = 0; i < a4; ++i )
    v12[a3[i]] = a4 - i - 1;
  if ( !memcmp(a3, &a3[v13], n) )
  {
    v17 = 0;
    v18 = 0;
    while ( v18 <= a2 - a4 )
    {
      v16 = v12[*(unsigned __int8 *)(a1 + v18 + a4 - 1)];
      if ( v16 )
      {
        if ( v17 && v16 < v13 )
          v16 = a4 - v13;
        v17 = 0;
        v18 += v16;
      }
      else
      {
        v4 = v17;
        if ( n >= v17 )
          v4 = n;
        for ( i = v4; i < a4 - 1 && a3[i] == *(unsigned __int8 *)(a1 + i + v18); ++i )
          ;
        if ( i < a4 - 1 )
        {
          v18 += i - n + 1;
          v17 = 0;
        }
        else
        {
          for ( i = n - 1; v17 < i + 1 && a3[i] == *(unsigned __int8 *)(a1 + i + v18); --i )
            ;
          if ( i + 1 < v17 + 1 )
            return a1 + v18;
          v18 += v13;
          v17 = a4 - v13;
        }
      }
    }
  }
  else
  {
    v6 = n;
    if ( a4 - n >= n )
      v6 = a4 - n;
    v13 = v6 + 1;
    v18 = 0;
    while ( v18 <= a2 - a4 )
    {
      v14 = v12[*(unsigned __int8 *)(a1 + v18 + a4 - 1)];
      if ( v14 )
      {
        v18 += v14;
      }
      else
      {
        for ( i = n; i < a4 - 1 && a3[i] == *(unsigned __int8 *)(a1 + i + v18); ++i )
          ;
        if ( i < a4 - 1 )
        {
          v18 += i - n + 1;
        }
        else
        {
          for ( i = n - 1; i != -1 && a3[i] == *(unsigned __int8 *)(a1 + i + v18); --i )
            ;
          if ( i == -1 )
            return a1 + v18;
          v18 += v13;
        }
      }
    }
  }
  return 0;
}
