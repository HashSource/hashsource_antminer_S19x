int __fastcall sub_2B21E8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r8
  int v4; // r5
  int v5; // r3
  unsigned int v6; // r5
  _BYTE var100[280]; // [sp+8h] [bp-100h] BYREF

  if ( sub_2A8A04((int)a1, 0, 0) )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = sub_2A87D8((int)var100, 1u, (int)a1);
      if ( var100[0] == 37 )
        break;
      if ( v2 != 1 )
        return 1;
    }
    if ( v2 != 1 )
      break;
    if ( sub_2A87D8((int)var100, 5u, (int)a1) != 5 )
      return 0;
    v3 = var100[2];
    v4 = (unsigned __int8)aCccccccccccccc[var100[0]];
    if ( v4 == 99 )
      break;
    v5 = (unsigned __int8)aCccccccccccccc[var100[1]];
    if ( v5 == 99 )
      break;
    v6 = v5 - 5 + 16 * v4;
    if ( v6 <= 0xFE && v6 == sub_2A87D8((int)var100, v6, (int)a1) )
    {
      var100[v6] = 0;
      if ( sub_2B17C0(a1, v3, (unsigned int)var100, (unsigned int)&var100[v6]) )
        continue;
    }
    return 0;
  }
  return 1;
}
