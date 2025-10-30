char *__fastcall sub_1316E0(int a1, int *a2)
{
  int i; // r6
  int v4; // r5
  int v5; // r7
  char *v7; // r7
  int v8; // r2
  bool v9; // cc
  int v10; // r3
  const char *v11; // r2
  int v12; // r0
  bool v13; // zf
  char v14; // r3

  for ( i = a1;
        (*(_BYTE *)(a1 + 6) & 0x10) != 0;
        a1 = sub_131198(*(_DWORD *)(a1 + 36), (*(unsigned __int8 *)(a1 + 7) >> 6) & 1, a2) )
  {
    ;
  }
  v4 = *(_DWORD *)(a1 + 40);
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(v4 + 7) & 1) != 0 )
    return *(char **)(v4 + 16);
  if ( (*(_BYTE *)(v4 + 7) & 0x10) == 0 )
    sub_131344(*(_DWORD *)(a1 + 40), a2);
  v7 = (char *)sub_1316E0(v4, a2);
  if ( a2[16] == 4 && *(_WORD *)(v4 + 4) == 57 )
  {
    v12 = strcmp(*(const char **)(v4 + 8), "::");
    v13 = v7 == 0;
    if ( !v7 )
      v13 = v12 == 0;
    if ( v13 )
    {
      v14 = *(_BYTE *)(v4 + 7);
      v5 = 0;
      *(_DWORD *)(v4 + 16) = 0;
      *(_BYTE *)(v4 + 7) = v14 | 1;
      return (char *)v5;
    }
  }
  if ( *(_WORD *)(i + 4) != 40 )
  {
    v8 = *(unsigned __int16 *)(v4 + 4);
    v9 = (v8 & 0xFFFBu) > 0x13;
    if ( (v8 & 0xFFFB) != 0x13 )
      v9 = (unsigned int)(v8 - 56) > 1;
    v10 = !v9;
    if ( v8 == 30 )
      v10 |= 1u;
    if ( ((v8 - 2) & 0xFFFD) == 0 )
      v10 = 1;
    if ( v10 )
    {
      v11 = *(const char **)(v4 + 8);
      if ( v7 )
      {
        v7 = (char *)sub_122248((int)(a2 + 22), v7, v11, 0, a2 + 16);
        *(_DWORD *)(v4 + 16) = v7;
      }
      else
      {
        *(_DWORD *)(v4 + 16) = v11;
        v7 = (char *)v11;
      }
      goto LABEL_24;
    }
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "unhandled containing DIE tag %d for DIE at %d", v8, *(_DWORD *)i);
  }
  *(_DWORD *)(v4 + 16) = v7;
LABEL_24:
  *(_BYTE *)(v4 + 7) |= 1u;
  return v7;
}
