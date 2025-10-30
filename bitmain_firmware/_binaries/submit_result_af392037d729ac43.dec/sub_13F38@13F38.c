int __fastcall sub_13F38(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  _DWORD *i; // r1
  int v7; // r4
  unsigned int *v8; // r5
  unsigned int v9; // r1

  if ( !a1 || *a1 != 1 || !a2 || *a2 != 1 || !sub_13D64(a1, a2[3], 1) )
    return -1;
  v4 = a2[3];
  v5 = 0;
  for ( i = (_DWORD *)a2[4]; v4 > v5; ++v5 )
  {
    v7 = i[v5];
    v8 = (unsigned int *)(v7 + 4);
    if ( v7 && *(_DWORD *)(v7 + 4) != -1 )
    {
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      __dmb(0xFu);
      i = (_DWORD *)a2[4];
      v4 = a2[3];
    }
  }
  memcpy((void *)(a1[4] + 4 * a1[3]), i, 4 * v4);
  a1[3] += a2[3];
  return 0;
}
