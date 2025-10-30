int __fastcall sub_4E744(unsigned __int8 *a1, _WORD *a2)
{
  __int16 v2; // r3
  __int16 v3; // r2
  __int16 v5; // r12
  __int16 v6; // r4
  __int16 v7; // r5
  __int16 v8; // r0
  unsigned __int16 v9; // r3
  unsigned __int16 v10; // r5
  unsigned int v11; // r2
  bool v12; // cc
  int v13; // r0

  v2 = a1[88] - 48;
  if ( (unsigned __int8)v2 > 9u )
    return 0;
  v3 = a1[89] - 48;
  if ( (unsigned __int8)v3 > 9u )
    return 0;
  v5 = a1[90] - 48;
  if ( (unsigned __int8)v5 > 9u )
    return 0;
  v6 = a1[91] - 48;
  if ( (unsigned __int8)v6 > 9u )
    return 0;
  v7 = a1[92] - 48;
  if ( (unsigned __int8)v7 > 9u )
    return 0;
  v8 = a1[93] - 48;
  if ( (unsigned __int8)v8 > 9u )
    return 0;
  v9 = v3 + 10 * v2;
  v10 = v8 + 10 * v7;
  v11 = (unsigned __int16)(v6 + 10 * v5);
  v12 = v11 > 0x3C;
  if ( v11 <= 0x3C )
    v12 = v9 > 0x17u;
  a2[23] = v9;
  v13 = v12;
  if ( v10 > 0x3Cu )
    v13 |= 1u;
  a2[25] = v11;
  a2[24] = v10;
  return v13 ^ 1;
}
