int __fastcall sub_265DBC(unsigned int a1, int a2, int a3, int *a4)
{
  int v8; // r0
  int v9; // r4
  int v11; // r3

  v8 = sub_230020(a1, a2, a3);
  if ( v8 )
  {
    v9 = 0;
    if ( a3 > 0 )
    {
      while ( 1 )
      {
        v8 = sub_230020(a1 + v9, a2 + v9, 1);
        v11 = v8;
        if ( v8 )
          v11 = 1;
        if ( a3 - (v9 + 1) <= 0 )
          v11 |= 1u;
        if ( v11 )
          break;
        ++v9;
      }
      if ( !v8 )
        ++v9;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v9 = a3;
  }
  *a4 = v8;
  return v9;
}
