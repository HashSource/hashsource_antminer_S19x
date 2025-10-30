int __fastcall sub_EABD0(int a1, int a2, int a3, int a4, int (__fastcall *a5)(int, int), char a6)
{
  int v6; // r10
  int v10; // r9
  int v11; // r4
  int v12; // r11
  int v13; // r0
  int v15; // r9
  int v16; // r10
  int v17; // r1

  v6 = a3;
  if ( !a3 )
    return 0;
  if ( a3 <= 0 )
  {
    v12 = a6 & 2;
    if ( (a6 & 2) != 0 )
      return a2;
    return v12;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (v6 + v10) / 2;
        v12 = a2 + a4 * v11;
        v13 = a5(a1, v12);
        if ( v13 >= 0 )
          break;
        v6 = (v6 + v10) / 2;
        if ( v11 <= v10 )
        {
LABEL_8:
          if ( (a6 & 1) == 0 )
            return 0;
          return v12;
        }
      }
      if ( !v13 )
        break;
      v10 = v11 + 1;
      if ( v6 <= v11 + 1 )
        goto LABEL_8;
    }
    if ( (a6 & 2) == 0 || v11 <= 0 )
      return v12;
    v15 = v11 - 1;
    v16 = a2 + a4 * (v11 - 1);
    while ( 1 )
    {
      v17 = v16;
      v12 = v16;
      v16 -= a4;
      if ( a5(a1, v17) )
        break;
      v11 = v15;
      if ( !v15 )
        return v12;
      --v15;
    }
    return a2 + v11 * a4;
  }
}
