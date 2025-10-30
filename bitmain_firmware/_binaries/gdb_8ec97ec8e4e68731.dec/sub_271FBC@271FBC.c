int __fastcall sub_271FBC(_DWORD *a1)
{
  int v1; // r3
  int v4; // r3

  v1 = a1[21];
  if ( v1 != -1 )
    return v1 & ~(v1 >> 31);
  if ( *(_DWORD *)(a1[38] + 8) )
  {
    ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))loc_271AE8)(a1, 0, 0, 0, 0);
    v4 = a1[21];
  }
  else
  {
    v4 = (**(int (***)(void))(a1[26] + 36))();
    a1[21] = v4;
  }
  return v4 & ~(v4 >> 31);
}
