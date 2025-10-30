const char *__fastcall sub_122434(int a1, int a2)
{
  _DWORD *v2; // r0
  int v3; // r5
  const char *v4; // r4

  if ( !a2 )
    return 0;
  v2 = (_DWORD *)sub_12700C(a2, 0);
  v3 = (int)v2;
  if ( v2 )
  {
    if ( sub_B85BC(v2) <= 127 )
    {
      v4 = (const char *)sub_135904(v3);
      if ( v4 )
        goto LABEL_5;
    }
    else
    {
      v4 = sub_121884();
      if ( v4 )
      {
LABEL_5:
        sub_B895C(v3);
        return v4;
      }
    }
  }
  sub_D0048(34, 120, 65, (int)"crypto/x509v3/v3_utl.c", 190);
  sub_B895C(v3);
  return 0;
}
