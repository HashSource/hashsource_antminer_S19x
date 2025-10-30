_DWORD *sub_15B204()
{
  _DWORD *result; // r0
  int v1; // r4
  char *v2; // r0
  char *v3; // r0
  char **v4; // r0
  char *v5; // r0
  _UNKNOWN **v6; // r0

  result = (_DWORD *)sub_CDEA4();
  if ( result )
  {
    v1 = (int)result;
    if ( sub_CE130(result, (int)"openssl")
      && sub_CE15C(v1, (int)"Software engine support")
      && sub_CE188(v1, (int)sub_15AFA0)
      && (v2 = sub_F9CE0(), sub_15B9F4(v1, v2))
      && (v3 = sub_C1748(), sub_CF164(v1, (int)v3))
      && (v4 = sub_C5E4C(), sub_CF22C(v1, (int)v4))
      && (v5 = sub_BFB58(), sub_CF09C(v1, (int)v5))
      && (v6 = sub_F3E50(), sub_15B92C(v1, v6))
      && sub_15B74C(v1, sub_15AEF4)
      && sub_15B864(v1, sub_15B04C)
      && sub_CEA7C(v1, (int)sub_15AD68) )
    {
      sub_CE59C(v1);
      sub_CE00C(v1);
      return sub_D00F0();
    }
    else
    {
      return (_DWORD *)sub_CE00C(v1);
    }
  }
  return result;
}
