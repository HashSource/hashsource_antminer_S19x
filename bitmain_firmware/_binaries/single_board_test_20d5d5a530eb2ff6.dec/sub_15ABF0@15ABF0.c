bool __fastcall sub_15ABF0(int a1, int a2, int a3)
{
  int v3; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3

  v3 = a2 << 25;
  if ( (a2 & 0x40) != 0 )
  {
    if ( !sub_15B6B8(a1, a2, a3, v3) )
      return 0;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_3:
      v6 = a2 << 31;
      if ( (a2 & 1) == 0 )
        goto LABEL_4;
      goto LABEL_17;
    }
  }
  else if ( (a2 & 0x80) == 0 )
  {
    goto LABEL_3;
  }
  if ( !sub_15B7D0(a1, a2, a3, v3) )
    return 0;
  v6 = a2 << 31;
  if ( (a2 & 1) != 0 )
  {
LABEL_17:
    if ( !sub_15B9A8(a1, v6, a3, v3) )
      return 0;
  }
LABEL_4:
  v7 = a2 << 30;
  if ( (a2 & 2) != 0 && !sub_CF118(a1) )
    return 0;
  v8 = a2 << 29;
  if ( (a2 & 4) != 0 )
  {
    if ( sub_CF050(a1) )
    {
      if ( (a2 & 0x800) == 0 )
        goto LABEL_7;
      goto LABEL_21;
    }
    return 0;
  }
  if ( (a2 & 0x800) == 0 )
    goto LABEL_7;
LABEL_21:
  if ( !sub_CF1E0(a1) )
    return 0;
LABEL_7:
  if ( (a2 & 8) != 0 && !sub_15B8E0(a1, a2 << 28, v7, v8) || (a2 & 0x200) != 0 && !sub_CF2B0(a1) )
    return 0;
  return (a2 & 0x400) == 0 || sub_CEDAC(a1) != 0;
}
