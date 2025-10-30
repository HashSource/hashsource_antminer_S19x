int __fastcall sub_4F82C(unsigned __int8 *a1, _WORD *a2)
{
  __int16 v2; // r3
  __int16 v3; // r2
  unsigned int v4; // r12
  __int16 v5; // r3
  __int16 v6; // r2
  bool v7; // cc
  int v8; // r3
  int v9; // r0

  v2 = a1[88] - 48;
  if ( (unsigned __int8)v2 > 9u )
    return 0;
  v3 = a1[89] - 48;
  if ( (unsigned __int8)v3 > 9u
    || (unsigned int)a1[90] - 48 > 9
    || (unsigned int)a1[91] - 48 > 9
    || (unsigned int)a1[92] - 48 > 9
    || (unsigned int)a1[93] - 48 > 9 )
  {
    return 0;
  }
  v4 = (unsigned __int16)(v3 + 10 * v2);
  a2[23] = v4;
  v5 = a1[91] - 48 + 10 * (a1[90] - 48);
  a2[25] = v5;
  v6 = a1[93] - 48 + 10 * (a1[92] - 48);
  a2[24] = v6;
  v7 = v6 <= 60;
  if ( v6 <= 60 )
    v7 = v5 <= 60;
  v8 = !v7;
  if ( v4 > 0x17 )
    v9 = v8 | 1;
  else
    v9 = v8;
  return v9 ^ 1;
}
