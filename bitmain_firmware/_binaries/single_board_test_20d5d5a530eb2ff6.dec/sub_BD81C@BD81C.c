int __fastcall sub_BD81C(int *a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r7
  int v8; // r8
  int v9; // r0
  int v10; // r0
  int v12; // [sp+8h] [bp-8h] BYREF
  char v13[4]; // [sp+Ch] [bp-4h] BYREF

  v4 = sub_1161E4(a2);
  if ( !v4 )
    return 0;
  v5 = a1[1];
  v12 = 0;
  if ( (!v5 || (unsigned int)a1[2] <= 0x1F) && (v5 = CRYPTO_malloc(32, "crypto/ct/ct_sct_ctx.c", 206)) == 0
    || (v6 = sub_1160D4(a2, &v12), v7 = v6, v6 <= 0)
    || (v8 = v12, v9 = sub_D93F0(v6), !sub_D18F0(v8, v7, v5, v13, v9, 0)) )
  {
    CRYPTO_free(v5, "crypto/ct/ct_sct_ctx.c", 228);
    CRYPTO_free(v12, "crypto/ct/ct_sct_ctx.c", 229);
    sub_DA240(v4);
    return 0;
  }
  v10 = a1[1];
  if ( v5 != v10 )
  {
    CRYPTO_free(v10, "crypto/ct/ct_sct_ctx.c", 220);
    a1[1] = v5;
    a1[2] = 32;
  }
  CRYPTO_free(0, "crypto/ct/ct_sct_ctx.c", 228);
  CRYPTO_free(v12, "crypto/ct/ct_sct_ctx.c", 229);
  sub_DA240(*a1);
  *a1 = v4;
  return 1;
}
