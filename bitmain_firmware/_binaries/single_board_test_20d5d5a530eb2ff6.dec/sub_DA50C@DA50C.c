_DWORD *__fastcall sub_DA50C(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v8; // r4
  int *v9; // r0
  bool v10; // zf
  int *v11; // r5
  int v12; // r6
  int v13; // r3
  void (__fastcall *v14)(_DWORD *); // r3
  int *v15; // r0
  int v16; // r3
  _DWORD *v17; // r0
  _DWORD *v19; // [sp+Ch] [bp-8h] BYREF

  v8 = EVP_PKEY_new();
  v9 = sub_BB0A4();
  v10 = v9 == 0;
  if ( v9 )
    v10 = v8 == 0;
  v11 = v9;
  v12 = v10;
  if ( v10 )
    goto LABEL_23;
  v19 = a1;
  if ( !a1 )
    v12 = (int)&v19;
  if ( v8[6] )
  {
    v13 = v8[3];
    if ( v13 )
    {
      v14 = *(void (__fastcall **)(_DWORD *))(v13 + 88);
      if ( v14 )
      {
        v14(v8);
        v8[6] = 0;
      }
    }
    sub_CDDF8(v8[4]);
    v8[4] = 0;
    sub_CDDF8(v8[5]);
    v8[5] = 0;
  }
  if ( v8[1] != 894 || !v8[3] )
  {
    sub_CDDF8(v8[4]);
    v8[4] = 0;
    sub_CDDF8(v8[5]);
    v8[5] = 0;
    v15 = (int *)sub_AD928((int *)v12, 894);
    if ( !v15 )
    {
      sub_D0048(6, 158, 156, (int)"crypto/evp/p_lib.c", 210);
      goto LABEL_23;
    }
    v16 = *v15;
    v8[3] = v15;
    v8[1] = 894;
    *v8 = v16;
    v17 = v19;
    if ( !v12 && v19 )
    {
      if ( !sub_CDD6C(v19) )
      {
        sub_D0048(6, 158, 134, (int)"crypto/evp/p_lib.c", 219);
        goto LABEL_23;
      }
      v17 = v19;
    }
    v8[4] = v17;
  }
  if ( sub_BB1C8(v11, a2, a3, a4, (unsigned int)a1) )
  {
    v8[6] = v11;
    return v8;
  }
  sub_D0048(6, 193, 180, (int)"crypto/evp/p_lib.c", 337);
LABEL_23:
  sub_DA240((int)v8);
  sub_BB138(v11);
  return 0;
}
