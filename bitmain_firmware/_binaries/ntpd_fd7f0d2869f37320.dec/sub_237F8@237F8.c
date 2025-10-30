int __fastcall sub_237F8(int a1)
{
  int v1; // r12
  __int16 v2; // r2
  bool v3; // zf
  char v4; // r3
  char v5; // r0

  v1 = *(_DWORD *)(a1 + 68);
  v2 = *(unsigned __int8 *)(a1 + 296);
  if ( (v1 & 1) != 0 )
    v2 |= 0x80u;
  if ( *(_DWORD *)(a1 + 124) )
    v2 |= 0x40u;
  if ( (v1 & 4) != 0 )
    v2 |= 0x20u;
  if ( *(_BYTE *)(a1 + 298) )
    v2 |= 0x10u;
  v3 = (*(_BYTE *)(a1 + 72) & 0x1E) == 0;
  v4 = *(_BYTE *)(a1 + 74);
  v5 = *(_BYTE *)(a1 + 73);
  if ( !v3 )
    v2 |= 8u;
  return v5 & 0xF | (unsigned __int8)(16 * v4) | (unsigned __int16)(v2 << 8);
}
