int __fastcall sub_290F38(int result)
{
  int v1; // r3
  int v2; // r3
  __int16 v3; // r4
  size_t v4; // r1
  char v5; // [sp+4h] [bp-14h] BYREF
  char v6; // [sp+5h] [bp-13h]
  char v7; // [sp+6h] [bp-12h]

  if ( !dword_48B6A8 || !dword_46DEF0 )
    return result;
  switch ( result )
  {
    case 3:
      v1 = dword_48B6B0;
      goto LABEL_9;
    case 20:
      v1 = dword_48B6B4;
LABEL_9:
      if ( v1 > 31 )
      {
        if ( v1 == 127 )
        {
          LOBYTE(v3) = 63;
          v5 = 94;
LABEL_19:
          v6 = v3;
          v7 = 0;
          v4 = 2;
          return sub_294504((int)&v5, v4);
        }
      }
      else if ( (v1 & 0x80) == 0 )
      {
        v2 = v1 | 0x40;
        v3 = (unsigned __int8)v2;
        v5 = 94;
        if ( (unsigned __int8)v2 == v2 && ((*_ctype_b_loc())[(unsigned __int8)v2] & 0x200) != 0 )
          LOBYTE(v3) = (*_ctype_toupper_loc())[v3];
        goto LABEL_19;
      }
      v4 = 1;
      v5 = v1;
      v6 = 0;
      return sub_294504((int)&v5, v4);
    case 2:
      v1 = dword_48B6AC;
      goto LABEL_9;
  }
  return result;
}
