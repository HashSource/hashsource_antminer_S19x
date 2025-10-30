int __fastcall sub_2958C4(int a1)
{
  int v2; // r0
  __int32_t v3; // r5
  int v4; // r6

  dword_48AAA0 |= 0x40u;
  v2 = sub_29334C();
  v3 = (unsigned __int8)v2;
  v4 = v2;
  if ( v2 != (unsigned __int8)v2 )
    v3 = v2;
  dword_48AAA0 &= ~0x40u;
  if ( v2 == (unsigned __int8)v2 && ((*_ctype_b_loc())[v2] & 0x200) != 0 )
    v3 = (*_ctype_toupper_loc())[v4];
  switch ( v3 )
  {
    case 'A':
      sub_2974E4(a1, v4);
      return 0;
    case 'B':
      sub_2975E4(a1, v4);
      return 0;
    case 'C':
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      {
        sub_2952A4(a1);
        return 0;
      }
      sub_295408(a1, v4);
      return 0;
    case 'D':
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      {
        sub_295244(a1);
        return 0;
      }
      else
      {
        sub_29534C(a1, v4);
        return 0;
      }
    default:
      sub_2945C8();
      return 0;
  }
}
