int __fastcall sub_1B2970(int a1, unsigned int a2)
{
  int v3; // r2
  const char **v4; // r5
  _DWORD *v5; // r6
  int v6; // r4
  const char *v7; // r0
  const char *v8; // t1
  int v9; // r3
  int v10; // r3
  int result; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r3
  const char *v16; // t1
  _DWORD v17[3]; // [sp+0h] [bp-Ch] BYREF

  v3 = ((int (__fastcall *)(unsigned int))loc_1B7C78)(a2);
  if ( !v3 )
    return 0;
  sub_1B0D68(v17, a2, v3, 1);
  v4 = (const char **)v17[0];
  if ( !v17[0] )
    return 0;
  if ( (*(_BYTE *)(v17[0] + 32) & 0xF) != 7 )
    return 0;
  v5 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5[10] + 80);
    v7 = *(const char **)v6;
    if ( *(_DWORD *)v6 )
      break;
LABEL_19:
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE *)(v6 + 32) & 0xF;
      if ( (unsigned int)(v9 - 1) <= 1 )
        break;
      if ( v9 != 4 || strcmp(v7, *v4) )
        goto LABEL_9;
      v12 = sub_1B7250(v5);
      v13 = *(__int16 *)(v6 + 22);
      if ( v13 == -1 )
        goto LABEL_22;
      result = ((int (__fastcall *)(int, int, int *))loc_169ED8)(
                 v12,
                 *(_DWORD *)(v6 + 8) + *(_DWORD *)(v5[36] + 4 * v13),
                 &dword_4899A0);
      v14 = *(__int16 *)(v6 + 22);
      v15 = *(_DWORD *)(v6 + 8);
      if ( v14 == -1 )
      {
        sub_94700((int)"minsyms.c", 1521, "Section index is uninitialized", v15);
LABEL_22:
        sub_94700((int)"minsyms.c", 1517, "Section index is uninitialized");
LABEL_23:
        sub_94700((int)"minsyms.c", 1506, "Section index is uninitialized");
        JUMPOUT(0x1B2B18);
      }
      if ( v15 + *(_DWORD *)(v5[36] + 4 * v14) != result )
        return result;
      v16 = *(const char **)(v6 + 48);
      v6 += 48;
      v7 = v16;
      if ( !v16 )
        goto LABEL_19;
    }
    if ( !strcmp(v7, *v4) )
      break;
LABEL_9:
    v8 = *(const char **)(v6 + 48);
    v6 += 48;
    v7 = v8;
    if ( !v8 )
      goto LABEL_19;
  }
  v10 = *(__int16 *)(v6 + 22);
  if ( v10 == -1 )
    goto LABEL_23;
  return *(_DWORD *)(v6 + 8) + *(_DWORD *)(v5[36] + 4 * v10);
}
