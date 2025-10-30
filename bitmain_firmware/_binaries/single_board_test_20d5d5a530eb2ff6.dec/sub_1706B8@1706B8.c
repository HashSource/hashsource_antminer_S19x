int *__fastcall sub_1706B8(int a1, int a2, _DWORD *a3)
{
  int v6; // r6
  int *v7; // r5
  unsigned int v8; // r4
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r0

  v6 = sub_10C010((int)a3);
  v7 = (int *)sub_10BF44(0, v6);
  if ( v7 )
  {
    if ( v6 > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_10C01C(a3, v8++);
        v10 = sub_170288(a1, a2, v9);
        if ( !v10 )
          break;
        sub_10BD3C(v7, (int)v10);
        if ( v6 == v8 )
          return v7;
      }
      v11 = (int)v7;
      v7 = 0;
      sub_10BFDC(v11, (void (__fastcall *)(int))GENERAL_NAME_free);
    }
  }
  else
  {
    sub_D0048(34, 118, 65, (int)"crypto/x509v3/v3_alt.c", 407);
    sub_10BDB4(0);
  }
  return v7;
}
