int __fastcall sub_262800(
        int a1,
        int a2,
        char *a3,
        int a4,
        int *a5,
        int a6,
        int *a7,
        int *a8,
        _BOOL4 *a9,
        int a10,
        unsigned int a11)
{
  const char *v11; // r8
  unsigned int v16; // r6
  int v17; // r5
  int i; // r5
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r3
  _DWORD *v26; // r0
  _BYTE *v27; // r3
  unsigned int v28; // r6
  int v29; // r5
  int v30; // r11
  _BOOL4 v31; // r3
  int v32; // r0
  int v34; // r3
  unsigned int *v35; // r3
  char *v36; // r3
  bool v37; // zf
  int v38; // r3
  const char *v39; // r2
  int v40; // r0
  int v41; // r2
  unsigned int *v42; // r3
  _BOOL4 v43; // r3
  bool v44; // cc
  int v45; // r0
  _DWORD *v46; // r0
  int v47; // r4
  int v48; // r0
  int v49; // r0
  char *v50; // r3
  unsigned int v51; // r2
  bool v52; // cc
  const char *v53; // r2
  const char *v54; // r2
  _DWORD *v55; // r0
  _DWORD *v56; // r0
  int v57; // r0
  int v58; // r0
  __int64 v59; // r0
  int v60; // r3
  int v61; // r0
  _BOOL4 v62; // r3
  void *v63; // [sp+18h] [bp-4Ch]
  int v64; // [sp+1Ch] [bp-48h]
  unsigned int v65; // [sp+1Ch] [bp-48h]
  _DWORD *v66; // [sp+20h] [bp-44h]
  int *v67; // [sp+24h] [bp-40h]
  int v68; // [sp+24h] [bp-40h]
  int v69; // [sp+24h] [bp-40h]
  char *s1; // [sp+28h] [bp-3Ch]
  char *s1a; // [sp+28h] [bp-3Ch]
  char *s2a; // [sp+2Ch] [bp-38h]
  char *s2; // [sp+2Ch] [bp-38h]
  int *v74; // [sp+30h] [bp-34h] BYREF
  int *v75; // [sp+34h] [bp-30h] BYREF
  int *v76; // [sp+38h] [bp-2Ch] BYREF
  int v77; // [sp+3Ch] [bp-28h] BYREF
  int v78; // [sp+40h] [bp-24h] BYREF
  int v79; // [sp+44h] [bp-20h] BYREF
  unsigned int *v80; // [sp+48h] [bp-1Ch] BYREF
  int v81; // [sp+4Ch] [bp-18h] BYREF
  int v82; // [sp+50h] [bp-14h] BYREF
  int v83; // [sp+54h] [bp-10h] BYREF
  unsigned int v84[3]; // [sp+58h] [bp-Ch] BYREF

  v16 = a4 - 1;
  if ( !a5 || (v17 = *a5) == 0 )
  {
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v63 = sub_9253C((int)nullsub_39, 0);
    if ( v16 <= 1 )
    {
      v59 = sub_94700(
              (int)"valops.c",
              2511,
              "%s: Assertion `%s' failed.",
              "int find_overload_match(value**, int, const char*, oload_search_type, value**, symbol*, value**, symbol**,"
              " int*, int, noside)",
              "obj");
LABEL_130:
      sub_946E0("Internal error: incompatible overload candidates proposed", HIDWORD(v59));
    }
    v66 = 0;
LABEL_15:
    if ( (a4 & 0xFFFFFFFD) == 0 )
    {
      v28 = -1;
      v11 = 0;
      v29 = -1;
      v30 = 2;
      v67 = 0;
      v64 = -1;
LABEL_17:
      v31 = a4 == 2;
      goto LABEL_18;
    }
    while ( 1 )
    {
LABEL_42:
      sub_92F64(2, "No symbol \"%s\" in current context.", a3);
LABEL_43:
      if ( v34 )
      {
        if ( !v81 && !v80 )
        {
LABEL_46:
          if ( v11 )
          {
            v39 = "";
            if ( *v11 )
              v39 = "::";
          }
          else
          {
            v39 = "";
          }
          sub_946E0("Couldn't find method %s%s%s", v11, v39, a3);
        }
LABEL_50:
        if ( !((int (__fastcall *)(_DWORD))loc_1708E0)(*(_DWORD *)(v34 + 4)) )
        {
          sub_94700(
            (int)"valops.c",
            2548,
            "%s: Assertion `%s' failed.",
            "int find_overload_match(value**, int, const char*, oload_search_type, value**, symbol*, value**, symbol**, i"
            "nt*, int, noside)",
            "TYPE_SELF_TYPE (fns_ptr[0].type) != NULL");
LABEL_141:
          v59 = sub_94700(
                  (int)"valops.c",
                  2789,
                  "%s: Assertion `%s' failed.",
                  "xmethod_worker* VEC_xmethod_worker_ptr_index(const VEC_xmethod_worker_ptr*, unsigned int, const char*, unsigned int)",
                  "index");
LABEL_142:
          sub_946E0("Ambiguous overload resolution", HIDWORD(v59));
        }
        v40 = ((int (__fastcall *)(int, int, int, int, _DWORD, _DWORD, int **))loc_26072C)(a1, a2, v81, v78, 0, 0, &v76);
        v65 = ~v40;
        v29 = v40;
        v41 = v78 != 0 && v40 >= 0;
        if ( v78 == 0 || v40 < 0 || (v41 = *(unsigned __int16 *)(v78 + 16 * v40 + 14), v41 == 1) )
        {
          v30 = sub_26052C(v76 + 1, a2, v41);
          sub_9253C(2489164, (int)v76);
          v42 = v80;
          if ( !v80 )
          {
LABEL_55:
            if ( v29 < 0 )
            {
              v64 = v29;
              v28 = -1;
              goto LABEL_30;
            }
LABEL_57:
            v28 = -1;
LABEL_58:
            v64 = v29;
            v67 = v76;
            goto LABEL_59;
          }
        }
        else
        {
          v30 = sub_26052C(v76 + 1, a2, 0);
          sub_9253C(2489164, (int)v76);
          v42 = v80;
          if ( !v80 )
            goto LABEL_57;
        }
        if ( !*v42 )
          goto LABEL_55;
        v28 = ((int (__fastcall *)(int, int, _DWORD, _DWORD, unsigned int *, _DWORD, int **))loc_26072C)(
                a1,
                a2,
                0,
                0,
                v42,
                0,
                &v75);
        v69 = sub_26052C(v75 + 1, a2, 0);
        sub_9253C((int)sub_25FB4C, (int)v75);
        sub_9253C((int)sub_1584E8, (int)v80);
        v62 = (v28 & 0x80000000) == 0;
        if ( (v62 & (v65 >> 31)) != 0 )
        {
          switch ( sub_173D1C(v75, v76) )
          {
            case 0:
            case 1:
              if ( v69 )
                goto LABEL_121;
              goto LABEL_122;
            case 2:
LABEL_122:
              v29 = v28;
              v30 = v69;
              v67 = v75;
              v64 = -1;
              goto LABEL_59;
            case 3:
LABEL_121:
              v28 = -1;
              v64 = v29;
              v67 = v76;
              goto LABEL_59;
            default:
              sub_94700(
                (int)"valops.c",
                2609,
                "%s: %s",
                "int find_overload_match(value**, int, const char*, oload_search_type, value**, symbol*, value**, symbol*"
                "*, int*, int, noside)",
                "Unexpected overload comparison result");
              break;
          }
        }
        if ( v29 >= 0 )
          goto LABEL_58;
        v64 = v29;
        v29 = v28;
        v30 = v69;
      }
      else
      {
        v35 = v80;
        if ( !v80 )
          goto LABEL_46;
LABEL_28:
        if ( !*v35 )
          goto LABEL_29;
        v64 = -1;
        v29 = ((int (__fastcall *)(int, int, _DWORD, _DWORD, unsigned int *, _DWORD, int **))loc_26072C)(
                a1,
                a2,
                0,
                0,
                v35,
                0,
                &v75);
        v30 = sub_26052C(v75 + 1, a2, 0);
        sub_9253C((int)sub_25FB4C, (int)v75);
        sub_9253C((int)sub_1584E8, (int)v80);
        v62 = v29 >= 0;
      }
      if ( !v62 )
      {
        v28 = v29;
        goto LABEL_30;
      }
      v28 = v29;
      v67 = v75;
LABEL_59:
      if ( a4 != 1 )
        goto LABEL_17;
      if ( v29 != -1 )
      {
        a1 = -1;
        s1a = 0;
        goto LABEL_62;
      }
    }
  }
  v66 = (_DWORD *)sub_26BC70(*a5);
  v77 = v17;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v63 = sub_9253C((int)nullsub_39, 0);
  if ( v16 > 1 )
    goto LABEL_15;
  for ( i = sub_26EA24(v17); ; i = sub_26EA24(v19) )
  {
    v20 = (_DWORD *)sub_26BC70(i);
    if ( **(_BYTE **)(sub_171258(v20) + 24) != 1 )
      break;
    v19 = sub_26210C(i);
  }
  v11 = *(const char **)(*(_DWORD *)(sub_26BC70(i) + 24) + 8);
  v21 = (_DWORD *)sub_26BC70(i);
  if ( **(_BYTE **)(sub_171258(v21) + 24) == 3 )
  {
    v55 = (_DWORD *)sub_26BC70(i);
    v56 = (_DWORD *)sub_171258(v55);
    v57 = sub_2604DC(a3, i, v56, 0);
    *a7 = v57;
    if ( v57 )
    {
      *a9 = 1;
      sub_92620(v63);
      return 0;
    }
  }
  v22 = v77;
  while ( 1 )
  {
    v23 = (_DWORD *)sub_26BC70(v22);
    v24 = sub_171258(v23);
    v25 = **(char **)(v24 + 24);
    if ( v25 != 1 && (unsigned int)(unsigned __int8)v25 - 18 > 1 )
      break;
    v77 = sub_26210C(v77);
    v26 = (_DWORD *)sub_26BC70(v77);
    v27 = *(_BYTE **)(sub_171258(v26) + 24);
    v22 = v77;
    if ( *v27 != 7 )
    {
      v22 = sub_26EAAC(v77);
      v77 = v22;
    }
  }
  if ( (unsigned int)(unsigned __int8)v25 - 3 > 1 )
    sub_946E0("Attempt to extract a component of a value that is not a struct or union");
  v78 = 0;
  v81 = 0;
  v80 = 0;
  sub_25FB58(&v77, a3, 0, 0, (_DWORD *)v24, &v78, &v81, &v80, &v82, v84);
  v34 = v78;
  if ( a4 == 1 )
    goto LABEL_43;
  if ( v78 )
    goto LABEL_50;
  v35 = v80;
  if ( v80 )
    goto LABEL_28;
LABEL_29:
  v28 = -1;
  v64 = -1;
LABEL_30:
  if ( a4 == 1 )
    goto LABEL_42;
  v30 = 2;
  v31 = a4 == 2;
  v67 = 0;
  v29 = -1;
LABEL_18:
  if ( v31 )
    *(_DWORD *)a1 = sub_26210C(*(_DWORD *)a1);
  if ( a6 )
  {
    v32 = sub_21B3C4(a6);
    if ( !v32 )
      goto LABEL_23;
    s1 = (char *)v32;
    if ( **(_BYTE **)(sub_171258(*(_DWORD **)(a6 + 24)) + 24) != 7 )
      goto LABEL_23;
    s2 = s1;
    v60 = sub_1000B8((int)s1);
    s1a = (char *)v60;
    if ( !v60 )
      goto LABEL_23;
    sub_9253C((int)sub_25FB4C, v60);
    v61 = strcmp(s1a, s2);
    v36 = s2;
    if ( !v61 )
      goto LABEL_23;
  }
  else
  {
    if ( !a3 )
    {
LABEL_23:
      *a8 = a6;
      sub_92620(v63);
      return 0;
    }
    v36 = a3;
    s1a = a3;
  }
  ((void (__fastcall *)(int, int, char *, char *, _DWORD, int *, int **, int *, int))loc_260A9C)(
    a1,
    a2,
    s1a,
    v36,
    0,
    &v79,
    &v74,
    &v83,
    a10);
  a1 = v83;
  v37 = v83 == -1;
  if ( v83 == -1 )
    v37 = v29 == -1;
  v38 = v37;
  if ( v83 >= 0 )
  {
    s2a = (char *)v38;
    a2 = sub_26052C(v74 + 1, a2, 0);
    sub_9253C((int)sub_25FB4C, v79);
    sub_9253C((int)sub_25FB4C, (int)v74);
    if ( s2a )
      goto LABEL_42;
    if ( v29 >= 0 )
    {
      switch ( sub_173D1C(v74, v67) )
      {
        case 0:
          goto LABEL_142;
        case 1:
          goto LABEL_130;
        case 2:
          v30 = a2;
          v29 = -1;
          goto LABEL_62;
        case 3:
          a1 = -1;
          goto LABEL_62;
        default:
          sub_946E0("Internal error: unexpected overload comparison result");
      }
    }
  }
  else
  {
    v68 = v38;
    sub_9253C((int)sub_25FB4C, v79);
    sub_9253C((int)sub_25FB4C, (int)v74);
    if ( v68 )
      goto LABEL_42;
    a2 = 2;
  }
  if ( v29 == -1 )
    v30 = a2;
LABEL_62:
  if ( v30 == 2 )
  {
    if ( a4 == 1 )
    {
      if ( v11 )
      {
        v53 = "::";
        if ( !*v11 )
          v53 = "";
      }
      else
      {
        v53 = "";
      }
      sub_946E0("Cannot resolve method %s%s%s to any overloaded instance", v11, v53, a3);
    }
    sub_946E0("Cannot resolve function %s to any overloaded instance", s1a);
  }
  if ( v30 == 1 )
  {
    if ( a4 == 1 )
    {
      if ( v11 )
      {
        v54 = "";
        if ( *v11 )
          v54 = "::";
      }
      else
      {
        v54 = "";
      }
      sub_946B0("Using non-standard conversion to match method %s%s%s to supplied arguments", v11, v54, a3);
    }
    else
    {
      sub_946B0("Using non-standard conversion to match function %s to supplied arguments", s1a);
    }
  }
  if ( a9 )
  {
    v43 = v29 >= 0;
    if ( !v78 )
      v43 = 0;
    if ( v43 )
      v43 = *(unsigned __int16 *)(v78 + 16 * v29 + 14) == 1;
    *a9 = v43;
  }
  if ( v29 == -1 )
  {
    *a8 = *(_DWORD *)(v79 + 4 * a1);
  }
  else if ( v64 < 0 )
  {
    if ( !v80 || v28 >= *v80 )
      goto LABEL_141;
    v58 = ((int (__fastcall *)(unsigned int))loc_15828C)(v80[v28 + 2]);
    *a7 = sub_26CFF0(v58);
  }
  else
  {
    v44 = a11 > 2;
    if ( a11 != 2 )
      v44 = *(unsigned __int16 *)(v78 + 16 * v29 + 14) > 1u;
    if ( v44 )
      v45 = sub_FC6AC();
    else
      v45 = sub_26D410(&v77, v78, v29, v82, v84[0], v84[1]);
    *a7 = v45;
  }
  if ( a5 )
  {
    v46 = (_DWORD *)sub_26BC70(v77);
    v47 = sub_171258(v46);
    v48 = sub_171258(v66);
    if ( **(_BYTE **)(v47 + 24) == 1 )
    {
      v49 = v77;
    }
    else
    {
      v50 = *(char **)(v48 + 24);
      v49 = v77;
      v51 = *v50;
      v52 = v51 > 1;
      if ( v51 != 1 )
        v52 = (unsigned __int8)(v51 - 18) > 1u;
      if ( !v52 )
      {
        v49 = sub_2616BC(v77);
        v77 = v49;
      }
    }
    *a5 = v49;
  }
  sub_92620(v63);
  if ( v30 == 1 )
    return 10;
  else
    return 0;
}
