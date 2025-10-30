int __fastcall i2d_ECPKParameters(_DWORD *a1, _BYTE **a2, int a3)
{
  size_t *v4; // r0
  int v5; // r5
  int v6; // r4

  v4 = sub_C3A7C(a1, 0, a3);
  v5 = (int)v4;
  if ( v4 )
  {
    v6 = sub_C3400(v4, a2);
    if ( v6 )
    {
      sub_C3428(v5);
      return v6;
    }
    else
    {
      sub_D0048(16, 191, 121, "crypto/ec/ec_asn1.c", 994);
      sub_C3428(v5);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 191, 120, "crypto/ec/ec_asn1.c", 990);
    return 0;
  }
}
