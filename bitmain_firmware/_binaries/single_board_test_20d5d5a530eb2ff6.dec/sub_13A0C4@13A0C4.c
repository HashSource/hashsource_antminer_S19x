void **__fastcall sub_13A0C4(int *a1)
{
  int v1; // r4
  void **v2; // r5
  _DWORD *v3; // r7
  bool v4; // cc
  unsigned int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r6

  v1 = 0;
  v2 = 0;
  v3 = (_DWORD *)sub_13A08C(a1);
  while ( 1 )
  {
    v4 = v1 < sub_10C010((int)v3);
    v5 = v1++;
    if ( !v4 )
      break;
    v6 = sub_10C01C(v3, v5);
    v7 = *(_DWORD *)(v6 + 28);
    v8 = v6;
    if ( v7 )
    {
      if ( !v2 )
      {
        v2 = sub_10BFCC();
        if ( !v2 )
          return v2;
        v7 = *(_DWORD *)(v8 + 28);
      }
      if ( !sub_10BD3C((int *)v2, v7) )
      {
        sub_10BDB4(v2);
        return 0;
      }
    }
  }
  return v2;
}
