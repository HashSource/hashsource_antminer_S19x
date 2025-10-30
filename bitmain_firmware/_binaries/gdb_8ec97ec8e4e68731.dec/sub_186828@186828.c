int __fastcall sub_186828(int a1, int a2)
{
  char **v3; // r10
  char *v4; // r8
  const char *v5; // r0
  size_t v6; // r0
  size_t v7; // r10
  char *v8; // r1
  int v9; // r6
  int v10; // r3
  char *v11; // r7
  int v12; // r9
  signed int v13; // r5
  int v14; // r8
  int v15; // r6
  _BYTE *v16; // r3
  unsigned int v17; // r6
  int v18; // r7
  int v19; // t1
  int v21; // r0
  char *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r0
  _BYTE *v26; // r2
  _BYTE *v27; // r3
  int v28; // r1
  int v29; // t1
  int v30; // r1
  int v31; // t1
  _BYTE *v32; // r3
  int v33; // r2
  int v34; // t1
  _BYTE *v35; // r3
  int v36; // r2
  int v37; // t1
  _BYTE *v38; // r3
  int v39; // r2
  int v40; // t1
  _BYTE *v41; // r3
  int v42; // r2
  int v43; // t1
  _BYTE *v44; // r3
  int v45; // r2
  int v46; // t1
  _BYTE *v47; // r2
  _BYTE *v48; // r3
  int v49; // r1
  int v50; // t1
  int v51; // r1
  int v52; // t1
  _BYTE *v53; // r3
  int v54; // r2
  int v55; // t1
  int v56; // r0
  signed int v57; // r3
  _BYTE *i; // r4
  int v59; // t1
  _BYTE v60[152]; // [sp-A0h] [bp-E4h] BYREF
  _BYTE v61[8]; // [sp-8h] [bp-4Ch] BYREF
  int v62; // [sp+0h] [bp-44h]
  const char *v63; // [sp+4h] [bp-40h]
  const char *v64; // [sp+8h] [bp-3Ch]
  char *s2; // [sp+Ch] [bp-38h]
  char **v66; // [sp+10h] [bp-34h]
  char **v67; // [sp+14h] [bp-30h]
  char **v68; // [sp+1Ch] [bp-28h] BYREF

  v62 = a2;
  if ( !a1 )
    sub_51E9C("signal to handle");
  memset(v60, 0, sizeof(v60));
  v68 = 0;
  sub_25B0DC(&v68, a1);
  v3 = v68;
  v66 = &v3[sub_31E100(v68)];
  if ( v66 == v3 )
    goto LABEL_21;
  v67 = v3;
  v64 = "%s is used by the debugger.\nAre you sure you want to change it? ";
  v63 = "Not confirmed, unchanged.\n";
  s2 = "all";
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v4 = *v67;
            v5 = *v67++;
            v6 = strlen(v5);
            v7 = v6;
            if ( (unsigned int)(unsigned __int8)*v4 - 48 > 9 )
            {
              if ( !v6 )
              {
LABEL_47:
                v25 = sub_99A88(v4);
                if ( v25 == 143 )
                  sub_946E0("Unrecognized or ambiguous flag word: \"%s\".", v4);
                v13 = v25;
                v15 = v25;
                goto LABEL_49;
              }
              v9 = 0;
              v11 = v4;
              v12 = 0;
            }
            else
            {
              v8 = v4 + 1;
              v9 = 0;
              do
              {
                v10 = (unsigned __int8)*v8;
                ++v9;
                v11 = v8;
                v12 = v9;
                ++v8;
              }
              while ( (unsigned int)(v10 - 48) <= 9 );
              if ( !v6 )
                goto LABEL_38;
            }
            v13 = strncmp(v4, s2, v6);
            if ( !v13 )
            {
              v14 = 1;
              v15 = 151;
              goto LABEL_16;
            }
            if ( strncmp(v4, "stop", v7) )
              break;
            v26 = v61;
            v27 = v61;
            v28 = dword_48797C + 151;
            do
            {
              v29 = (unsigned __int8)*--v27;
              --v28;
              if ( v29 )
                *(_BYTE *)(v28 + 1) = 1;
            }
            while ( v60 != v27 );
            v30 = dword_487980 + 151;
            do
            {
              v31 = (unsigned __int8)*--v26;
              --v30;
              if ( v31 )
                *(_BYTE *)(v30 + 1) = 1;
            }
            while ( v26 != v27 );
            if ( v66 == v67 )
              goto LABEL_21;
          }
          if ( strncmp(v4, "ignore", v7) )
            break;
          v32 = v61;
          v33 = dword_487948 + 151;
          do
          {
            v34 = (unsigned __int8)*--v32;
            --v33;
            if ( v34 )
              *(_BYTE *)(v33 + 1) = 0;
          }
          while ( v60 != v32 );
          if ( v66 == v67 )
            goto LABEL_21;
        }
        if ( v7 <= 1 )
          break;
        if ( !strncmp(v4, "print", v7) )
        {
          v35 = v61;
          v36 = dword_487980 + 151;
          do
          {
            v37 = (unsigned __int8)*--v35;
            --v36;
            if ( v37 )
              *(_BYTE *)(v36 + 1) = 1;
          }
          while ( v35 != v60 );
          if ( v66 == v67 )
            goto LABEL_21;
        }
        else if ( !strncmp(v4, "pass", v7) )
        {
          v38 = v61;
          v39 = dword_487948 + 151;
          do
          {
            v40 = (unsigned __int8)*--v38;
            --v39;
            if ( v40 )
              *(_BYTE *)(v39 + 1) = 1;
          }
          while ( v38 != v60 );
          if ( v66 == v67 )
            goto LABEL_21;
        }
        else
        {
          if ( v7 == 2 )
            break;
          if ( !strncmp(v4, "nostop", v7) )
          {
            v41 = v61;
            v42 = dword_48797C + 151;
            do
            {
              v43 = (unsigned __int8)*--v41;
              --v42;
              if ( v43 )
                *(_BYTE *)(v42 + 1) = 0;
            }
            while ( v41 != v60 );
            if ( v66 == v67 )
              goto LABEL_21;
          }
          else if ( !strncmp(v4, "noignore", v7) )
          {
            v44 = v61;
            v45 = dword_487948 + 151;
            do
            {
              v46 = (unsigned __int8)*--v44;
              --v45;
              if ( v46 )
                *(_BYTE *)(v45 + 1) = 1;
            }
            while ( v44 != v60 );
            if ( v66 == v67 )
              goto LABEL_21;
          }
          else
          {
            if ( v7 == 3 )
              break;
            if ( !strncmp(v4, "noprint", v7) )
            {
              v47 = v61;
              v48 = v61;
              v49 = dword_487980 + 151;
              do
              {
                v50 = (unsigned __int8)*--v48;
                --v49;
                if ( v50 )
                  *(_BYTE *)(v49 + 1) = 0;
              }
              while ( v48 != v60 );
              v51 = dword_48797C + 151;
              do
              {
                v52 = (unsigned __int8)*--v47;
                --v51;
                if ( v52 )
                  *(_BYTE *)(v51 + 1) = 0;
              }
              while ( v47 != v48 );
              if ( v66 == v67 )
                goto LABEL_21;
            }
            else
            {
              if ( strncmp(v4, "nopass", v7) )
                break;
              v53 = v61;
              v54 = dword_487948 + 151;
              do
              {
                v55 = (unsigned __int8)*--v53;
                --v54;
                if ( v55 )
                  *(_BYTE *)(v54 + 1) = 0;
              }
              while ( v53 != v60 );
              if ( v66 == v67 )
                goto LABEL_21;
            }
          }
        }
      }
      if ( !v9 )
        goto LABEL_47;
LABEL_38:
      v21 = strtol(v4, 0, 10);
      v13 = v21;
      if ( (unsigned int)(v21 - 1) > 0xE )
        sub_946E0("Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.");
      if ( *v11 != 45 )
      {
        v15 = v21;
LABEL_42:
        v14 = 0;
        goto LABEL_16;
      }
      v56 = strtol(&v4[v12 + 1], 0, 10);
      v15 = v56;
      if ( (unsigned int)(v56 - 1) > 0xE )
        sub_946E0("Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.");
      if ( v13 <= v56 )
        goto LABEL_42;
      v57 = v13;
      v13 = v56;
      v15 = v57;
LABEL_49:
      v14 = (unsigned int)v13 >> 31;
      if ( v13 >= 0 )
        break;
      if ( v66 == v67 )
        goto LABEL_21;
    }
    do
    {
      while ( 1 )
      {
LABEL_16:
        if ( v13 == 5 )
          goto LABEL_13;
        if ( v13 <= 5 )
          break;
        if ( (unsigned int)(v13 - 143) > 1 )
          goto LABEL_19;
LABEL_15:
        if ( ++v13 > v15 )
          goto LABEL_20;
      }
      if ( !v13 )
        goto LABEL_15;
      if ( v13 != 2 )
        goto LABEL_19;
LABEL_13:
      if ( v14 || v60[v13] )
        goto LABEL_15;
      v22 = sub_99A4C(v13);
      if ( !sub_25A3E4(v64, v22) )
      {
        v23 = sub_259858(v63);
        v24 = (_DWORD *)sub_242F8C(v23);
        sub_25680C(*v24);
        goto LABEL_15;
      }
LABEL_19:
      v60[v13++] = 1;
    }
    while ( v13 <= v15 );
LABEL_20:
    ;
  }
  while ( v66 != v67 );
LABEL_21:
  v16 = &v60[-1];
  v17 = 0;
  while ( 1 )
  {
    v19 = (unsigned __int8)*++v16;
    v18 = v19;
    if ( v19 )
      break;
    if ( ++v17 == 152 )
      return sub_31DAD0(v68);
  }
  sub_1867A8();
  sub_230A78(152, dword_487988);
  sub_230AA0(152, dword_487948);
  if ( v62 )
  {
    sub_259F10("Signal        Stop\tPrint\tPass to program\tDescription\n");
    for ( i = &v60[v17]; ; ++i )
    {
      if ( v18 )
        sub_186510(v17);
      if ( ++v17 == 152 )
        break;
      v59 = (unsigned __int8)i[1];
      v18 = v59;
    }
  }
  return sub_31DAD0(v68);
}
