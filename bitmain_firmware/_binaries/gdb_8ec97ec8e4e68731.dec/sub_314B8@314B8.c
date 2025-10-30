int __fastcall sub_314B8(int a1, int a2, _DWORD **a3, char a4)
{
  int v4; // r7
  int v7; // r10
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  int v12; // r8
  int v13; // r5
  int v15; // r0
  int v16; // r0
  const char *v17; // r5
  int v18; // r0
  const char *v19; // r0
  char *ptr; // [sp+8h] [bp-14h]
  int v22; // [sp+10h] [bp-Ch] BYREF
  char *src; // [sp+14h] [bp-8h] BYREF

  v4 = a1;
  if ( !a1 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    v9 = sub_93094(1, 0x428u);
    v10 = (_DWORD *)sub_313A0(v4);
    v11 = v10;
    *(_DWORD *)(v9 + 4) = v10;
    if ( !v10 )
      break;
    v12 = v10[5];
    if ( v10[6] != a2 )
    {
      v16 = sub_16F654();
      v17 = (const char *)sub_25AC8C(v16, a2);
      v18 = sub_16F654();
      v19 = (const char *)sub_25AC8C(v18, v11[6]);
      sub_946B0("Corrupted shared library list: %s != %s", v17, v19);
      break;
    }
    if ( a2 )
      v13 = 0;
    else
      v13 = a4 & 1;
    if ( v13 )
    {
      v15 = sub_31060();
      v7 = v11[7];
      *(_DWORD *)(v15 + 16) = v11[3];
      goto LABEL_6;
    }
    ((void (__fastcall *)(_DWORD, char **, int, int *))loc_230078)(v10[7], &src, 511, &v22);
    if ( v22 )
    {
      if ( !v7 || v11[7] != v7 )
      {
        v8 = sub_6FF98(v22);
        sub_946B0("Can't read pathname for load map: %s.", v8);
      }
LABEL_6:
      a2 = v4;
      sub_200A30(v9);
      if ( !v12 )
        return 1;
      goto LABEL_7;
    }
    ptr = src;
    strncpy((char *)(v9 + 520), src, 0x1FFu);
    *(_BYTE *)(v9 + 1031) = 0;
    strcpy((char *)(v9 + 8), (const char *)(v9 + 520));
    free(ptr);
    if ( !*(_BYTE *)(v9 + 520) || !strcmp((const char *)(v9 + 520), "main_$main") )
      goto LABEL_6;
    *(_DWORD *)v9 = 0;
    a2 = v4;
    **a3 = v9;
    *a3 = (_DWORD *)v9;
    if ( !v12 )
      return 1;
LABEL_7:
    v4 = v12;
  }
  sub_200A30(v9);
  return 0;
}
