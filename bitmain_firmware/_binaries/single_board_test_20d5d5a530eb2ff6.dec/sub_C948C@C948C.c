int __fastcall sub_C948C(int a1, int a2, int a3, void *a4, size_t n, int a6)
{
  void *v9; // r4
  int v10; // r5
  const void *v12; // r0
  int v13; // r0
  size_t *v14; // [sp+4h] [bp-10h] BYREF
  void *v15; // [sp+8h] [bp-Ch] BYREF
  void *s2; // [sp+Ch] [bp-8h] BYREF

  v15 = a4;
  s2 = 0;
  v14 = (size_t *)sub_C49AC();
  if ( !v14 )
    return -1;
  if ( sub_C498C((int *)&v14, &v15, n) && n == sub_C499C(v14, (_BYTE **)&s2) )
  {
    v9 = s2;
    v12 = a4;
    v10 = -1;
    if ( !memcmp(v12, s2, n) )
    {
      v13 = sub_C9930(a2, a3, v14, a6);
      v9 = s2;
      v10 = v13;
    }
  }
  else
  {
    v9 = s2;
    v10 = -1;
  }
  CRYPTO_free(v9, "crypto/ec/ecdsa_ossl.c", 312);
  sub_C49E8((int **)v14);
  return v10;
}
