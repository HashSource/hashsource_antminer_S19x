int __fastcall sub_23504(int a1)
{
  int v1; // r12
  __int16 v2; // r3

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
  if ( (*(_BYTE *)(a1 + 72) & 0x1E) != 0 )
    v2 |= 8u;
  return *(_BYTE *)(a1 + 73) & 0xF | (unsigned __int8)(16 * *(_BYTE *)(a1 + 74)) | (unsigned __int16)(v2 << 8);
}
