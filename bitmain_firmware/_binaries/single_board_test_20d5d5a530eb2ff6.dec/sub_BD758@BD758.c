int __fastcall sub_BD758(int a1, int a2)
{
  int v2; // r4
  int v5; // r0
  int v6; // r6
  int v7; // r6
  int v8; // r8
  int v9; // r0
  int v10; // r0
  int v12; // [sp+8h] [bp-8h] BYREF
  _BYTE v13[4]; // [sp+Ch] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v12 = 0;
  if ( v2 && *(_DWORD *)(a1 + 16) > 0x1Fu || (v2 = CRYPTO_malloc(32, "crypto/ct/ct_sct_ctx.c", 206)) != 0 )
  {
    v5 = sub_1160D4(a2, &v12);
    v6 = v5;
    if ( v5 > 0 )
    {
      v8 = v12;
      v9 = sub_D93F0(v5);
      v7 = sub_D18F0(v8, v6, v2, v13, v9, 0);
      if ( v7 )
      {
        v10 = *(_DWORD *)(a1 + 12);
        if ( v2 == v10 )
        {
          v2 = 0;
          v7 = 1;
        }
        else
        {
          v7 = 1;
          CRYPTO_free(v10, "crypto/ct/ct_sct_ctx.c", 220);
          *(_DWORD *)(a1 + 12) = v2;
          v2 = 0;
          *(_DWORD *)(a1 + 16) = 32;
        }
      }
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  CRYPTO_free(v2, "crypto/ct/ct_sct_ctx.c", 228);
  CRYPTO_free(v12, "crypto/ct/ct_sct_ctx.c", 229);
  return v7;
}
