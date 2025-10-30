unsigned int __fastcall sub_2E2A44(int a1, _DWORD *a2)
{
  int v2; // r3
  int v5; // r8
  unsigned int v6; // r5
  int v7; // r6
  unsigned int result; // r0
  unsigned int v9; // r2
  char v10; // r7
  unsigned int v11; // r12
  _BOOL4 v12; // r1
  unsigned int *v13; // r1
  unsigned int v14; // r3
  unsigned int v15; // r6

  if ( (*(_BYTE *)(a1 + 53) & 0x10) != 0 )
    return 1;
  v2 = *(_DWORD *)(a1 + 68);
  if ( !v2 || !*(_DWORD *)(v2 + 8) )
    return 1;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 3 > 1 )
    sub_2A6BBC("elflink.c", 13236);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 44);
  result = (unsigned int)sub_2E2758(*(_DWORD *)(v5 + 148), v5, 0, 0, 1);
  if ( result )
  {
    v9 = result + 12 * *(_DWORD *)(v5 + 76);
    v10 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 148) + 4) + 444) + 392) + 11);
    if ( result < v9 )
    {
      v11 = v6 + v7;
      do
      {
        while ( 1 )
        {
          v12 = v11 > *(_DWORD *)result;
          if ( v6 > *(_DWORD *)result )
            v12 = 0;
          if ( v12 )
          {
            v13 = *(unsigned int **)(a1 + 68);
            v14 = *(_DWORD *)result - v6;
            v15 = v13[1];
            if ( !v15 || v14 >= *v13 || !*(_DWORD *)(v15 + 4 * (v14 >> v10)) )
              break;
          }
          result += 12;
          if ( v9 <= result )
            return 1;
        }
        *(_DWORD *)(result + 8) = 0;
        result += 12;
        *(_DWORD *)(result - 8) = 0;
        *(_DWORD *)(result - 12) = 0;
      }
      while ( v9 > result );
    }
    return 1;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
