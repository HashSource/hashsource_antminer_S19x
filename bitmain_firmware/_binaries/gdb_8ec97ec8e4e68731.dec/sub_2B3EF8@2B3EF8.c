_DWORD *__fastcall sub_2B3EF8(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2
  void *v7; // r0

  v2 = sub_2AB4EC(0x528u);
  v3 = v2;
  if ( v2 )
  {
    if ( sub_2E8E84(v2, a1, sub_2B40F8, 108, 4) )
    {
      v4 = dword_48FD14;
      v3[98] = 1;
      v3[108] = 1;
      if ( v4 )
        v5 = 16;
      else
        v5 = 12;
      v3[104] = v5;
      v3[103] = 20;
      v3[311] = a1;
      v3[100] = 0;
      if ( sub_2AAA0C((int)(v3 + 313), (int)sub_2B4070, 68) )
      {
        v3[9] = 2834508;
      }
      else
      {
        v3 = 0;
        sub_2DBEB8(a1);
      }
    }
    else
    {
      v7 = v3;
      v3 = 0;
      free(v7);
    }
  }
  return v3;
}
