bool __fastcall sub_1786F8(_BYTE *a1)
{
  int v3; // r3

  if ( *a1 != 95 )
    return 0;
  v3 = (unsigned __int8)a1[1];
  if ( v3 == 86 )
  {
    if ( a1[2] != 84 )
      return 0;
  }
  else
  {
    if ( v3 != 118 )
      goto LABEL_5;
    if ( a1[2] != 116 )
      return 0;
  }
  if ( sub_10A844((unsigned __int8)a1[3]) )
    return 1;
  if ( *a1 != 95 )
    return 0;
  v3 = (unsigned __int8)a1[1];
LABEL_5:
  if ( v3 != 95 || a1[2] != 118 || a1[3] != 116 )
    return 0;
  return a1[4] == 95;
}
