int __fastcall sub_D9E20(_DWORD *a1, char *s, int a3)
{
  int v6; // r3
  void (*v7)(void); // r3
  int *v8; // r5
  int v9; // r1
  int v11; // r2
  int v12[2]; // [sp+Ch] [bp-8h] BYREF

  v12[0] = 0;
  if ( a1 )
  {
    if ( a1[6] )
    {
      v6 = a1[3];
      if ( v6 )
      {
        v7 = *(void (**)(void))(v6 + 88);
        if ( v7 )
        {
          v7();
          a1[6] = 0;
        }
      }
      sub_CDDF8(a1[4]);
      a1[4] = 0;
      sub_CDDF8(a1[5]);
      a1[5] = 0;
    }
    if ( !a1[1] && a1[3] )
      return 1;
    sub_CDDF8(a1[4]);
    a1[4] = 0;
    sub_CDDF8(a1[5]);
    a1[5] = 0;
  }
  if ( s )
  {
    v8 = (int *)sub_AD9B8((size_t)v12, s, a3);
    if ( a1 )
      goto LABEL_11;
  }
  else
  {
    v8 = (int *)sub_AD928(v12, 0);
    if ( a1 )
    {
LABEL_11:
      if ( v8 )
      {
        v9 = *v8;
        v11 = v12[0];
        a1[3] = v8;
        *a1 = v9;
        a1[4] = v11;
        a1[1] = 0;
        return 1;
      }
      goto LABEL_16;
    }
  }
  sub_CDDF8(v12[0]);
  if ( v8 )
    return 1;
LABEL_16:
  sub_D0048(6, 158, 156, (int)"crypto/evp/p_lib.c", 210);
  return 0;
}
