int __fastcall sub_15E3A4(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r2
  int result; // r0

  if ( a3 > 0x1C )
    return 0;
  v3 = 20 * a3;
  if ( a1 )
    *a1 = *(_DWORD *)((char *)&unk_219CAC + v3);
  if ( !a2 )
    return 1;
  result = 1;
  *a2 = *(_DWORD *)((char *)&unk_219CAC + v3 + 4);
  return result;
}
