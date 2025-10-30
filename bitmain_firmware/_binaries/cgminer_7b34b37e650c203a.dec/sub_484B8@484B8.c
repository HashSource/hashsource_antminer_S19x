int __fastcall sub_484B8(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r4
  __int64 v5; // r0
  size_t v6; // r2
  unsigned int v7; // r3
  int v8; // r2
  int v9; // r12
  unsigned int *v10; // r2
  unsigned int v11; // r1

  if ( !a1 )
    return -1;
  v3 = *a1 != 1 || a2 == 0;
  if ( v3 || *a2 != 1 || !sub_47F80(a1, a2[3], 1) )
    return -1;
  v5 = *(_QWORD *)(a2 + 3);
  v6 = a2[3];
  if ( (_DWORD)v5 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(HIDWORD(v5) + 4 * v7);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 4);
        v10 = (unsigned int *)(v8 + 4);
        if ( v9 != -1 )
        {
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 + 1, v10) );
          __dmb(0xBu);
          v5 = *(_QWORD *)(a2 + 3);
        }
      }
      ++v7;
    }
    while ( (unsigned int)v5 > v7 );
    v6 = 4 * v5;
  }
  memcpy((void *)(a1[4] + 4 * a1[3]), (const void *)HIDWORD(v5), v6);
  a1[3] += a2[3];
  return 0;
}
