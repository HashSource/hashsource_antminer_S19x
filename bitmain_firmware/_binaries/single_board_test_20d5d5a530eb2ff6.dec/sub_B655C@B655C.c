_DWORD *__fastcall sub_B655C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r7
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(_DWORD *); // r3

  v2 = (_DWORD *)sub_E0740(80, "crypto/bio/bio_lib.c", 73);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 18;
    *v2 = a1;
    v2[5] = 1;
    __dmb(0xBu);
    v2[12] = 1;
    __dmb(0xBu);
    v5 = sub_DBE44(12, v2, v2 + 18);
    if ( v5 )
    {
      v6 = sub_10C510(v5);
      v3[19] = v6;
      if ( v6 )
      {
        v7 = *(int (__fastcall **)(_DWORD *))(a1 + 36);
        if ( !v7 )
        {
LABEL_8:
          v3[4] = 1;
          return v3;
        }
        if ( v7(v3) )
        {
          if ( *(_DWORD *)(a1 + 36) )
            return v3;
          goto LABEL_8;
        }
        sub_D0048(32, 108, 70, "crypto/bio/bio_lib.c", 95);
        sub_DC2BC(12, v3, v4);
        sub_10C574(v3[19]);
      }
      else
      {
        sub_D0048(32, 108, 65, "crypto/bio/bio_lib.c", 89);
        sub_DC2BC(12, v3, v4);
      }
    }
    CRYPTO_free(v3, "crypto/bio/bio_lib.c", 106);
    return 0;
  }
  else
  {
    sub_D0048(32, 108, 65, "crypto/bio/bio_lib.c", 76);
    return 0;
  }
}
