int __fastcall sub_280F64(void *a1)
{
  int v2; // r5

  dword_48AAA0 |= 0x40u;
  v2 = sub_29334C(a1);
  dword_48AAA0 &= ~0x40u;
  if ( v2 < 0 )
    return -1;
  if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
    return v2;
  return sub_293580(v2, a1);
}
