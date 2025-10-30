int __fastcall sub_8DA7C(int result, _DWORD *a2)
{
  int v2; // r2
  _DWORD *v4; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r0
  _DWORD *v7; // r2
  _DWORD *v8; // r1
  bool v9; // zf
  void (*v10)(void); // r3

  v2 = a2[1];
  if ( !v2 || v2 > *(_DWORD *)(result + 428) + *(_DWORD *)(result + 432) )
  {
    v4 = (_DWORD *)result;
    sub_DF92C(a2[2], result);
    v5 = (_DWORD *)v4[114];
    v6 = (_DWORD *)*a2;
    if ( v5 )
    {
      v7 = (_DWORD *)v4[113];
      if ( v7 )
      {
        v8 = v6 + 7;
        if ( v5 == v6 + 8 )
        {
          if ( v7 == v8 )
            v5 = 0;
          else
            v6[8] = v7;
          if ( v7 == v8 )
          {
            v6[7] = v5;
            v6[8] = v5;
          }
          else
          {
            v7[114] = v5;
          }
        }
        else
        {
          v9 = v7 == v8;
          if ( v7 == v8 )
          {
            v6[7] = v5;
            v5[113] = v7;
          }
          else
          {
            v5[113] = v7;
            v7 = (_DWORD *)v4[113];
          }
          if ( !v9 )
            v7[114] = v5;
        }
        v4[114] = 0;
        v4[113] = 0;
        v6 = (_DWORD *)*a2;
      }
    }
    v10 = (void (*)(void))v6[12];
    v4[102] = 1;
    if ( v10 )
      v10();
    return sub_8D6A4((int)v4);
  }
  return result;
}
