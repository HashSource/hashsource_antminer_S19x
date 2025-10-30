_DWORD *__fastcall sub_1CDD20(int a1, int a2)
{
  _DWORD *result; // r0
  unsigned int v4; // r12
  int v5; // r2
  int v6; // r3
  unsigned int v7; // r6
  unsigned int v8; // lr

  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    v4 = *(_DWORD *)(a1 + 4);
    v5 = result[2];
    while ( 1 )
    {
      v6 = v5 - a2;
      v7 = (v5 - a2) & v4;
      v5 = *(_DWORD *)(result[1] + 8);
      if ( ((v5 - a2) & v4) >= v7 )
        break;
      result = (_DWORD *)result[1];
    }
    while ( 1 )
    {
      v8 = v6 & v4;
      v6 = *(_DWORD *)(*result + 8) - a2;
      if ( (v6 & v4) >= v8 )
        break;
      result = (_DWORD *)*result;
    }
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
