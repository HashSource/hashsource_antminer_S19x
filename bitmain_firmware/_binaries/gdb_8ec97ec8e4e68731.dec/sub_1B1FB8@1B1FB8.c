_DWORD *__fastcall sub_1B1FB8(_DWORD *a1, char *s2, _DWORD *a3)
{
  const char *v3; // r5
  unsigned int v4; // r4
  unsigned int v7; // r3
  int v8; // r2
  unsigned int v9; // t1
  _DWORD *v10; // r11
  _DWORD *v11; // r9
  _BOOL4 v12; // r3
  _DWORD *v13; // r6
  int v14; // r4
  char v15; // r3
  bool v16; // cc
  unsigned int v18; // [sp+4h] [bp-10h]
  int v19; // [sp+8h] [bp-Ch]
  _DWORD *v20; // [sp+Ch] [bp-8h]

  v3 = s2;
  v4 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v7 = 0;
    do
    {
      v8 = byte_438798[v4];
      v9 = (unsigned __int8)*++s2;
      v4 = v9;
      v7 = 67 * v7 - 113 + v8;
    }
    while ( v9 );
    v4 = v7 % 0x7F7;
  }
  v10 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v10 )
  {
    v11 = 0;
    v19 = 0;
LABEL_29:
    *a1 = v19;
    a1[1] = v11;
    return a1;
  }
  v11 = 0;
  v18 = v4 + 24;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v12 = a3 == v10 || a3 == 0;
    v13 = (_DWORD *)*v10;
    if ( !v12 && (_DWORD *)v10[45] != a3 || (v14 = *(_DWORD *)(v10[10] + 4 * v18)) == 0 )
    {
      if ( !v13 )
        goto LABEL_29;
      goto LABEL_9;
    }
    do
    {
      if ( !strcmp(*(const char **)v14, v3) )
      {
        v15 = *(_BYTE *)(v14 + 32);
        v16 = (v15 & 0xFu) > 8;
        if ( (v15 & 0xF) != 8 )
          v16 = (v15 & 0xFu) - 1 > 1;
        if ( !v16 )
        {
          if ( (v15 & 0xF) != 8 )
            goto LABEL_23;
          v11 = v10;
          v19 = v14;
        }
      }
      v14 = *(_DWORD *)(v14 + 36);
    }
    while ( v14 );
    v10 = v20;
LABEL_23:
    if ( !v13 )
      break;
    if ( v14 )
      goto LABEL_27;
    v20 = v10;
LABEL_9:
    v10 = v13;
  }
  if ( !v14 )
    goto LABEL_29;
LABEL_27:
  *a1 = v14;
  a1[1] = v10;
  return a1;
}
