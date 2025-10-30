int __fastcall sub_18EB8(int a1, int a2, int a3)
{
  int v4; // r6

  if ( *(_WORD *)a2 == 2 )
  {
    v4 = any_interface;
    if ( *(_WORD *)(a2 + 4) == 32639 )
    {
      a3 = loopback_interface;
      goto LABEL_12;
    }
  }
  else
  {
    v4 = any6_interface;
  }
  if ( (*(_BYTE *)(a1 + 72) & 0x36) != 0 )
  {
    a3 = sub_18C28((const struct sockaddr *)a2);
LABEL_12:
    if ( a3 != v4 )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( !a3 || a3 == v4 )
  {
LABEL_15:
    a3 = sub_17B78((const struct sockaddr *)a2);
LABEL_13:
    if ( !a3 )
      return a3;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x80) != 0 )
    return 0;
  return a3;
}
