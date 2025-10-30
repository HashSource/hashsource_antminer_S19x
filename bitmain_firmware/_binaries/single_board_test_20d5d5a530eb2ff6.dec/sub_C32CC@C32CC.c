int __fastcall sub_C32CC(int result, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r3

  if ( result )
  {
    v3 = (_DWORD *)result;
    v4 = sub_C620C(result, a2);
    if ( sub_C6210(v4) == 407 && v3[11] && (v5 = v3[12]) != 0 && !v3[13] )
    {
      if ( a2 )
        *a2 = v5;
      return 1;
    }
    else
    {
      sub_D0048(16, 194, 66, "crypto/ec/ec_asn1.c", 52);
      return 0;
    }
  }
  return result;
}
