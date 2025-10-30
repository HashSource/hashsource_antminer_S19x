_BYTE *__fastcall sub_26BC1C(_DWORD *a1)
{
  _BYTE *v2; // r6
  int v3; // r1

  v2 = sub_26BB08(a1);
  ((void (__fastcall *)(_BYTE *, int, _DWORD, _DWORD, int, int))loc_26ACE0)(
    v2 + 100,
    v3,
    0,
    0,
    8 * a1[5],
    (8 * a1[5]) >> 31);
  v2[4] &= ~2u;
  return v2;
}
