int __fastcall sub_52DB8(char *a1, int a2, int a3, int **a4)
{
  int v8; // r4
  int *v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int *v14; // r6
  char v15; // r2
  __int16 v17; // r2
  int v18; // r5

  v8 = sub_93028(112);
  v9 = sub_52C7C(a1, a4, (_DWORD *)(v8 + 44), (_DWORD *)(v8 + 88), (_DWORD *)(v8 + 48), (_DWORD *)(v8 + 92));
  for ( *(_DWORD *)(v8 + 100) = v9; v9; v9 = (int *)v9[26] )
    v9[24] = v8;
  v10 = *(_DWORD *)(v8 + 44);
  if ( v10 )
    *(_DWORD *)(v10 + 88) = v8;
  v11 = *(_DWORD *)(v8 + 88);
  if ( v11 )
    *(_DWORD *)(v11 + 44) = v8;
  v12 = *(_DWORD *)(v8 + 48);
  if ( v12 )
    *(_DWORD *)(v12 + 92) = v8;
  v13 = *(_DWORD *)(v8 + 92);
  if ( v13 )
    *(_DWORD *)(v13 + 48) = v8;
  v14 = *a4;
  if ( *a4 && strcmp((const char *)v14[1], a1) < 0 )
  {
    while ( 1 )
    {
      v18 = *v14;
      if ( !*v14 || strcmp(*(const char **)(v18 + 4), a1) > 0 )
        break;
      v14 = (int *)v18;
    }
    *(_DWORD *)v8 = v18;
    *v14 = v8;
  }
  else
  {
    *(_DWORD *)v8 = v14;
    *a4 = (int *)v8;
  }
  v15 = *(_BYTE *)(v8 + 12);
  *(_DWORD *)(v8 + 4) = a1;
  *(_DWORD *)(v8 + 8) = a2;
  *(_DWORD *)(v8 + 28) = a3;
  *(_BYTE *)(v8 + 12) = v15 & 0x80;
  v17 = *(_WORD *)(v8 + 12);
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 36) = 0;
  v17 &= 0xFE7Fu;
  *(_DWORD *)(v8 + 40) = 0;
  *(_WORD *)(v8 + 12) = v17;
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 76) = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 84) = 0;
  *(_DWORD *)(v8 + 96) = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 64) = sub_F55E8;
  *(_BYTE *)(v8 + 13) = HIBYTE(v17) & 0xE1;
  return v8;
}
