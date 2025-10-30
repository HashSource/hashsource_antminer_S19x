int __fastcall sub_4C158(_DWORD *s)
{
  int v1; // r3
  unsigned int v3; // r3

  v1 = s[4099];
  if ( v1 )
  {
    if ( v1 != 2 || (v3 = s[4098], v3 > 0x40000000) )
    {
      memset(s, 0, 0x4000u);
      s[4098] = 0;
      s[4099] = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v3 = s[4098];
  }
  if ( v3 )
    s[4098] = v3 + 0x10000;
LABEL_7:
  s[4097] = 0;
  s[4096] = 0;
  s[4100] = 0;
  return 16388;
}
