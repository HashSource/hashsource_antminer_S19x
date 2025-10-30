char *__fastcall sub_30DFAC(const char *a1, unsigned int a2)
{
  unsigned int v4; // r1
  void *v5; // r4
  int v7; // r0
  int v8; // r4
  _DWORD v9[24]; // [sp+0h] [bp-60h] BYREF

  if ( dword_471498 == -1 )
    return (char *)sub_327254(a1);
  memset(&v9[1], 0, 0x5Cu);
  if ( (a2 & (unsigned int)&loc_3FF04) != 0 )
    v4 = a2;
  else
    v4 = (unsigned int)&loc_3FF04 & dword_471498;
  if ( (a2 & (unsigned int)&loc_3FF04) != 0 )
    v9[0] = a2;
  else
    v4 |= a2;
  if ( (a2 & (unsigned int)&loc_3FF04) == 0 )
    v9[0] = v4;
  if ( (v4 & (unsigned int)&loc_24100) != 0 )
  {
    v7 = sub_31D9A8(a1);
    v4 = v9[0];
    v5 = (void *)v7;
    if ( (v9[0] & 0x4000) != 0 )
      return (char *)v5;
    if ( v7 )
    {
      if ( sub_32607C() )
      {
        sub_326550(v5);
        return (char *)v5;
      }
      if ( (v9[0] & 0x20000) == 0 )
        return (char *)v5;
      free(v5);
      v4 = v9[0];
    }
    if ( (v4 & 0x20000) != 0 )
      return 0;
  }
  if ( (v4 & 4) == 0 )
    goto LABEL_12;
  v5 = (void *)sub_31D9C4(a1);
  if ( v5 )
    return (char *)v5;
  v4 = v9[0];
LABEL_12:
  if ( (v4 & 0x8000) != 0 )
    return sub_30D9EC(a1);
  if ( (v4 & 0x10000) != 0 )
  {
    v5 = (void *)sub_320DCC(a1, a2);
    if ( v5 )
      return (char *)v5;
  }
  v8 = sub_312FE4(v9, a1);
  sub_30CC94(v9);
  return (char *)v8;
}
