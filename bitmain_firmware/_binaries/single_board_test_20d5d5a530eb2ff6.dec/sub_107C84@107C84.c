int **__fastcall sub_107C84(int a1, _DWORD *a2, int a3, unsigned int a4, int a5, int a6)
{
  int *v10; // r4
  void *v11; // r0
  int v12; // r9
  _BYTE *v13; // r0
  bool v14; // zf
  _BYTE *v15; // r5
  int v16; // r3
  _DWORD *v17; // r6
  int **v18; // r4
  _DWORD *v20; // [sp+Ch] [bp-8h]

  v10 = (int *)sub_D14F4();
  v11 = (void *)sub_D8C78((int)a2);
  v12 = (int)v11;
  if ( (int)v11 < 0 )
  {
    v15 = 0;
    sub_D0048(53, 100, 102, (int)"crypto/sm2/sm2_sign.c", 151);
  }
  else
  {
    v13 = sub_E0740(v11);
    v14 = v13 == 0;
    if ( v13 )
      v14 = v10 == 0;
    v15 = v13;
    v16 = v14;
    v20 = (_DWORD *)v16;
    if ( v14 )
    {
      sub_D0048(53, 100, 65, (int)"crypto/sm2/sm2_sign.c", 157);
    }
    else if ( sub_10794C((int)v13, a2, a3, a4, a1) )
    {
      if ( sub_D16C0(v10, a2)
        && sub_D16D8((int)v10, (int)v15, v12)
        && sub_D16D8((int)v10, a5, a6)
        && sub_D1734(v10, (int)v15, v20) )
      {
        v17 = sub_B8AEC(v15, v12, v20);
        if ( v17 )
        {
          CRYPTO_free(v15);
          sub_D1504(v10);
          v18 = sub_107558(a1, (int)v17);
          sub_B895C((int)v17);
          return v18;
        }
        sub_D0048(53, 100, 68, (int)"crypto/sm2/sm2_sign.c", 177);
      }
      else
      {
        sub_D0048(53, 100, 6, (int)"crypto/sm2/sm2_sign.c", 171);
      }
    }
  }
  CRYPTO_free(v15);
  sub_D1504(v10);
  sub_B895C(0);
  return 0;
}
