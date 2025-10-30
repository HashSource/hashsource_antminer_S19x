int sub_21208()
{
  int result; // r0
  _DWORD v1[74]; // [sp+4h] [bp-128h] BYREF

  sub_6DD44(v1);
  if ( dword_21B3A0 != 255 )
    return sub_1E8E8(dword_21B3A0);
  if ( *(_BYTE *)(dword_223680 + 261) )
  {
    if ( v1[0] && (sub_1E8E8(0) || sub_1E8E8(1) || sub_1E8E8(2)) )
      goto LABEL_8;
  }
  else if ( v1[0] == 1 )
  {
    if ( v1[1] != 3 )
      return (unsigned __int8)byte_2333A8[0];
  }
  else if ( v1[0] )
  {
LABEL_8:
    byte_2333A8[0] = 1;
    return 1;
  }
  result = 0;
  byte_2333A8[0] = 0;
  return result;
}
