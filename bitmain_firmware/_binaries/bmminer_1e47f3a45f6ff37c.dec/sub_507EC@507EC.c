unsigned __int8 *__fastcall sub_507EC(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r2
  int v4; // r2
  unsigned __int8 *v5; // r12
  bool v6; // zf
  int v7; // r3
  int v8; // t1

  v2 = (unsigned __int8 *)(a1 + *a2);
  v3 = *v2;
  v4 = v3 == 61 || (v3 & 0xDF) == 0;
  if ( v4 )
    return 0;
  v5 = v2 + 1;
  while ( 1 )
  {
    v8 = *++v5;
    v7 = v8;
    if ( (v8 & 0xDF) == 0 )
      break;
    v6 = v7 == 124;
    if ( v7 != 124 )
      v6 = v7 == 61;
    if ( v6 )
      break;
    ++v4;
  }
  *a2 = v4;
  return v2 + 2;
}
