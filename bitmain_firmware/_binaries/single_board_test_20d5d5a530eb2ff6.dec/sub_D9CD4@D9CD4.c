int __fastcall sub_D9CD4(_DWORD *a1, int a2)
{
  int v4; // r3
  void (*v5)(void); // r3
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  int v8; // r1
  int v10; // r2
  int v11; // r4
  int v12; // [sp+Ch] [bp-4h] BYREF

  v12 = 0;
  if ( a1 )
  {
    if ( a1[6] )
    {
      v4 = a1[3];
      if ( v4 )
      {
        v5 = *(void (**)(void))(v4 + 88);
        if ( v5 )
        {
          v5();
          a1[6] = 0;
        }
      }
      sub_CDDF8(a1[4]);
      a1[4] = 0;
      sub_CDDF8(a1[5]);
      a1[5] = 0;
    }
    if ( a2 == a1[1] && a1[3] )
      return 1;
    sub_CDDF8(a1[4]);
    a1[4] = 0;
    sub_CDDF8(a1[5]);
    a1[5] = 0;
    v6 = (_DWORD *)sub_AD928(&v12, a2);
    v7 = v6;
    if ( v6 )
    {
      v8 = *v6;
      v10 = v12;
      a1[3] = v7;
      *a1 = v8;
      a1[1] = a2;
      a1[4] = v10;
      return 1;
    }
  }
  else
  {
    v11 = sub_AD928(&v12, a2);
    sub_CDDF8(v12);
    if ( v11 )
      return 1;
  }
  sub_D0048(6, 158, 156, (int)"crypto/evp/p_lib.c", 210);
  return 0;
}
