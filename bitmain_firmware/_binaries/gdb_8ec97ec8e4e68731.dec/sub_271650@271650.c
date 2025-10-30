int __fastcall sub_271650(int a1)
{
  int v1; // r3
  int v2; // r4
  _DWORD *v4; // r0

  v1 = *(_DWORD *)(a1 + 104);
  v2 = *(unsigned __int8 *)(v1 + 33);
  if ( !*(_BYTE *)(v1 + 33) )
    return 0;
  if ( !*(_DWORD *)(a1 + 80) )
    return 0;
  nullsub_31();
  if ( !*v4 )
    return 0;
  switch ( **(_BYTE **)(sub_270624(a1) + 24) )
  {
    case 2:
    case 3:
    case 4:
    case 7:
    case 0xF:
      return 0;
    default:
      return v2;
  }
}
