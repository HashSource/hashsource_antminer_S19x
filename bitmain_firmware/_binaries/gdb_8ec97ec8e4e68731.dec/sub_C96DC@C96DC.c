int __fastcall sub_C96DC(int a1, int a2)
{
  _DWORD *v3; // r4
  int result; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r7
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r0
  void *v12; // r0
  void *v13; // r12
  int v14; // r3
  void *v15; // r0
  void *v16; // r3
  void *v17; // r12
  void *v18; // r0
  int v19; // r3
  void *v20; // r3
  __int64 v21; // r2
  int v22; // r0
  int v23; // r10
  void *v24; // r3
  int v25; // r0
  int v26; // r2
  int v27; // r3
  int v28; // r3
  int v29; // r0
  int *v30; // r1
  _DWORD *v31; // r11
  int v32; // r0
  int v33; // r0
  bool v34; // nf
  int v35; // r3
  int v36; // r7
  int v37; // r3
  int v38; // r8
  int v39; // r8
  int v40; // r0
  void *j; // r7
  int v42; // r8
  int v43; // r6
  int v44; // r0
  int v45; // r4
  int v46; // r10
  int v47; // r0
  int v48; // r0
  int v49; // r7
  __int64 v50; // r0
  int v51; // r8
  int v52; // r2
  _DWORD *v53; // r3
  void *v54; // r0
  int v55; // r3
  bool v56; // zf
  int v57; // r11
  _DWORD *v58; // r7
  _BOOL4 v59; // r3
  int i; // r9
  unsigned int v61; // r5
  int v62; // [sp+Ch] [bp-38h]
  int v63; // [sp+Ch] [bp-38h]
  int v64; // [sp+10h] [bp-34h]
  _DWORD *v65; // [sp+14h] [bp-30h]
  int v66; // [sp+1Ch] [bp-28h] BYREF
  void *v67; // [sp+20h] [bp-24h] BYREF
  void *v68; // [sp+24h] [bp-20h] BYREF
  void *ptr; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v70[6]; // [sp+2Ch] [bp-18h] BYREF

  v3 = (_DWORD *)a1;
  result = sub_C7798(a1);
  if ( !result || v3[5] == 1 )
    return result;
  v6 = v3[37];
  if ( v6 )
  {
    v7 = sub_15F70C(result, v5);
    v8 = sub_15ECB4(v7);
    v9 = sub_15DDFC(v7);
    result = ((int (__fastcall *)(int, int))loc_16A5F0)(v8, v9);
    if ( result )
      return result;
    v10 = sub_15F7E8(0);
    ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v70, v10);
    v11 = sub_15FE8C(v3[44], v3[45], v3[46], v3[47], v3[48]);
    if ( !v11 )
    {
      v3[7] = 0;
      if ( sub_22EBBC(0) )
      {
        sub_259F10(
          "Watchpoint %d deleted because the program has left the block\nin which its expression is valid.\n",
          v3[6]);
        ((void (__fastcall *)(_DWORD *))loc_C9340)(v3);
      }
      else if ( !dword_478370 )
      {
        v6 = 1;
        goto LABEL_23;
      }
LABEL_63:
      v40 = sub_15FE8C(v70[0], v70[1], v70[2], v70[3], v70[4]);
      return sub_15E10C(v40);
    }
    v6 = 1;
    result = sub_15E10C(v11);
  }
  v3[7] = 0;
  if ( a2 )
  {
    v12 = (void *)v3[36];
    v3[36] = 0;
    if ( v12 )
      free(v12);
    v13 = (void *)v3[35];
    v14 = v3[37];
    if ( !v13 )
      v13 = (void *)v3[34];
    v68 = v13;
    sub_1C427C(&ptr, &v68, 0, v14, 0);
    v15 = (void *)v3[36];
    v16 = ptr;
    ptr = 0;
    v3[36] = v16;
    if ( v15 )
    {
      free(v15);
      if ( ptr )
        free(ptr);
    }
    result = ((int (__fastcall *)(_DWORD))loc_26C200)(v3[40]);
    v17 = (void *)v3[25];
    v3[40] = 0;
    v3[41] = 0;
    if ( v17 )
    {
      v18 = (void *)v3[38];
      v3[38] = 0;
      if ( v18 )
      {
        free(v18);
        v17 = (void *)v3[25];
      }
      v19 = v3[39];
      v68 = v17;
      sub_1C427C(&ptr, &v68, 0, v19, 0);
      result = v3[38];
      v20 = ptr;
      ptr = 0;
      v3[38] = v20;
      if ( result )
      {
        free((void *)result);
        result = (int)ptr;
        if ( ptr )
          free(ptr);
      }
    }
  }
  result = sub_22EBBC(result);
  if ( !result )
  {
    if ( dword_478370 )
      goto LABEL_25;
LABEL_23:
    result = (*(int (__fastcall **)(_DWORD *))(v3[1] + 28))(v3);
    if ( result )
    {
      v3[3] = 6;
      goto LABEL_25;
    }
LABEL_127:
    sub_946E0("Can't set read/access watchpoint when hardware watchpoints are disabled.");
  }
  result = v3[36];
  if ( !result )
    goto LABEL_25;
  v66 = 0;
  sub_14CDB8(result, &v66, &v68, &ptr, &v67, 0);
  if ( !v3[41] && (_UNKNOWN *)v3[1] != &unk_478374 )
  {
    LODWORD(v21) = v68;
    if ( v3[43] )
    {
      v54 = (void *)sub_C965C(v3 + 42, v3 + 43, (int)v68);
      LODWORD(v21) = v54;
      v68 = v54;
      if ( v54 )
      {
        sub_26C3B8(v54);
        LODWORD(v21) = v68;
      }
    }
    HIDWORD(v21) = 1;
    *((_QWORD *)v3 + 20) = v21;
  }
  v22 = sub_15F7E8(0);
  v23 = sub_15DABC(v22);
  result = (int)v67;
  v68 = v67;
  if ( !v67 )
  {
    if ( !a2 )
      goto LABEL_73;
    goto LABEL_92;
  }
  do
  {
    if ( *(_DWORD *)nullsub_31(result) != 1 )
      goto LABEL_34;
    v24 = v67;
    if ( v68 != v67 )
    {
      if ( sub_26BF4C(v68) )
        goto LABEL_34;
      v24 = v68;
    }
    v25 = sub_26BC70(v24);
    v26 = sub_171258(v25);
    if ( v68 == ptr || (unsigned int)**(unsigned __int8 **)(v26 + 24) - 2 > 1 )
    {
      if ( sub_26BCA0(v68) )
      {
        v49 = sub_26BC90(v68);
        v50 = sub_26BCA0(v68);
        v51 = v50;
        ((void (__fastcall *)(void *, _DWORD))loc_26C09C)(v68, HIDWORD(v50));
      }
      else if ( v68 == ptr )
      {
        v51 = v3[43];
        if ( v51 )
          v49 = v3[42];
        else
          v49 = 0;
        ((void (__fastcall *)(void *))loc_26C09C)(v68);
      }
      else
      {
        v51 = 0;
        v49 = 0;
        ((void (__fastcall *)(void *))loc_26C09C)(v68);
      }
      v27 = v3[3];
      if ( v27 == 8 )
      {
        v62 = 1;
      }
      else
      {
        if ( v27 == 9 )
          v28 = 2;
        else
          v28 = 0;
        v62 = v28;
      }
      v29 = (*(int (__fastcall **)(_DWORD *))v3[1])(v3);
      v30 = (int *)v3[7];
      v31 = (_DWORD *)v29;
      if ( v30 )
      {
        while ( *v30 )
          v30 = (int *)*v30;
      }
      else
      {
        v30 = v3 + 7;
      }
      *v30 = v29;
      v32 = sub_26BC70(v68);
      v33 = sub_170040(v32);
      v31[12] = v23;
      v31[11] = v33;
      v31[13] = sub_25AC58();
      if ( v51 )
      {
        v35 = -v49;
        v34 = -v49 < 0;
        v36 = v49 & 7;
        v37 = v35 & 7;
        if ( !v34 )
          v36 = -v37;
        v38 = v36 + v51;
        if ( v38 + 7 >= 0 )
          v39 = v38 + 7;
        else
          v39 = v38 + 14;
        v31[14] = v39 >> 3;
      }
      else
      {
        v31[14] = *(_DWORD *)(sub_26BC70(v68) + 20);
      }
      v31[15] = v62;
    }
LABEL_34:
    result = ((int (*)(void))sub_26BC68)();
    v68 = (void *)result;
  }
  while ( result );
  j = v67;
  if ( !a2 )
    goto LABEL_70;
  if ( !dword_478370 || !v67 )
    goto LABEL_92;
  v63 = v6;
  v42 = (int)v67;
  v64 = v23;
  v43 = 0;
  v65 = v3;
  while ( 2 )
  {
    if ( *(_DWORD *)nullsub_31(v42) == 1 )
    {
      if ( j == (void *)v42 )
      {
        v48 = sub_26BC70(j);
        v45 = sub_171258(v48);
      }
      else
      {
        if ( sub_26BF4C(v42) )
          goto LABEL_86;
        v44 = sub_26BC70(v42);
        v45 = sub_171258(v44);
        if ( (unsigned int)**(unsigned __int8 **)(v45 + 24) - 2 <= 1 )
          goto LABEL_86;
      }
      v46 = ((int (__fastcall *)(int))loc_26C09C)(v42);
      if ( !dword_4783BC || !sub_1737AC(v45) )
        sub_26BC70(v42);
      v47 = off_489A38(&dword_4899A0, v46);
      if ( !v47 )
      {
LABEL_91:
        v6 = v63;
        v23 = v64;
        v3 = v65;
        goto LABEL_92;
      }
      v43 += v47;
    }
    else if ( *(_DWORD *)nullsub_31(v42) && !sub_26C1D4(v42) || *(_DWORD *)nullsub_31(v42) == 2 )
    {
      goto LABEL_91;
    }
LABEL_86:
    v42 = sub_26BC68(v42);
    if ( v42 )
      continue;
    break;
  }
  v55 = v43;
  v23 = v64;
  v56 = v43 == 0;
  v6 = v63;
  v3 = v65;
  if ( v56 )
  {
LABEL_92:
    result = (*(int (__fastcall **)(_DWORD *))(v3[1] + 28))(v3);
    if ( result )
      goto LABEL_99;
    if ( dword_478370 )
      sub_946E0("Expression cannot be implemented with read/access watchpoint.");
    goto LABEL_127;
  }
  v57 = v65[3];
  v58 = (_DWORD *)dword_478348;
  v59 = v55 == 1;
  if ( !dword_4783BC )
    v59 = 0;
  if ( v57 == 6 )
    v57 = 7;
  v65[53] = v59;
  for ( i = 0; v58; v58 = (_DWORD *)v58[2] )
  {
    if ( v65 != v58 && v58[4] == 1 && v57 == v58[3] )
      i += sub_15C2C((int)v58);
  }
  if ( v65[4] == 1 )
    sub_15C2C((int)v65);
  result = off_489A04();
  v61 = result;
  if ( result > 0 )
  {
    v65[3] = v57;
    v52 = 2;
  }
  else
  {
    result = (*(int (__fastcall **)(_DWORD *))(v65[1] + 28))(v65);
    if ( !(result | v61) )
      sub_946E0("Target does not support this type of hardware watchpoint.");
    if ( ((result == 0) & (v61 >> 31)) != 0 )
      sub_946E0("There are not enough available hardware resources for this watchpoint.");
LABEL_99:
    v52 = 3;
    v3[3] = 6;
  }
  v53 = (_DWORD *)v3[7];
  for ( j = v67; v53; v53 = (_DWORD *)*v53 )
    v53[3] = v52;
LABEL_70:
  while ( 1 )
  {
    v68 = j;
    if ( !j )
      break;
    while ( 1 )
    {
      j = (void *)sub_26BC68(j);
      result = (int)v68;
      if ( (void *)v3[40] == v68 )
        break;
      result = ((int (*)(void))loc_26C200)();
      v68 = j;
      if ( !j )
        goto LABEL_73;
    }
  }
LABEL_73:
  if ( v3[3] == 6 && !v3[7] )
  {
    result = (*(int (__fastcall **)(_DWORD *))v3[1])(v3);
    v3[7] = result;
    *(_DWORD *)(result + 48) = v23;
    *(_DWORD *)(v3[7] + 52) = -1;
    *(_DWORD *)(v3[7] + 56) = -1;
  }
LABEL_25:
  if ( v6 )
    goto LABEL_63;
  return result;
}
