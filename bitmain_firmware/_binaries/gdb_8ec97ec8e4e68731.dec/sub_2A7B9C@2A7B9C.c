int __fastcall sub_2A7B9C(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        char a5,
        int a6,
        char a7,
        char a8,
        int a9,
        void *src)
{
  unsigned __int64 v11; // r6
  int v14; // r0
  int v15; // r4
  char v16; // r3
  int *v17; // r2

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 )
    return 1;
  v11 = __PAIR64__(a4, a2);
  v14 = sub_2AD09C(a1, 4 * a9 + 40);
  v15 = v14;
  if ( !v14 )
    return 0;
  v16 = *(_BYTE *)(v14 + 32);
  *(_QWORD *)(v14 + 4) = v11;
  *(_DWORD *)(v14 + 12) = a6;
  *(_DWORD *)(v14 + 36) = a9;
  *(_BYTE *)(v14 + 32) = v16 & 0xCC | a3 & 1 | (2 * (a5 & 1)) & 0xCF | (16 * (a7 & 1)) & 0xDF | (32 * (a8 & 1));
  if ( a9 )
    memcpy((void *)(v14 + 40), src, 4 * a9);
  v17 = **(int ***)(*(_DWORD *)(a1 + 160) + 2348);
  if ( v17 )
  {
    while ( *v17 )
      v17 = (int *)*v17;
  }
  else
  {
    v17 = *(int **)(*(_DWORD *)(a1 + 160) + 2348);
  }
  *v17 = v15;
  return 1;
}
