int __fastcall sub_1122F8(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r5
  int v5; // r6
  int result; // r0

  v2 = ((int (__fastcall *)(_DWORD, int))loc_16EC88)(*(_DWORD *)(a1 + 16), dword_4872D0);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = v2;
  switch ( v3 )
  {
    case 2:
      v5 = 0;
      break;
    case 4:
      v5 = 1;
      break;
    case 8:
      v5 = 2;
      break;
    default:
      sub_946E0("Unsupported address size in DWARF expressions: %d bits", 8 * v3);
  }
  result = *(_DWORD *)(v2 + 4 * v5);
  if ( !result )
  {
    result = sub_1773C4(*(_DWORD *)(a1 + 16), 8 * v3, 0, "<signed DWARF address type>");
    *(_DWORD *)(v4 + 4 * v5) = result;
  }
  return result;
}
