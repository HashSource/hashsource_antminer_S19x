_DWORD *__fastcall sub_DA3E0(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int *v10; // r6
  int v11; // r3
  void (__fastcall *v12)(_DWORD *); // r3
  int *v13; // r0
  int v14; // r3
  _DWORD *v15; // r3
  int (__fastcall *v16)(_DWORD *, int, int); // r3
  _DWORD *v18; // [sp+Ch] [bp-8h] BYREF

  v8 = EVP_PKEY_new();
  v9 = v8;
  if ( !v8 )
    goto LABEL_22;
  v18 = a2;
  if ( a2 )
    v10 = 0;
  else
    v10 = (int *)&v18;
  if ( v8[6] )
  {
    v11 = v8[3];
    if ( v11 )
    {
      v12 = *(void (__fastcall **)(_DWORD *))(v11 + 88);
      if ( v12 )
      {
        v12(v8);
        v9[6] = 0;
      }
    }
    sub_CDDF8(v9[4]);
    v9[4] = 0;
    sub_CDDF8(v9[5]);
    v9[5] = 0;
  }
  if ( a1 != v9[1] || (v13 = (int *)v9[3]) == 0 )
  {
    sub_CDDF8(v9[4]);
    v9[4] = 0;
    sub_CDDF8(v9[5]);
    v9[5] = 0;
    v13 = (int *)sub_AD928(v10, a1);
    if ( !v13 )
    {
      sub_D0048(6, 158, 156, (int)"crypto/evp/p_lib.c", 210);
      goto LABEL_22;
    }
    v14 = *v13;
    v9[3] = v13;
    *v9 = v14;
    v9[1] = a1;
    v15 = v18;
    if ( !v10 && v18 )
    {
      if ( !sub_CDD6C(v18) )
      {
        sub_D0048(6, 158, 134, (int)"crypto/evp/p_lib.c", 219);
        goto LABEL_22;
      }
      v15 = v18;
      v13 = (int *)v9[3];
    }
    v9[4] = v15;
  }
  v16 = (int (__fastcall *)(_DWORD *, int, int))v13[33];
  if ( v16 )
  {
    if ( v16(v9, a3, a4) )
      return v9;
    sub_D0048(6, 192, 180, (int)"crypto/evp/p_lib.c", 277);
  }
  else
  {
    sub_D0048(6, 192, 150, (int)"crypto/evp/p_lib.c", 272);
  }
LABEL_22:
  sub_DA240((int)v9);
  return 0;
}
