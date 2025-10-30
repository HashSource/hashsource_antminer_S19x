const char ***__fastcall sub_21D250(const char ***a1, char *a2, size_t a3, int a4, int a5, int a6, int *a7)
{
  int v9; // r10
  int v10; // r8
  char *v11; // r3
  const char **v12; // r4
  char *v13; // r10
  const char **v14; // r0
  bool v15; // zf
  const char **v16; // r3
  char **v17; // r0
  char **v18; // r4
  bool v19; // zf
  int v20; // r0
  __int64 v21; // r4
  int v22; // r6
  char *v23; // r0
  int v25; // r8
  char *v26; // r4
  char *v27; // r2
  const char *v28; // r0
  int v29; // r5
  char *v30; // r0
  _DWORD *v31; // r0
  int v32; // r6
  char *v33; // r2
  bool v34; // zf
  _DWORD *v35; // r0
  char *v36; // r2
  int v37; // r3
  int v38; // r0
  _DWORD *v39; // r0
  int v41; // [sp+18h] [bp-1Ch]
  _DWORD *v42; // [sp+18h] [bp-1Ch]
  const char *v43; // [sp+18h] [bp-1Ch]
  int v44; // [sp+18h] [bp-1Ch]
  const char *v45; // [sp+1Ch] [bp-18h]
  __int64 v46; // [sp+20h] [bp-14h] BYREF
  const char **v47[3]; // [sp+28h] [bp-Ch] BYREF

  v9 = a4;
  if ( dword_48970C )
  {
    v42 = sub_21CBC4(a4);
    v25 = *(_DWORD *)sub_242FC8(v42);
    v26 = sub_98EEC(v9);
    if ( v42 )
      v27 = (char *)sub_1B87CC((int)v42);
    else
      v27 = "NULL";
    v45 = v27;
    v43 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    v28 = (const char *)sub_19444C(a6);
    sub_2594B0(v25, "lookup_symbol_aux (%s, %s (objfile %s), %s, %s)\n", a2, v26, v45, v43, v28);
  }
  if ( !a7 )
  {
    v10 = sub_C2668(v9);
    v11 = sub_C25A8(v9);
    if ( !v10 )
    {
      v18 = sub_194438(a6);
      goto LABEL_21;
    }
    goto LABEL_4;
  }
  *a7 = 0;
  a7[1] = 0;
  a7[2] = 0;
  v10 = sub_C2668(v9);
  v11 = sub_C25A8(v9);
  if ( v10 )
  {
LABEL_4:
    if ( v9 != v10 )
    {
      v12 = (const char **)v9;
      v41 = v9;
      v13 = v11;
      while ( 1 )
      {
        v14 = (const char **)sub_21CDFC(a2, a3, v12, a5);
        if ( v14 )
          break;
        v15 = a6 == 7;
        if ( a6 != 7 )
          v15 = a6 == 4;
        if ( v15 )
        {
          sub_FDC2C(v47, v13, a2, (int)v12, a5);
          v14 = v47[0];
          if ( v47[0] )
          {
            v16 = v47[0];
            v12 = v47[1];
            goto LABEL_32;
          }
        }
        if ( !v12[2] || !sub_C23FC((int)v12) )
        {
          v12 = (const char **)v12[3];
          if ( v12 != (const char **)v10 )
            continue;
        }
        v9 = v41;
        goto LABEL_17;
      }
      v16 = v14;
LABEL_32:
      if ( dword_48970C )
      {
        v44 = (int)v16;
        v29 = *(_DWORD *)sub_242FC8(v14);
        v30 = sub_98EEC(v44);
        sub_2594B0(v29, "lookup_symbol_aux (...) = %s\n", v30);
        v16 = (const char **)v44;
      }
      *a1 = v16;
      a1[1] = v12;
      return a1;
    }
  }
LABEL_17:
  v17 = sub_194438(a6);
  v18 = v17;
  v19 = a7 == 0;
  if ( a7 )
    v19 = a5 == 2;
  if ( !v19 )
  {
    v34 = v9 == 0;
    if ( v9 )
      v34 = v17[21] == 0;
    if ( !v34 )
    {
      sub_21CC54(v47, (const char **)v17, v9);
      if ( v47[0] )
      {
        v35 = (_DWORD *)sub_171258(*((_DWORD **)v47[0] + 6));
        v36 = (char *)v35[6];
        v37 = *v36;
        if ( v37 == 1 || (v37 = (unsigned __int8)v37, (unsigned int)(unsigned __int8)v37 - 18 <= 1) )
        {
          v35 = (_DWORD *)*((_DWORD *)v36 + 5);
          v37 = *(unsigned __int8 *)v35[6];
        }
        if ( (unsigned int)(v37 - 3) > 1 )
          sub_946E0("Internal error: `%s' is not an aggregate", v18[21]);
        v38 = sub_219874(v35, a2, a7);
        if ( v38 )
        {
          if ( dword_48970C )
          {
            v39 = (_DWORD *)sub_242FC8(v38);
            sub_2594B0(*v39, "lookup_symbol_aux (...) = NULL\n");
          }
          *a1 = 0;
          a1[1] = 0;
          return a1;
        }
      }
    }
  }
LABEL_21:
  v20 = ((int (__fastcall *)(__int64 *, char **, char *, int, int))v18[22])(&v46, v18, a2, v9, a5);
  LODWORD(v21) = v46;
  if ( (_DWORD)v46 )
  {
    HIDWORD(v21) = HIDWORD(v46);
    if ( dword_48970C )
    {
      v22 = *(_DWORD *)sub_242FC8(v20);
      v23 = sub_98EEC(v21);
      sub_2594B0(v22, "lookup_symbol_aux (...) = %s\n", v23);
    }
  }
  else
  {
    v31 = sub_21D0BC(&v46, a2, a5);
    v21 = v46;
    if ( dword_48970C )
    {
      v32 = *(_DWORD *)sub_242FC8(v31);
      if ( (_DWORD)v21 )
        v33 = sub_98EEC(v21);
      else
        v33 = "NULL";
      sub_2594B0(v32, "lookup_symbol_aux (...) = %s\n", v33);
    }
  }
  *(_QWORD *)a1 = v21;
  return a1;
}
