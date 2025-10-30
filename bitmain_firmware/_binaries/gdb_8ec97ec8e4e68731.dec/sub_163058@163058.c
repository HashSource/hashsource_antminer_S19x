int __fastcall sub_163058(int a1)
{
  int v1; // r12
  unsigned int v2; // r1
  int v3; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 164);
  v2 = *(unsigned __int8 *)(v1 + 32);
  if ( (v2 & 1) != 0 )
    return (v2 >> 1) & 1;
  v3 = *(_DWORD *)(a1 + 100);
  if ( v3 )
  {
    while ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
    {
      v3 = *(_DWORD *)(v3 + 12);
      if ( !v3 )
        goto LABEL_3;
    }
    result = 1;
    *(_BYTE *)(v1 + 32) |= 2u;
  }
  else
  {
LABEL_3:
    result = (v2 >> 1) & 1;
  }
  *(_BYTE *)(v1 + 32) |= 1u;
  return result;
}
