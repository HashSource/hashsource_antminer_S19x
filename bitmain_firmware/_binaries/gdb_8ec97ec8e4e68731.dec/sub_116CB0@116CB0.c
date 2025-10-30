unsigned int __fastcall sub_116CB0(
        unsigned int result,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  char *v9; // r4
  char *v10; // r5
  int v12; // r3
  int v13; // r1
  char *v14; // r6
  char *v15; // r2
  bool v16; // zf
  char *v17; // r2
  int v18; // t1
  int v19; // r0
  char *v20; // r0
  const char *v21; // r0
  int v22; // r3
  char *v23; // r0
  char *v24; // r10
  char *v25; // r4
  char *v26; // r0
  int v27; // r3
  bool v28; // zf
  int *v29; // r0
  int v30; // r0
  int v31; // r2
  int v32; // r2
  bool v33; // zf
  int v34; // r2
  bool v35; // zf
  int v36; // r2
  bool v37; // zf
  int v38; // r0
  __int64 v39; // r0
  int v40; // r3
  int v41; // r2
  char *v42; // r10
  const char *v43; // r0
  char *v44; // r2
  bool v45; // r1
  char *v46; // r12
  int v48; // r1
  bool v49; // zf
  char *v50; // r2
  int v51; // r2
  bool v52; // zf
  char *v53; // r0
  char *v54; // r0
  int v55; // r10
  const char *v56; // r10
  char *v57; // r0
  char *v58; // r0
  int v59; // r3
  const char *v60; // r2
  int v61; // r0
  const char *v62; // r1
  const char *v63; // r1
  const char *v64; // r1
  int v65; // [sp+20h] [bp-34h]
  char *v66; // [sp+20h] [bp-34h]
  const char **v68; // [sp+2Ch] [bp-28h]
  int v69; // [sp+34h] [bp-20h]
  char *v70; // [sp+38h] [bp-1Ch] BYREF
  int v71; // [sp+3Ch] [bp-18h] BYREF
  __int64 v72; // [sp+40h] [bp-14h] BYREF
  __int64 v73; // [sp+48h] [bp-Ch] BYREF

  v9 = (char *)a4;
  v68 = (const char **)result;
  v10 = (char *)(a4 + a5);
  if ( a4 >= a4 + a5 )
  {
    v14 = (char *)a4;
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( dword_487314 )
    {
LABEL_22:
      sub_25A418(a3, "a complex DWARF expression:\n");
      v19 = sub_1B7250(a6);
      result = (unsigned int)sub_11603C(a3, v19, a7, a8, (int)v9, v9, v10, 0, dword_487314, a9);
      v14 = (char *)result;
      if ( (unsigned int)v10 <= result )
        goto LABEL_23;
      sub_25A418(a3, "   ");
      v22 = (unsigned __int8)*v14;
      if ( v22 == 147 )
        goto LABEL_79;
      goto LABEL_30;
    }
    result = sub_1B7250(a6);
    v12 = (unsigned __int8)*v9;
    v65 = result;
    v13 = v12 - 80;
    if ( (unsigned __int8)(v12 - 80) <= 0x1Fu )
    {
      v14 = v9 + 1;
LABEL_26:
      v21 = sub_11600C(result, v13);
      result = sub_25A418(a3, "a variable in $%s", v21);
      goto LABEL_27;
    }
    if ( v12 == 144 )
    {
      v20 = sub_11257C(v9 + 1, v10, &v73);
      v13 = v73;
      v14 = v20;
      result = v65;
      goto LABEL_26;
    }
    if ( v12 == 145 )
    {
      v73 = 0;
      result = (unsigned int)sub_112620(v9 + 1, v10, (int *)&v72);
      v14 = (char *)result;
      if ( v10 != (char *)result )
      {
        v27 = *(unsigned __int8 *)result;
        v28 = v27 == 157;
        if ( v27 != 157 )
          v28 = v27 == 147;
        if ( !v28 )
          goto LABEL_44;
      }
      v29 = sub_C2574(a2);
      if ( !v29 )
      {
        if ( dword_46D448 )
          v63 = (const char *)sub_21B3C4(v68);
        else
          v63 = *v68;
        sub_946E0("No block found for address for symbol \"%s\".", v63);
      }
      v30 = sub_C23B0((int)v29);
      if ( !v30 )
      {
        if ( dword_46D448 )
          v64 = (const char *)sub_21B3C4(v68);
        else
          v64 = *v68;
        sub_946E0("No function found for block for symbol \"%s\".", v64);
      }
      sub_115D30(v30, a2, (int)&v70, &v71);
      v31 = (unsigned __int8)*v70;
      result = (unsigned __int8)(v31 - 112);
      if ( result <= 0x1F )
      {
        v55 = v31 - 112;
        v69 = v31 - 112;
        v58 = sub_112620(v70 + 1, &v70[v71], (int *)&v73);
        v59 = v69;
        if ( v58 != &v70[v71] )
        {
          if ( dword_46D448 )
          {
            v61 = sub_21B3C4(v68);
            v59 = v69;
            v60 = (const char *)v61;
          }
          else
          {
            v60 = *v68;
          }
          sub_946E0("Unexpected opcode after DW_OP_breg%u for symbol \"%s\".", v59, v60);
        }
      }
      else
      {
        v32 = v31 - 80;
        if ( (unsigned __int8)v32 > 0x1Fu )
          goto LABEL_44;
        v55 = v32;
        v73 = 0;
      }
      v56 = sub_11600C(v65, v55);
      v66 = sub_988AC(v73);
      v57 = sub_988AC(v72);
      result = sub_25A418(a3, "a variable at frame base reg $%s offset %s+%s", v56, v66, v57);
      goto LABEL_27;
    }
    v15 = &v9[a7 + 1];
    if ( v10 > v15 )
    {
      if ( v12 != 3 )
      {
        if ( a7 == 4 )
        {
          if ( v12 != 12 )
            goto LABEL_13;
        }
        else
        {
          v16 = v12 == 14;
          if ( v12 == 14 )
            v16 = a7 == 8;
          if ( !v16 )
            goto LABEL_13;
        }
      }
      v34 = (unsigned __int8)*v15;
      v35 = v34 == 155;
      if ( v34 != 155 )
        v35 = v34 == 224;
      if ( v35 )
      {
        v14 = &v9[a7 + 2];
        if ( v10 == v14 )
          goto LABEL_60;
        v36 = (unsigned __int8)v9[a7 + 2];
        v37 = v36 == 157;
        if ( v36 != 157 )
          v37 = v36 == 147;
        if ( v37 )
        {
LABEL_60:
          v38 = ((int (__fastcall *)(unsigned int))loc_165BB8)(result);
          v39 = sub_15C250(v9 + 1, a7, v38);
          v41 = a7;
          goto LABEL_61;
        }
      }
    }
LABEL_13:
    if ( v10 < v9 + 3 )
      goto LABEL_19;
    result = (unsigned int)(v9 + 1);
    if ( v10 != v9 + 1 )
    {
      v17 = v9 + 2;
      if ( v9[1] < 0 )
      {
        while ( v10 != v17 )
        {
          v18 = *v17++;
          if ( v18 >= 0 )
            goto LABEL_62;
        }
LABEL_19:
        if ( (unsigned __int8)(v12 - 48) > 0x1Fu || v10 <= v9 + 1 )
          goto LABEL_45;
        if ( (unsigned __int8)v9[1] != 159 )
          goto LABEL_22;
        v14 = v9 + 2;
        result = sub_25A418(a3, "the constant %d");
      }
      else
      {
LABEL_62:
        v44 = &v17[-result];
        v45 = v12 == 252;
        v46 = v44 + 1;
        if ( !v44 )
          v45 = 0;
        if ( v10 <= &v46[(int)v9] || !v45 )
          goto LABEL_19;
        v48 = (unsigned __int8)v46[(_DWORD)v9];
        v49 = v48 == 155;
        if ( v48 != 155 )
          v49 = v48 == 224;
        if ( !v49 )
          goto LABEL_19;
        v50 = v44 + 2;
        if ( v10 != &v50[(_DWORD)v9] )
        {
          v51 = (unsigned __int8)v50[(_DWORD)v9];
          v52 = v51 == 157;
          if ( v51 != 157 )
            v52 = v51 == 147;
          if ( !v52 )
            goto LABEL_19;
        }
        v14 = sub_11257C((char *)result, v10, &v73) + 1;
        v39 = (unsigned int)sub_132070(a9, v73);
        v40 = 0;
        v41 = a7;
        v73 = (unsigned int)v39;
LABEL_61:
        v42 = sub_989F0(v39, SHIDWORD(v39), v41, v40);
        v43 = (const char *)sub_1B87A8(a6);
        result = sub_25A418(a3, "a thread-local variable at offset 0x%s in the thread-local storage for `%s'", v42, v43);
      }
LABEL_27:
      if ( v14 != v9 )
        goto LABEL_28;
LABEL_44:
      v12 = (unsigned __int8)*v9;
    }
LABEL_45:
    v33 = v12 == 147;
    if ( v12 != 147 )
      v33 = v12 == 157;
    if ( !v33 )
      goto LABEL_22;
    v14 = v9;
LABEL_28:
    if ( v10 <= v14 )
      goto LABEL_23;
    v22 = (unsigned __int8)*v14;
    if ( v22 == 147 )
    {
LABEL_79:
      v24 = sub_11257C(v14 + 1, v10, &v73);
      v53 = sub_98880(v73, SHIDWORD(v73));
      if ( v9 == v14 )
        result = sub_25A418(a3, "an empty %s-byte piece", v53);
      else
        result = sub_25A418(a3, " [%s-byte piece]", v53);
      goto LABEL_33;
    }
LABEL_30:
    if ( v22 != 157 )
      goto LABEL_93;
    v23 = sub_11257C(v14 + 1, v10, &v72);
    v24 = sub_11257C(v23, v10, &v73);
    if ( v9 == v14 )
    {
      v54 = sub_98880(v72, SHIDWORD(v72));
      result = sub_25A418(a3, "an empty %s-bit piece", v54);
    }
    else
    {
      v25 = sub_98880(v72, SHIDWORD(v72));
      v26 = sub_98880(v73, SHIDWORD(v73));
      result = sub_25A418(a3, " [%s-bit piece, offset %s bits]", v25, v26);
    }
LABEL_33:
    if ( v10 <= v24 )
      break;
    v9 = v24;
    sub_25A418(a3, ", and ");
  }
  v14 = v24;
LABEL_23:
  if ( v14 > v10 )
  {
LABEL_93:
    if ( dword_46D448 )
      v62 = (const char *)sub_21B3C4(v68);
    else
      v62 = *v68;
    sub_946E0("Corrupted DWARF2 expression for \"%s\".", v62);
  }
  return result;
}
