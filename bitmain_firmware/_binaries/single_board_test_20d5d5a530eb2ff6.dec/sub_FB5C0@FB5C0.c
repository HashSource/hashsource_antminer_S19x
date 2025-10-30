int __fastcall sub_FB5C0(int a1, size_t a2, size_t a3, int a4, int *a5, int a6)
{
  int v7; // r7
  int v8; // r0
  size_t v9; // r6
  _BYTE *v10; // r5
  int v11; // r4
  int v12; // r0
  int *v13; // r3
  _BYTE *v15; // [sp+Ch] [bp-14h] BYREF
  size_t v16[4]; // [sp+10h] [bp-10h] BYREF

  v16[2] = a2;
  v16[0] = a3;
  v16[1] = 4;
  v7 = sub_B2054(v16, 0);
  v8 = sub_F7ED8(a6);
  if ( v7 >= v8 - 10 )
  {
    sub_D0048(4, 118, 112, (int)"crypto/rsa/rsa_saos.c", 34);
    return 0;
  }
  else
  {
    v9 = v8 + 1;
    v10 = CRYPTO_malloc((void *)(v8 + 1));
    if ( v10 )
    {
      v15 = v10;
      v11 = 1;
      sub_B2054(v16, &v15);
      v12 = sub_F7F00(v7, (int)v10, a4, a6);
      if ( v12 <= 0 )
        v11 = 0;
      else
        v13 = a5;
      if ( v12 > 0 )
        *v13 = v12;
      sub_E0758(v10, v9, (size_t)"crypto/rsa/rsa_saos.c");
      return v11;
    }
    else
    {
      sub_D0048(4, 118, 65, (int)"crypto/rsa/rsa_saos.c", 39);
      return 0;
    }
  }
}
