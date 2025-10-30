int __fastcall sub_107DC4(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5, int a6, int a7)
{
  int *v11; // r4
  void *v12; // r0
  int v13; // r9
  _BYTE *v14; // r0
  bool v15; // zf
  _BYTE *v16; // r5
  int v17; // r3
  _DWORD *v18; // r6
  int v19; // r4
  _DWORD *v21; // [sp+Ch] [bp-8h]

  v11 = (int *)sub_D14F4();
  v12 = (void *)sub_D8C78((int)a2);
  v13 = (int)v12;
  if ( (int)v12 < 0 )
  {
    v16 = 0;
    sub_D0048(53, 100, 102, (int)"crypto/sm2/sm2_sign.c", 151);
  }
  else
  {
    v14 = sub_E0740(v12);
    v15 = v14 == 0;
    if ( v14 )
      v15 = v11 == 0;
    v16 = v14;
    v17 = v15;
    v21 = (_DWORD *)v17;
    if ( v15 )
    {
      sub_D0048(53, 100, 65, (int)"crypto/sm2/sm2_sign.c", 157);
    }
    else if ( sub_10794C((int)v14, a2, a4, a5, a1) )
    {
      if ( sub_D16C0(v11, a2)
        && sub_D16D8((int)v11, (int)v16, v13)
        && sub_D16D8((int)v11, a6, a7)
        && sub_D1734(v11, (int)v16, v21) )
      {
        v18 = sub_B8AEC(v16, v13, v21);
        if ( v18 )
        {
          CRYPTO_free(v16);
          sub_D1504(v11);
          v19 = sub_107774(a1, a3, (int)v18);
          sub_B895C((int)v18);
          return v19;
        }
        sub_D0048(53, 100, 68, (int)"crypto/sm2/sm2_sign.c", 177);
      }
      else
      {
        sub_D0048(53, 100, 6, (int)"crypto/sm2/sm2_sign.c", 171);
      }
    }
  }
  CRYPTO_free(v16);
  sub_D1504(v11);
  sub_B895C(0);
  return 0;
}
