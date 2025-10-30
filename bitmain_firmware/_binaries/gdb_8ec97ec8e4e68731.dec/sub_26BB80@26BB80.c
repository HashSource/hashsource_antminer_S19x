_BYTE *__fastcall sub_26BB80(_DWORD *a1)
{
  _BYTE *v1; // r0
  _BYTE *v2; // r4

  v1 = sub_26BB08(a1);
  v2 = v1;
  if ( !*((_DWORD *)v1 + 23) )
    sub_26A9E8((int)(v1 + 68), (_DWORD *)v1 + 23);
  v2[4] &= ~2u;
  return v2;
}
