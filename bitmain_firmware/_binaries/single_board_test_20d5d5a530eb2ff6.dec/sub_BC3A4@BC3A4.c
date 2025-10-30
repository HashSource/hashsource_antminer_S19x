int __fastcall sub_BC3A4(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r5
  int v6; // r6
  char *v7; // r0
  int v8; // r6
  _DWORD *v10; // [sp+Ch] [bp-4h] BYREF

  v10 = 0;
  if ( !a1 )
    return 1;
  v4 = sub_E9EF4(a1, a2, "crypto/ct/ct_log.c", 167);
  v5 = v4;
  if ( !v4 )
  {
LABEL_14:
    v8 = -1;
    CTLOG_free(v10);
    sub_D0048(50, 130, 65, "crypto/ct/ct_log.c", 191);
    return v8;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( !sub_13B3F8(v6, v4, "description") )
  {
    sub_D0048(50, 119, 111, "crypto/ct/ct_log.c", 125);
LABEL_11:
    CRYPTO_free(v5, "crypto/ct/ct_log.c", 172);
    goto LABEL_12;
  }
  v7 = (char *)sub_13B3F8(v6, v5, "key");
  if ( !v7 )
  {
    sub_D0048(50, 119, 112, "crypto/ct/ct_log.c", 131);
    goto LABEL_11;
  }
  v8 = sub_13B954((int)&v10, v7);
  CRYPTO_free(v5, "crypto/ct/ct_log.c", 172);
  if ( v8 < 0 )
    return v8;
  if ( v8 )
  {
    if ( sub_10BD3C(**(_DWORD **)a3, v10) )
      return 1;
    goto LABEL_14;
  }
LABEL_12:
  ++*(_DWORD *)(a3 + 8);
  return 1;
}
