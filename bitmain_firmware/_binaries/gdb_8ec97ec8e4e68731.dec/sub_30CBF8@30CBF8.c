int __fastcall sub_30CBF8(unsigned __int8 **a1, _DWORD *a2)
{
  int v2; // lr
  int v3; // r3
  int v4; // r2
  int v5; // r12
  int v6; // r3
  int v7; // r2
  int v9; // lr

  v2 = (int)*a1;
  v3 = **a1;
  v4 = word_438898[v3] & 4;
  if ( !v4 )
    return v4;
  v5 = v2 + 1;
  v6 = v3 - 48;
  *a2 = v6;
  *a1 = (unsigned __int8 *)(v2 + 1);
  v7 = *(unsigned __int8 *)(v2 + 1);
  if ( (word_438898[v7] & 4) == 0 )
    return 1;
  while ( 1 )
  {
    v9 = v7 - 48;
    v7 = *(unsigned __int8 *)(v5 + 1);
    v6 = v9 + 10 * v6;
    if ( (word_438898[v7] & 4) == 0 )
      break;
    ++v5;
  }
  if ( v7 != 95 )
    return 1;
  *a1 = (unsigned __int8 *)(v5 + 2);
  *a2 = v6;
  return 1;
}
