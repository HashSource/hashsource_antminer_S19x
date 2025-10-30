_DWORD *__fastcall sub_B73A0(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0

  v4 = (_DWORD *)sub_E0740(48, "crypto/bio/bio_meth.c", 38);
  if ( v4 && (v5 = sub_E9E3C(a2, "crypto/bio/bio_meth.c", 41), (v4[1] = v5) != 0) )
  {
    *v4 = a1;
    return v4;
  }
  else
  {
    CRYPTO_free(v4, "crypto/bio/bio_meth.c", 42);
    sub_D0048(32, 146, 65, "crypto/bio/bio_meth.c", 43);
    return 0;
  }
}
