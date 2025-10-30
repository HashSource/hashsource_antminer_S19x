int __fastcall sub_E7454(unsigned int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r4

  v3 = sub_E71A4(a1, 0, 0);
  v4 = (int)v3;
  if ( v3 )
    v4 = ((int (__fastcall *)(_DWORD *, int, _DWORD))loc_E4FE8)(v3, a2, 0);
  sub_E4848();
  return v4;
}
