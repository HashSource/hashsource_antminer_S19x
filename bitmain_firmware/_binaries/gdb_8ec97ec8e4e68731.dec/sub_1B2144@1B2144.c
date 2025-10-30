_DWORD *__fastcall sub_1B2144(int a1, char *s2, _DWORD *a3, int a4)
{
  unsigned int v4; // r6
  char *v5; // lr
  unsigned int v6; // r12
  int v7; // r4
  unsigned int v8; // t1
  _DWORD *v9; // r11
  unsigned int v13; // r6
  _BOOL4 v14; // r9
  int v15; // r3
  int v16; // r4
  int v17; // r2
  int v18; // r3
  int v19; // r10
  __int64 v21; // r0
  int v22; // lr
  unsigned int v23; // r5
  const char *v24; // r7
  _DWORD *v25; // r10
  _DWORD *v26; // r2
  _DWORD *v27; // r8
  unsigned int v28; // r2
  unsigned int v29; // t1
  _DWORD *v30; // r6
  unsigned int v31; // r5
  _BOOL4 v32; // r3
  int i; // r4
  int v34; // [sp-4h] [bp-8h]

  v4 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v5 = s2;
    v6 = 0;
    do
    {
      v7 = byte_438798[v4];
      v8 = (unsigned __int8)*++v5;
      v4 = v8;
      v6 = 67 * v6 - 113 + v7;
    }
    while ( v8 );
    v4 = v6 % 0x7F7;
  }
  v9 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v9 )
    return v9;
  v13 = v4 + 24;
  v14 = a3 == 0;
  while ( 1 )
  {
    v15 = a3 == v9 ? v14 | 1 : v14;
    if ( v15 || (_DWORD *)v9[45] == a3 )
    {
      v16 = *(_DWORD *)(v9[10] + 4 * v13);
      if ( v16 )
        break;
    }
LABEL_8:
    v9 = (_DWORD *)*v9;
    if ( !v9 )
      return v9;
  }
  v17 = *(__int16 *)(v16 + 22);
  v18 = *(_DWORD *)(v16 + 8);
  if ( v17 == -1 )
  {
LABEL_22:
    v21 = sub_94700((int)"minsyms.c", 589, "Section index is uninitialized", v18, a4);
    v34 = v22;
    v23 = (unsigned __int8)*(_BYTE *)HIDWORD(v21);
    v24 = (const char *)HIDWORD(v21);
    v25 = (_DWORD *)v21;
    v27 = v26;
    *(_DWORD *)v21 = 0;
    *(_DWORD *)(v21 + 4) = 0;
    if ( v23 )
    {
      v28 = 0;
      do
      {
        LODWORD(v21) = byte_438798[v23];
        v29 = *(unsigned __int8 *)++HIDWORD(v21);
        v23 = v29;
        v28 = 67 * v28 - 113 + v21;
      }
      while ( v29 );
      v23 = v28 % 0x7F7;
    }
    v30 = *(_DWORD **)(dword_487D2C + 36);
    if ( v30 )
    {
      v31 = v23 + 24;
      do
      {
        v32 = v27 == v30 || v27 == 0;
        if ( v32 || (_DWORD *)v30[45] == v27 )
        {
          for ( i = *(_DWORD *)(v30[10] + 4 * v31); i; i = *(_DWORD *)(i + 36) )
          {
            if ( !strcmp(*(const char **)i, v24) && (*(_BYTE *)(i + 32) & 0xF) == 7 )
            {
              *v25 = i;
              v25[1] = v30;
              __asm { POP             {R4-R10,PC} }
            }
          }
        }
        v30 = (_DWORD *)*v30;
      }
      while ( v30 );
    }
    __asm { POP             {R4-R10,PC} }
  }
  v19 = v9[36];
  while ( v18 + *(_DWORD *)(v19 + 4 * v17) != a1 || strcmp(*(const char **)v16, s2) )
  {
    v16 = *(_DWORD *)(v16 + 36);
    if ( !v16 )
      goto LABEL_8;
    v17 = *(__int16 *)(v16 + 22);
    v18 = *(_DWORD *)(v16 + 8);
    if ( v17 == -1 )
      goto LABEL_22;
  }
  return (_DWORD *)v16;
}
