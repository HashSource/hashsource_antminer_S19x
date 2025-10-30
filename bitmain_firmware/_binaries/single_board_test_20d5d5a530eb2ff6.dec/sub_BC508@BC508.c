int __fastcall sub_BC508(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r3
  int v8; // r2
  char *v9; // r0
  int v10; // r5

  v4 = (_DWORD *)sub_E0740(12, "crypto/ct/ct_log.c", 59);
  v5 = (int)v4;
  if ( v4 )
  {
    *v4 = a1;
    v6 = sub_13B1CC(0);
    v7 = v6;
    *(_DWORD *)(v5 + 4) = v6;
    if ( v6 )
    {
      if ( sub_13B230(v6, a2, 0) > 0 )
      {
        v9 = (char *)sub_13B3F8(*(_DWORD *)(v5 + 4), 0, "enabled_logs");
        v10 = (int)v9;
        if ( !v9 )
        {
          sub_D0048(50, 123, 109, "crypto/ct/ct_log.c", 215);
          v7 = *(_DWORD *)(v5 + 4);
          goto LABEL_10;
        }
        if ( sub_BBEDC(v9, 44, 1, (int (__fastcall *)(const char *, int, int))sub_BC3A4, v5) && !*(_DWORD *)(v5 + 8) )
        {
          v7 = *(_DWORD *)(v5 + 4);
          v10 = 1;
          goto LABEL_10;
        }
        v8 = 221;
      }
      else
      {
        v8 = 209;
      }
      sub_D0048(50, 123, 109, "crypto/ct/ct_log.c", v8);
      v7 = *(_DWORD *)(v5 + 4);
      v10 = 0;
    }
    else
    {
      v10 = 0;
    }
LABEL_10:
    sub_13B200(v7);
    CRYPTO_free(v5, "crypto/ct/ct_log.c", 69);
    return v10;
  }
  sub_D0048(50, 122, 65, "crypto/ct/ct_log.c", 62);
  return 0;
}
