int __fastcall sub_1B7AA4(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r3

  if ( !a1 )
    return 0;
  v2 = a1;
  while ( 1 )
  {
    v3 = v2[33];
    if ( v3 )
    {
      if ( (v2[3] & 0x10) == 0 && *(_DWORD *)(v3 + 12) || (**(int (***)(void))(v3 + 40))() )
        break;
    }
    if ( v2[5] )
      break;
    v2 = (_DWORD *)((int (__fastcall *)(_DWORD *, _DWORD *))loc_1B7308)(a1, v2);
    if ( !v2 )
      return 0;
  }
  return 1;
}
