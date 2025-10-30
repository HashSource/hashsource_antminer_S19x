void *__fastcall sub_21E6D0(int a1)
{
  int *v1; // r6
  void *result; // r0
  int *v4; // r0
  int *v5; // r5
  int v6; // r3
  bool v7; // nf
  int v8; // r0
  int v9; // r8
  int v10; // r7
  int v11; // r11
  int v12; // r10
  int v13; // r9
  int v14; // r9
  unsigned int v15; // r9
  __int64 v16; // r0
  bool v17; // zf
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r3
  int v22; // r3
  char v23; // r1
  int v24; // r10
  int *v25; // r5
  int *v26; // r3
  unsigned int v27; // r2
  int v28; // r0
  int v29; // [sp+0h] [bp-84h]
  unsigned int v30; // [sp+4h] [bp-80h]
  int v31; // [sp+8h] [bp-7Ch]
  unsigned int v32; // [sp+Ch] [bp-78h]
  int v33; // [sp+10h] [bp-74h]
  int v34; // [sp+18h] [bp-6Ch] BYREF
  int v35; // [sp+1Ch] [bp-68h]
  _DWORD v36[2]; // [sp+20h] [bp-64h] BYREF
  _DWORD v37[2]; // [sp+28h] [bp-5Ch] BYREF
  int s[10]; // [sp+30h] [bp-54h] BYREF
  int v39; // [sp+58h] [bp-2Ch]
  _BYTE v40[40]; // [sp+5Ch] [bp-28h] BYREF

  result = memset(s, 0, sizeof(s));
  if ( *(_BYTE *)(a1 + 28) )
    return result;
  v39 = dword_487D2C;
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v40);
  sub_1CD664(*(_DWORD *)a1);
  v4 = sub_C3448(*(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 12));
  v5 = v4;
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 33) & 1) != 0 )
      goto LABEL_5;
    do
    {
      v4 = (int *)((int (*)(void))loc_16474)();
LABEL_5:
      ((void (__fastcall *)(int *, _DWORD))loc_21C1E0)(v4, 0);
    }
    while ( (*((_BYTE *)v5 + 33) & 1) == 0 );
    v6 = *((__int16 *)v5 + 11);
    v7 = v6 < 0;
    if ( v6 >= 0 )
      v6 *= 3;
    v8 = *(_DWORD *)(*(_DWORD *)(v5[7] + 4) + 4);
    if ( v7 )
      v1 = 0;
    v32 = *(_DWORD *)v5[2];
    if ( !v7 )
      v1 = (int *)(*(_DWORD *)(v8 + 168) + 4 * v6);
    v29 = *v5;
  }
  else
  {
    sub_1B23BC(&v34, *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 12));
    if ( !v34 )
      goto LABEL_40;
    v21 = *(__int16 *)(v34 + 22);
    if ( v21 == -1 )
    {
LABEL_86:
      v16 = sub_94700((int)"symtab.c", 3711, "Section index is uninitialized");
LABEL_87:
      ((void (__fastcall *)(_DWORD, _DWORD))loc_21A4BC)(v16, HIDWORD(v16));
      v28 = ((int (__fastcall *)(int))loc_1CD290)(v39);
      sub_338FFC(v28);
    }
    v8 = v35;
    if ( v21 >= 0 )
      v1 = *(int **)(v35 + 168);
    else
      v1 = 0;
    if ( v21 >= 0 )
      v1 += 3 * v21;
    v32 = *(_DWORD *)(v34 + 8) + *(_DWORD *)(*(_DWORD *)(v35 + 144) + 4 * v21);
    v29 = *(_DWORD *)v34;
  }
  v9 = sub_1B7250(v8);
  if ( !v5 )
  {
    v10 = 1;
    goto LABEL_16;
  }
  if ( (*((_BYTE *)v5 + 33) & 1) == 0 )
  {
    ((void (*)(void))loc_21A4BC)();
    goto LABEL_86;
  }
  v10 = (*(_BYTE *)(*(_DWORD *)(v5[7] + 4) + 40) & 1) == 0;
LABEL_16:
  v11 = 2;
  v12 = 1;
  while ( 1 )
  {
    if ( sub_2142A0(v1) && !sub_2142D0(v1) )
      v13 = sub_214714(v32, v1);
    else
      v13 = v32;
    v14 = v13 + ((int (__fastcall *)(int))loc_1696D8)(v9);
    if ( ((int (__fastcall *)(int))loc_168F04)(v9) )
      v14 = ((int (__fastcall *)(int, int))loc_168F50)(v9, v14);
    if ( v12 )
      v14 = sub_B8F00(v9, v14);
    v15 = sub_214778(v14, v1);
    sub_21DF08(s, v15, (int)v1, 0);
    if ( s[5] == v15 )
      v12 = 0;
    v31 = s[1];
    v30 = s[6];
    v33 = s[4];
    if ( v12 )
    {
      if ( v5 )
      {
        v20 = (_DWORD *)v5[2];
        if ( *v20 <= s[6] && v20[1] > s[6] )
        {
LABEL_45:
          sub_21DF08(s, v30, (int)v1, 0);
          v15 = v30;
          v31 = s[1];
          v33 = s[4];
          v30 = s[6];
        }
        goto LABEL_27;
      }
LABEL_72:
      sub_1B23BC(v36, v30, (int)v1);
      v24 = v36[0];
      sub_1B23BC(v37, v15, (int)v1);
      if ( v24 == v37[0] )
        goto LABEL_45;
    }
LABEL_27:
    LODWORD(v16) = ((int (__fastcall *)(int))loc_168DFC)(v9);
    v17 = v29 == 0;
    if ( v29 )
      v17 = (_DWORD)v16 == 0;
    if ( !v17 )
    {
      LODWORD(v16) = sub_25BD2C(v29, "main");
      if ( !(_DWORD)v16 )
      {
        v15 = ((int (__fastcall *)(int, unsigned int))loc_168E48)(v9, v15);
        sub_21DF08(s, v15, (int)v1, 0);
LABEL_48:
        v31 = s[1];
        v33 = s[4];
        v30 = s[6];
        goto LABEL_38;
      }
    }
    if ( v10 )
      goto LABEL_38;
    v12 = 0;
    if ( v11 == 1 )
      break;
    v11 = 1;
  }
  v18 = (int)v5;
  if ( v5 )
    v18 = 1;
  if ( v31 )
    v18 = 0;
  if ( v18 )
  {
    if ( (*((_BYTE *)v5 + 33) & 1) == 0 )
      goto LABEL_87;
    v25 = *(int **)(v5[7] + 8);
    if ( v25 && sub_C37B8(v15, 0, v36, v37) && *v25 > 0 )
    {
      v26 = v25;
      while ( 1 )
      {
        if ( v26[1] > 0 )
        {
          v27 = v26[2];
          if ( v27 >= v36[0] && v27 < v37[0] )
            break;
        }
        ++v10;
        v26 += 2;
        if ( *v25 == v10 )
          goto LABEL_83;
      }
      v15 = v26[2];
    }
LABEL_83:
    sub_21DF08(s, v15, (int)v1, 0);
    goto LABEL_48;
  }
LABEL_38:
  if ( *(_DWORD *)(a1 + 20) >= v15 )
    goto LABEL_40;
  v19 = *(unsigned __int8 *)(a1 + 29);
  *(_DWORD *)(a1 + 20) = v15;
  *(_DWORD *)(a1 + 12) = v1;
  if ( v19 )
    goto LABEL_40;
  *(_DWORD *)(a1 + 4) = v31;
  *(_DWORD *)(a1 + 16) = v33;
  *(_DWORD *)(a1 + 24) = v30;
  v5 = sub_C2550(v15, (int)v1);
  if ( !v5 )
    goto LABEL_40;
  v1 = 0;
  do
  {
    if ( v5[2] )
    {
      if ( sub_C23FC((int)v5) )
      {
        v1 = v5;
      }
      else if ( v5[2] )
      {
        break;
      }
    }
    v5 = (int *)v5[3];
  }
  while ( v5 );
  if ( !v1 )
    goto LABEL_40;
  v22 = v1[2];
  if ( !*(_WORD *)(v22 + 34) )
    goto LABEL_40;
  v23 = *(_BYTE *)(v22 + 33);
  *(_DWORD *)(a1 + 16) = *(unsigned __int16 *)(v22 + 34);
  if ( (v23 & 1) == 0 )
  {
    ((void (*)(void))loc_21A4BC)();
    goto LABEL_72;
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v22 + 28);
LABEL_40:
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v40);
  return (void *)((int (__fastcall *)(int))loc_1CD290)(v39);
}
