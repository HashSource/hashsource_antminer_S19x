int __fastcall sub_2CC144(int *a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r3
  int v5; // r4
  unsigned int v6; // lr
  _DWORD *v7; // r3
  int v8; // r2
  int result; // r0
  _DWORD *v10; // r3
  _DWORD *v11; // t1
  unsigned int v13; // [sp+4h] [bp-4h]

  v3 = *a1;
  v5 = *(_DWORD *)(*a1 + 64);
  if ( !a2 )
  {
    v13 = a3;
    sub_2A6BBC("elf.c", 1304);
    v3 = *a1;
    a3 = v13;
  }
  v6 = *(_DWORD *)(v3 + 532);
  if ( v6 > a3 )
  {
    v7 = *(_DWORD **)(v5 + 4 * a3);
    if ( v7 )
    {
      if ( v7[1] == a2[1] && ((v7[2] ^ a2[2]) & 0xFFFFFFBF) == 0 && v7[9] == a2[9] && v7[6] == a2[6] && v7[10] == a2[10] )
        return a3;
    }
  }
  if ( v6 <= 1 )
    return 0;
  v8 = v5;
  result = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD **)(v8 + 4);
      v8 += 4;
      v10 = v11;
      if ( v11 )
      {
        if ( v10[1] == a2[1] && ((v10[2] ^ a2[2]) & 0xFFFFFFBF) == 0 && v10[9] == a2[9] && v10[6] == a2[6] )
          break;
      }
      if ( v6 == ++result )
        return 0;
    }
    if ( v10[10] == a2[10] )
      break;
    if ( v6 == ++result )
      return 0;
  }
  return result;
}
