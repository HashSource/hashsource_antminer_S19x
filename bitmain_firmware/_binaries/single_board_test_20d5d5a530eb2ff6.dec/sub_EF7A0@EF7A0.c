int __fastcall sub_EF7A0(void **a1, size_t *a2, int a3, int *a4, void *a5)
{
  int *v8; // r0
  int *v9; // r5
  void *v10; // r0
  void *v11; // r7
  bool v12; // zf
  int v14; // r4
  size_t v15; // r3
  void *v16; // [sp+Ch] [bp-4h] BYREF

  v8 = sub_DB4F8(a4, 0);
  if ( !v8 )
    return -1;
  v9 = v8;
  if ( sub_DAB74(v8) > 0 )
  {
    if ( sub_DB77C((int)v9, -1, 512) <= 0 )
    {
      v14 = -1;
      sub_D0048(33, 133, 152, (int)"crypto/pkcs7/pk7_doit.c", 158);
      goto LABEL_13;
    }
    if ( sub_DABC0(v9, 0, (unsigned int *)&v16, *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8), **(_DWORD **)(a3 + 12)) > 0 )
    {
      v10 = CRYPTO_malloc(v16);
      v11 = v10;
      if ( v10 )
      {
        if ( sub_DABC0(
               v9,
               (int)v10,
               (unsigned int *)&v16,
               *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8),
               **(_DWORD **)(a3 + 12)) <= 0
          || !v16 )
        {
          goto LABEL_11;
        }
        v12 = v16 == a5;
        if ( v16 != a5 )
          v12 = a5 == 0;
        if ( !v12 )
        {
LABEL_11:
          sub_D0048(33, 133, 6, (int)"crypto/pkcs7/pk7_doit.c", 178);
          sub_DB4BC((int)v9);
          CRYPTO_free(v11);
          return 0;
        }
        v14 = 1;
        sub_E0758(*a1, *a2, (size_t)"crypto/pkcs7/pk7_doit.c");
        v15 = (size_t)v16;
        *a1 = v11;
        *a2 = v15;
      }
      else
      {
        sub_D0048(33, 133, 65, (int)"crypto/pkcs7/pk7_doit.c", 169);
        v14 = -1;
      }
      goto LABEL_13;
    }
  }
  v14 = -1;
LABEL_13:
  sub_DB4BC((int)v9);
  return v14;
}
