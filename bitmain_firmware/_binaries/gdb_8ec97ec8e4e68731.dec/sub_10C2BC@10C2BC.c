int __fastcall sub_10C2BC(int a1, int a2, int a3, unsigned int a4, unsigned int a5, int a6, char a7)
{
  int v7; // r5
  int *v8; // r6
  int v10; // r2
  _DWORD *v11; // lr
  int v12; // r1
  int v13; // r9
  int *v14; // r4
  unsigned int v15; // r1
  int **v16; // r6
  int v17; // r12
  int **v18; // r0
  int v19; // r2
  _DWORD *v20; // lr
  unsigned int v21; // r3
  int v23; // r3
  int v24; // r7
  int **v25; // r12
  size_t v26; // r6
  int v27; // r8
  int *v28; // r2
  int **v29; // r5
  int v30; // r2
  int *v31; // r0
  int *v32; // r5
  _DWORD *v33; // r2
  int v34; // r9
  int v35; // r7
  int v36; // r10
  int v37; // r3
  int v38; // r8
  int v39; // r2
  int v40; // r1
  _DWORD *v41; // r2
  int v42; // r3
  _BOOL4 v43; // r3
  int v44; // r1
  int v45; // r8
  int **v46; // r8
  int v47; // r0
  int *v48; // [sp+10h] [bp-7Ch] BYREF
  int *v49; // [sp+14h] [bp-78h] BYREF
  __int16 *v50; // [sp+18h] [bp-74h]
  int v51; // [sp+1Ch] [bp-70h]
  const char *v52; // [sp+20h] [bp-6Ch]
  unsigned int v53; // [sp+24h] [bp-68h]
  int v54; // [sp+28h] [bp-64h]
  int v55; // [sp+2Ch] [bp-60h]
  int v56; // [sp+30h] [bp-5Ch] BYREF
  int v57; // [sp+34h] [bp-58h]
  int v58; // [sp+38h] [bp-54h] BYREF
  int v59; // [sp+3Ch] [bp-50h]
  char v60[24]; // [sp+40h] [bp-4Ch] BYREF
  int *v61; // [sp+58h] [bp-34h]

  v54 = a3;
  v51 = a1;
  if ( !a3 || (v8 = *(int **)(a3 + 8)) == 0 )
  {
    sub_94700(
      (int)"disasm.c",
      354,
      "%s: Assertion `%s' failed.",
      "void do_mixed_source_and_assembly_deprecated(gdbarch*, ui_out*, symtab*, CORE_ADDR, CORE_ADDR, int, gdb_disassembly_flags)",
      "symtab != NULL && SYMTAB_LINETABLE (symtab) != NULL");
    sub_25734C(v7, 0);
    if ( (_BYTE)v59 )
      ((void (__fastcall *)(int *))loc_5FD58)(v48);
    if ( (_BYTE)v57 )
      ((void (__fastcall *)(int *))loc_5FD04)(v49);
    v47 = sub_25734C(v7, 1);
    sub_338FFC(v47);
  }
  v11 = v8 + 1;
  v10 = *v8;
  if ( (a7 & 8) != 0 )
    v12 = 2;
  else
    v12 = 0;
  v55 = v12;
  v13 = v10 - 1;
  v53 = ((unsigned int)&v49 + 3) >> 3;
  v14 = (int *)&v48;
  if ( v10 - 1 <= 0 )
  {
    v17 = 0;
  }
  else
  {
    v15 = v8[2];
    if ( v15 >= a4 )
    {
      v19 = 0;
      v18 = (int **)(v8 + 1);
      v17 = 0;
LABEL_18:
      if ( v15 >= a5 )
        goto LABEL_13;
      v23 = v17 + 1;
      v24 = 0;
      v25 = (int **)&v11[2 * v17 + 2];
      v26 = 0;
      v52 = (const char *)a2;
      while ( 1 )
      {
        v30 = v19 + 1;
        v31 = *v18;
        v32 = (int *)v11[2 * v30];
        v33 = &v11[2 * v30];
        if ( (v31 != v32 || v33[1] != v15) && v31 )
        {
          v27 = 3 * v26;
          v28 = (int *)v33[1];
          if ( (int)v31 > (int)v32 )
            v24 = 1;
          v29 = &(&v48)[3 * v26++];
          (&v48)[v27] = v31;
          v29[1] = (int *)v15;
          v29[2] = v28;
        }
        if ( v13 <= v23 )
          break;
        v18 = v25;
        v25 += 2;
        v15 = (unsigned int)*(v25 - 1);
        v19 = v23;
        if ( v15 >= a5 )
        {
          a2 = (int)v52;
          goto LABEL_31;
        }
        ++v23;
      }
      a2 = (int)v52;
      if ( v13 == v23 )
      {
        v20 = &v11[2 * v13];
        v21 = v20[1];
        if ( v21 < a5 )
          goto LABEL_68;
      }
LABEL_31:
      if ( !v24 )
        goto LABEL_33;
      goto LABEL_32;
    }
    v16 = (int **)(v8 + 3);
    v17 = 0;
    while ( ++v17 != v13 )
    {
      v18 = v16;
      v16 += 2;
      v15 = (unsigned int)*(v16 - 1);
      v19 = v17;
      if ( v15 >= a4 )
        goto LABEL_18;
    }
  }
  if ( v13 != v17 || (v20 = &v11[2 * v13], v21 = v20[1], v21 >= a5) )
  {
LABEL_13:
    sub_2578AC(a2, 1);
    v57 = 0;
    v56 = 0;
    v59 = 0;
    goto LABEL_14;
  }
  v26 = 0;
  v24 = 0;
LABEL_68:
  v45 = 3 * v26++;
  *(_DWORD *)(v45 * 4 + 8 * v53) = *v20;
  v46 = &(&v48)[v45];
  v46[1] = (int *)v21;
  sub_21DEAC(v60, v21);
  v46[2] = v61;
  if ( !v24 )
  {
    v49 = &v56;
    v48 = &v58;
    sub_2578AC(a2, 1);
    v56 = 0;
    v58 = 0;
    v57 = 0;
    v59 = 0;
LABEL_34:
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v52 = "src_and_asm_line";
    v53 = (unsigned int)"line_asm_insn";
    v50 = &word_356638;
    do
    {
      v37 = *v14;
      if ( *v14 >= v35 )
      {
        if ( v35 )
        {
          if ( v37 == v35 )
          {
            if ( (_BYTE)v57 )
            {
              LOBYTE(v57) = 0;
              sub_25734C(v56, 0);
            }
            v56 = a2;
            sub_2578AC(a2, 0);
            v39 = *v14;
            v40 = v35;
          }
          else
          {
            if ( v37 <= v35 )
            {
              v38 = v35;
            }
            else
            {
              do
              {
                sub_2578AC(a2, 0);
                sub_2053D0(v54, v35, v35 + 1, v55);
                sub_2578AC(a2, 1);
                sub_25734C(a2, 1);
                sub_25734C(a2, 0);
                v38 = ++v35;
              }
              while ( *v14 > v35 );
            }
            if ( (_BYTE)v57 )
            {
              LOBYTE(v57) = 0;
              sub_25734C(v56, 0);
            }
            v56 = a2;
            sub_2578AC(a2, 0);
            v39 = *v14;
            v40 = v38;
          }
          LOBYTE(v57) = 1;
          sub_2053D0(v54, v40, v39 + 1, v55);
        }
        else
        {
          if ( (_BYTE)v57 )
          {
            LOBYTE(v57) = 0;
            sub_25734C(v56, 0);
          }
          v56 = a2;
          sub_2578AC(a2, 0);
          v44 = *v14;
          LOBYTE(v57) = 1;
          sub_2053D0(v54, v44, v44 + 1, v55);
        }
        v35 = *v14 + 1;
        if ( (_BYTE)v59 )
        {
          LOBYTE(v59) = 0;
          sub_25734C(v58, 1);
        }
        v58 = a2;
        sub_2578AC(a2, 1);
        LOBYTE(v59) = 1;
      }
      v34 += sub_10BEE8(v51, a2, v14[1], v14[2], a6, a7, 0);
      if ( v26 - 1 == v36 || (v41 = (_DWORD *)v14[3], (int)v41 > *v14) )
      {
        if ( (_BYTE)v59 )
        {
          LOBYTE(v59) = 0;
          sub_25734C(v58, 1);
        }
        v42 = (unsigned __int8)v57;
        if ( (_BYTE)v57 )
        {
          LOBYTE(v57) = 0;
          sub_25734C(v56, 0);
        }
        sub_257380(a2, v50, v41, v42);
      }
      v43 = a6 >= 0;
      if ( a6 > v34 )
        v43 = 0;
      if ( v43 )
        break;
      ++v36;
      v14 += 3;
    }
    while ( v36 != v26 );
    if ( (_BYTE)v59 )
    {
      LOBYTE(v59) = 0;
      sub_25734C(v58, 1);
    }
    goto LABEL_14;
  }
LABEL_32:
  qsort(&v48, v26, 0xCu, (__compar_fn_t)sub_10B7E4);
LABEL_33:
  sub_2578AC(a2, 1);
  v49 = &v56;
  v48 = &v58;
  v57 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  if ( v26 )
    goto LABEL_34;
LABEL_14:
  if ( (_BYTE)v57 )
  {
    LOBYTE(v57) = 0;
    sub_25734C(v56, 0);
  }
  return sub_25734C(a2, 1);
}
