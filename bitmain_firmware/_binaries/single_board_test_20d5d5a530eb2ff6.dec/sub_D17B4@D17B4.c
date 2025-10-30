int __fastcall sub_D17B4(int *a1, int *a2)
{
  int v3; // r3
  _DWORD *v5; // r0
  void *v6; // r6
  int v7; // r3
  int v8; // lr
  int v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r0
  size_t v13; // r2
  void *v14; // r0
  int v15; // r0
  int v16; // r6
  int (__fastcall *v17)(int *, int *); // r3

  if ( !a2 || (v3 = *a2) == 0 )
  {
    sub_D0048(6, 110, 111, (int)"crypto/evp/digest.c", 226);
    return 0;
  }
  v5 = (_DWORD *)a2[1];
  if ( v5 )
  {
    if ( !sub_CDD6C(v5) )
    {
      sub_D0048(6, 110, 38, (int)"crypto/evp/digest.c", 232);
      return 0;
    }
    v3 = *a2;
  }
  if ( *a1 == v3 )
  {
    v6 = (void *)a1[3];
    sub_D8DA4(a1, 4);
  }
  else
  {
    v6 = 0;
  }
  sub_D1478(a1);
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  *a1 = *a2;
  a1[1] = v7;
  a1[2] = v8;
  a1[3] = v9;
  v10 = a2[5];
  a1[4] = a2[4];
  a1[5] = v10;
  sub_D8DAC(a1, 1024);
  a1[3] = 0;
  v11 = a2[3];
  a1[4] = 0;
  if ( v11 )
  {
    v12 = *(_DWORD *)(*a1 + 40);
    if ( v12 )
    {
      if ( v6 )
      {
        v13 = *(_DWORD *)(*a1 + 40);
        v14 = v6;
        a1[3] = (int)v6;
      }
      else
      {
        v14 = (void *)CRYPTO_malloc(v12, "crypto/evp/digest.c", 259);
        a1[3] = (int)v14;
        if ( !v14 )
        {
          sub_D0048(6, 110, 65, (int)"crypto/evp/digest.c", 261);
          return 0;
        }
        v13 = *(_DWORD *)(*a1 + 40);
      }
      memcpy(v14, (const void *)a2[3], v13);
    }
  }
  v15 = a2[4];
  a1[5] = a2[5];
  if ( v15 )
  {
    v16 = sub_DB5F0();
    a1[4] = v16;
    if ( !v16 )
    {
      sub_D1478(a1);
      return 0;
    }
  }
  v17 = *(int (__fastcall **)(int *, int *))(*a1 + 28);
  if ( v17 )
    return v17(a1, a2);
  else
    return 1;
}
