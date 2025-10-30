_DWORD *__fastcall sub_13BAF8(int *a1, void **a2, int a3)
{
  _DWORD *v4; // r5
  int v5; // r4
  int v6; // r0
  bool v7; // cc
  unsigned int v8; // r1

  v4 = (_DWORD *)sub_BCE58(a1, a2, a3);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v7 = v5 < sub_10C010((int)v4);
      v8 = v5++;
      if ( !v7 )
        break;
      v6 = sub_10C01C(v4, v8);
      if ( sub_BD38C(v6, 3) != 1 )
      {
        sub_BD014((int)v4);
        *a1 = 0;
        return 0;
      }
    }
  }
  return v4;
}
