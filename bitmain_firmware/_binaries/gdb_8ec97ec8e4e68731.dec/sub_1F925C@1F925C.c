int __fastcall sub_1F925C(int a1)
{
  int v1; // r4
  int v2; // r5
  const char *v3; // r6
  int result; // r0
  int v5; // r3
  int v6; // r2
  _BYTE *v7; // r1

  v1 = *(__int16 *)(a1 + 4);
  if ( !*(_WORD *)(a1 + 4) )
    return *(__int16 *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(const char **)(v2 + 16);
  result = strncmp(v3, "RUST$ENCODED$ENUM$", 0x12u);
  if ( !result )
    return result;
  if ( v1 > 0 )
  {
    result = *(unsigned __int8 *)v3;
    if ( !*v3 )
      return result;
    v5 = v2;
    v6 = 0;
    while ( ++v6 != v1 )
    {
      v7 = *(_BYTE **)(v5 + 40);
      v5 += 24;
      result = (unsigned __int8)*v7;
      if ( !*v7 )
        return result;
    }
  }
  return 1;
}
