int __fastcall sub_28B738(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r5
  int result; // r0

  dword_48AAA0 |= 0x40u;
  v2 = sub_29334C(a1);
  v3 = dword_48AAA0;
  v4 = v2;
  *(_DWORD *)(a1 + 76) = v2;
  dword_48AAA0 = v3 & 0xFFFFFFBF;
  if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
    return v4;
  result = sub_293580(*(_DWORD *)(a1 + 76), (void *)(a1 + 80));
  *(_DWORD *)(a1 + 76) = result;
  return result;
}
