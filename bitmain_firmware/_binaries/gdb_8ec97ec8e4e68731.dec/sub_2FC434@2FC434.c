int __fastcall sub_2FC434(_BYTE *a1, char a2)
{
  int result; // r0
  int v4; // r2
  bool v5; // zf
  bool v6; // zf

  if ( !a1 || *a1 != 36 )
    return 0;
  v4 = (unsigned __int8)a1[1];
  v5 = v4 == 97;
  if ( v4 != 97 )
    v5 = (v4 & 0xEF) == 100;
  if ( v5 )
  {
    result = a2 & 1;
  }
  else
  {
    v6 = v4 == 102;
    if ( v4 != 102 )
      v6 = v4 == 109;
    result = v6;
    if ( v4 == 112 )
      result |= 1u;
    if ( result )
    {
      result = a2 & 2;
    }
    else
    {
      if ( (unsigned int)(v4 - 97) > 0x19 )
        return result;
      result = a2 & 4;
    }
  }
  if ( result )
  {
    result = a1[2] == 46;
    if ( !a1[2] )
      return 1;
  }
  return result;
}
