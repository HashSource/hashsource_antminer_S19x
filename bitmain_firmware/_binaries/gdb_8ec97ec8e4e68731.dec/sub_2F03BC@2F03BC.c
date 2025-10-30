_DWORD *__fastcall sub_2F03BC(int a1)
{
  _DWORD *result; // r0
  unsigned int v3; // r12
  int v4; // r2
  _DWORD *v5; // r12
  _DWORD *v6; // r3
  int v7; // t1

  result = sub_2AB368(4 * (*(_DWORD *)(a1 + 28) + 1));
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 28);
    *result = v3;
    if ( v3 > 1 )
    {
      v4 = *(_DWORD *)(a1 + 40);
      v5 = &result[v3];
      v6 = result + 1;
      do
      {
        v7 = *(_DWORD *)(v4 + 4);
        v4 += 4;
        v6[1] = *(_DWORD *)(v7 + 16);
        ++v6;
      }
      while ( v6 != v5 );
    }
  }
  return result;
}
