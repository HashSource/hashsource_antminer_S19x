char *__fastcall sub_134604(int a1, int a2, int a3, unsigned int *a4)
{
  int v8; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r9
  unsigned int v12; // r0
  _BOOL4 v13; // r7
  int v14; // r12
  int v15; // r3
  unsigned int v16; // r8
  char v17; // r2
  __int64 v18; // r0
  const char *v19; // r6
  const char *v20; // r3
  int v21; // lr
  bool v22; // zf
  int v23; // r3
  int v24; // r12
  int v25; // r0
  int v26; // r3
  unsigned int v28; // r2
  int v29; // r3
  const char *v30; // r0
  int v31; // r0
  const char *v32; // r2
  int v33; // r0
  int *v34; // r3
  int v35; // r8
  char v36; // r12
  int v37; // r3
  int v38; // r0
  int v39; // r0
  unsigned int *v40; // r3
  unsigned int v41; // r2
  const char *v42; // r0
  int *v43; // [sp+14h] [bp-10h] BYREF
  int v44[3]; // [sp+18h] [bp-Ch] BYREF

  ((void (__fastcall *)(_DWORD))loc_11EB1C)(*(_DWORD *)(a2 + 20));
  if ( *(_DWORD *)(a2 + 16) )
  {
    v43 = *(int **)(a2 + 16);
  }
  else
  {
    sub_130DE0(a2);
    v43 = *(int **)(a2 + 16);
    if ( !v43 )
    {
      v30 = (const char *)sub_1B87A8(*(_DWORD *)(a2 + 20));
      sub_946E0("Dwarf Error: Dummy CU at 0x%x referenced in module %s", a1, v30);
    }
  }
  v8 = ((int (__fastcall *)(int, int, int **))loc_12E49C)(a1, (*(unsigned __int8 *)(a2 + 10) >> 3) & 1, &v43);
  v9 = v8;
  if ( !v8 )
  {
    v42 = (const char *)sub_1B87A8(*(_DWORD *)(a2 + 20));
    sub_946E0("Dwarf Error: Cannot find DIE at 0x%x referenced in module %s", a1, v42);
  }
  v10 = sub_12E694(v8, 28, (int)v43);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = *(_WORD *)(v10 + 2) & 0x7FFF;
  v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 36) + 4) + 8) != 0;
  if ( v12 == 11 )
  {
    v38 = sub_1345C4(v9, v43);
    v34 = v43;
    v35 = v38;
    v36 = 8;
    goto LABEL_45;
  }
  if ( v12 > 0xB )
  {
    if ( v12 == 30 )
      goto LABEL_50;
    if ( v12 > 0x1E )
    {
      if ( v12 == 7937 )
        goto LABEL_13;
      if ( v12 > 0x1F01 )
      {
        if ( v12 == 7938 || v12 == 7969 )
          goto LABEL_34;
      }
      else if ( v12 == 33 )
      {
        goto LABEL_27;
      }
    }
    else
    {
      if ( v12 == 14 )
        goto LABEL_34;
      if ( v12 <= 0xE )
      {
        if ( v12 == 13 )
          goto LABEL_27;
      }
      else
      {
        if ( v12 == 15 )
        {
LABEL_27:
          v25 = sub_1345C4(v9, v43);
          return sub_12240C(
                   (struct obstack *)a3,
                   v13,
                   *(_DWORD *)(v25 + 20),
                   v26,
                   *(_DWORD *)(v11 + 8),
                   *(_DWORD *)(v11 + 12),
                   a4);
        }
        if ( v12 == 24 )
          goto LABEL_50;
      }
    }
LABEL_40:
    v19 = 0;
    if ( dword_47AC88 > 0 )
    {
      v31 = sub_321640(v12);
      v32 = "DW_FORM_<unknown>";
      if ( v31 )
        v32 = (const char *)v31;
      sub_F43B4(&off_46D334, "unsupported const value attribute form: '%s'", v32);
    }
    return (char *)v19;
  }
  if ( v12 == 6 )
  {
    v39 = sub_1345C4(v9, v43);
    v34 = v43;
    v35 = v39;
    v36 = 32;
    goto LABEL_45;
  }
  if ( v12 > 6 )
  {
    if ( v12 != 8 )
    {
      if ( v12 <= 8 )
      {
        v28 = *(_DWORD *)(sub_1345C4(v9, v43) + 20);
        *(_QWORD *)v44 = *(_QWORD *)(v11 + 8);
        return sub_12240C((struct obstack *)a3, v13, v28, v29, v44[0], v44[1], a4);
      }
      goto LABEL_50;
    }
LABEL_34:
    v19 = *(const char **)(v11 + 8);
    *a4 = strlen(v19);
    a4[1] = 0;
    return (char *)v19;
  }
  if ( v12 <= 4 )
  {
    if ( v12 < 3 )
    {
      if ( v12 == 1 )
      {
LABEL_13:
        v14 = *(_DWORD *)(a3 + 16);
        v15 = *(_DWORD *)(a3 + 12);
        v16 = *((unsigned __int8 *)v43 + 14);
        v17 = v14 - v15;
        LODWORD(v18) = (unsigned __int8)v16;
        *(_QWORD *)a4 = (unsigned __int8)v16;
        if ( v16 > v14 - v15 )
        {
          obstack_newchunk((struct obstack *)a3, v16);
          v15 = *(_DWORD *)(a3 + 12);
          v14 = *(_DWORD *)(a3 + 16);
          v18 = *(_QWORD *)a4;
        }
        v19 = *(const char **)(a3 + 8);
        v20 = (const char *)(v15 + v16);
        v21 = *(_DWORD *)(a3 + 24);
        *(_DWORD *)(a3 + 12) = v20;
        v22 = v20 == v19;
        if ( v20 == v19 )
          v17 = *(_BYTE *)(a3 + 40);
        v23 = (unsigned int)&v20[v21] & ~v21;
        *(_DWORD *)(a3 + 12) = v23;
        if ( v22 )
          *(_BYTE *)(a3 + 40) = v17 | 2;
        if ( v23 - *(_DWORD *)(a3 + 4) > (unsigned int)(v14 - *(_DWORD *)(a3 + 4)) )
        {
          v23 = v14;
          *(_DWORD *)(a3 + 12) = v14;
        }
        v24 = *(_DWORD *)(v11 + 8);
        *(_DWORD *)(a3 + 8) = v23;
        sub_15C34C(v19, v18, v13, v23, v24, 0);
        return (char *)v19;
      }
      goto LABEL_40;
    }
LABEL_50:
    v40 = *(unsigned int **)(v11 + 8);
    v41 = *v40;
    v19 = (const char *)v40[1];
    a4[1] = 0;
    *a4 = v41;
    return (char *)v19;
  }
  v33 = sub_1345C4(v9, v43);
  v34 = v43;
  v35 = v33;
  v36 = 16;
LABEL_45:
  v19 = (const char *)sub_1223C8(*(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 12), a3, *v34, v44, v36);
  if ( !v19 )
    return sub_12240C((struct obstack *)a3, v13, *(_DWORD *)(v35 + 20), v37, v44[0], v44[1], a4);
  return (char *)v19;
}
