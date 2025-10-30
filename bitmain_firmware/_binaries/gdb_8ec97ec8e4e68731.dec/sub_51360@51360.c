void __fastcall sub_51360(unsigned __int8 *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // lr
  int v16; // r3
  unsigned __int8 *v17; // r2
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r7
  unsigned int v20; // r6
  int v21; // r0
  unsigned int v22; // r1
  const char *v23; // r9
  int v24; // r3
  bool v25; // zf
  bool v26; // zf
  int v27; // r10
  int v28; // r11
  int v29; // r9
  void *v30; // r0
  char *v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r1
  unsigned __int8 *v39; // r12
  bool v40; // zf
  bool v41; // zf
  int v42; // r1
  int v43; // kr00_4
  int v44; // r3
  int v45; // r5
  int v46; // r0
  int v47; // r4
  int v48; // r4
  int v49; // r1
  int v50; // r2
  int v51; // r3
  char *v52; // r12
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r7
  int v59; // r0
  int v60; // kr04_4
  int v61; // r7
  int v62; // r8
  int v63; // r0
  int v64; // r0
  int v65; // kr08_4
  const char *v66; // r0
  int v67; // r5
  int v68; // r2
  const char *v69; // r0
  void *v70; // r0
  unsigned int v71; // r0
  int v72; // r0
  const char *v73; // r0
  const char *v74; // r0
  int v75; // [sp+8h] [bp-64h]
  int v76; // [sp+Ch] [bp-60h]
  const char *v77; // [sp+Ch] [bp-60h]
  const char *v78; // [sp+Ch] [bp-60h]
  const char **v79; // [sp+10h] [bp-5Ch]
  const char *v80; // [sp+14h] [bp-58h]
  unsigned __int8 *v81; // [sp+18h] [bp-54h] BYREF
  int v82; // [sp+1Ch] [bp-50h] BYREF
  _DWORD v83[2]; // [sp+20h] [bp-4Ch] BYREF
  void *ptr; // [sp+28h] [bp-44h] BYREF
  char *v85; // [sp+2Ch] [bp-40h]
  int v86; // [sp+30h] [bp-3Ch]
  void *v87; // [sp+34h] [bp-38h] BYREF
  int v88; // [sp+38h] [bp-34h]
  int v89; // [sp+3Ch] [bp-30h]
  _DWORD s[11]; // [sp+40h] [bp-2Ch] BYREF

  if ( !a1 )
  {
    sub_20324C();
    v64 = sub_203210(s);
    v6 = s[1];
    v7 = s[4];
    v8 = sub_2031F0(v64);
    if ( !v8 )
    {
      v65 = ((int (*)(void))sub_203200)();
      v8 = v65 + ((unsigned int)v65 >> 31);
      v7 -= v65 / 2;
      if ( v7 < 1 )
        v7 = 1;
    }
    goto LABEL_69;
  }
  if ( ((*a1 - 43) & 0xFD) == 0 )
  {
    v4 = a1[1];
    if ( !a1[1] )
    {
      sub_20324C();
      v5 = sub_203210(s);
      v6 = s[1];
      v7 = s[4];
      v8 = sub_2031F0(v5);
      if ( v8 )
      {
        v9 = *a1;
        if ( v9 != 43 )
        {
          if ( v9 == 45 )
          {
            v10 = sub_2031F0(v8);
            if ( v10 == 1 )
            {
              v74 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v6);
              sub_946E0("Already at the start of %s.", v74);
            }
            v11 = sub_2031F0(v10);
            v12 = sub_203200(v11);
            v13 = sub_2031F0(v12);
            v14 = v11 - v12;
            if ( v11 - v12 < 1 )
              v14 = 1;
            sub_2053D0(v6, v14, v13, v4);
          }
          return;
        }
      }
      else
      {
        v43 = sub_203200(0);
        v8 = v43 + ((unsigned int)v43 >> 31);
        v44 = *a1;
        v45 = v7 - v43 / 2;
        if ( v45 < 1 )
          v7 = 1;
        else
          v7 -= v43 / 2;
        if ( v44 == 45 )
        {
          v8 = sub_203200(v8);
          if ( v8 == 1 )
          {
            if ( v45 <= 1 )
              v7 = 1;
            else
              --v7;
          }
        }
      }
LABEL_69:
      v46 = sub_203200(v8);
      sub_2053D0(v6, v7, v46 + v7, 0);
      return;
    }
  }
  if ( !sub_1B7B9C() && !sub_1B7B24() )
    sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
  ptr = 0;
  v85 = 0;
  v86 = 0;
  memset(s, 0, 0x28u);
  v15 = *a1;
  v81 = a1;
  if ( v15 == 44 )
  {
    v16 = 0;
    v17 = a1;
    v18 = a1;
    v19 = a1;
    v20 = 1;
  }
  else
  {
    sub_19DBE0(v83, &v81, off_46D5A4[0], 0);
    sub_19B938(&v87, v83[0], 2, 0, 0, 0);
    v30 = ptr;
    v25 = ptr == 0;
    ptr = v87;
    v85 = (char *)v88;
    v86 = v89;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    if ( !v25 )
    {
      sub_339E64(v30);
      if ( v87 )
        sub_339E64(v87);
    }
    sub_50F98((int *)&ptr);
    v31 = v85;
    if ( v85 == ptr )
    {
      if ( v83[0] )
      {
        ((void (__fastcall *)(_DWORD *, _DWORD))loc_19D154)(v83, v83[0]);
        v31 = (char *)ptr;
      }
      goto LABEL_59;
    }
    v32 = *((_DWORD *)ptr + 1);
    v33 = *((_DWORD *)ptr + 2);
    v34 = *((_DWORD *)ptr + 3);
    s[0] = *(_DWORD *)ptr;
    s[1] = v32;
    s[2] = v33;
    s[3] = v34;
    v35 = *((_DWORD *)ptr + 5);
    v36 = *((_DWORD *)ptr + 6);
    v37 = *((_DWORD *)ptr + 7);
    s[4] = *((_DWORD *)ptr + 4);
    s[5] = v35;
    s[6] = v36;
    s[7] = v37;
    v38 = *((_DWORD *)ptr + 9);
    s[8] = *((_DWORD *)ptr + 8);
    s[9] = v38;
    if ( v83[0] )
      ((void (__fastcall *)(_DWORD *, _DWORD))loc_19D154)(v83, v83[0]);
    v19 = v81;
    v15 = *a1;
    v16 = v81 - a1;
    if ( a1 == v81 )
    {
      v19 = a1;
      v18 = a1;
      v21 = *a1;
    }
    else
    {
      v21 = *v81;
      if ( (unsigned int)(v15 - 48) > 9 )
      {
        v18 = a1;
      }
      else
      {
        v39 = a1 + 1;
        while ( 1 )
        {
          v18 = v39;
          if ( v81 == v39 )
            break;
          ++v39;
          if ( (unsigned int)*v18 - 48 > 9 )
            goto LABEL_37;
        }
        v18 = v81;
      }
    }
LABEL_37:
    v40 = v21 == 32;
    if ( v21 != 32 )
      v40 = v21 == 9;
    v17 = v19;
    if ( v40 )
    {
      do
      {
        v81 = ++v17;
        v21 = *v17;
        v41 = v21 == 32;
        if ( v21 != 32 )
          v41 = v21 == 9;
      }
      while ( v41 );
    }
    if ( v21 != 44 )
    {
      v20 = *v81;
      if ( !*v81 )
      {
        v28 = 1;
        v29 = *v81;
        v27 = v29;
        v75 = v29;
        goto LABEL_48;
      }
      goto LABEL_73;
    }
    v20 = 0;
  }
  v21 = -858993459;
  v22 = -858993459 * ((v85 - (_BYTE *)ptr) >> 3);
  if ( v22 > 1 )
  {
    v87 = ptr;
    v88 = -858993459 * ((v85 - (_BYTE *)ptr) >> 3);
    sub_4F880(ptr, v22, (int)"Specified first line '%.*s' is ambiguous:\n", v16, (const char *)a1);
    goto LABEL_58;
  }
  v23 = (const char *)(v17 + 1);
  v81 = v17 + 1;
  v24 = v17[1];
  v25 = v24 == 32;
  if ( v24 != 32 )
    v25 = v24 == 9;
  if ( v25 )
  {
    do
    {
      v81 = (unsigned __int8 *)++v23;
      v24 = *(unsigned __int8 *)v23;
      v26 = v24 == 9;
      if ( v24 != 9 )
        v26 = v24 == 32;
    }
    while ( v26 );
  }
  if ( !v24 )
  {
    if ( !*v81 )
    {
      if ( v20 )
        sub_946E0("Two empty args do not say what lines to list.");
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v75 = 1;
      goto LABEL_48;
    }
LABEL_73:
    sub_946E0("Junk at end of line specification.");
  }
  sub_19DBE0(&v82, &v81, off_46D5A4[0], 0);
  if ( v20 )
    sub_19B938(&v87, v82, 2, 0, 0, 0);
  else
    sub_19B938(&v87, v82, 2, 0, s[1], s[4]);
  sub_50F98((int *)&v87);
  v70 = (void *)v88;
  if ( v87 == (void *)v88 )
  {
LABEL_109:
    if ( v70 )
      sub_339E64(v70);
    if ( v82 )
      ((void (__fastcall *)(int *))loc_19D154)(&v82);
    goto LABEL_58;
  }
  v71 = -858993459 * ((v88 - (int)v87) >> 3);
  if ( v71 > 1 )
  {
    v83[0] = v87;
    v83[1] = -858993459 * ((v88 - (int)v87) >> 3);
    sub_4F880(v87, v71, (int)"Specified last line '%s' is ambiguous:\n", v23);
    v70 = v87;
    goto LABEL_109;
  }
  v29 = *((_DWORD *)v87 + 1);
  v27 = *((_DWORD *)v87 + 4);
  sub_339E64(v87);
  if ( v82 )
    v21 = ((int (__fastcall *)(int *))loc_19D154)(&v82);
  if ( *v81 )
    goto LABEL_73;
  if ( v20 )
  {
    v75 = *v81;
    v28 = v75;
    v15 = *a1;
  }
  else
  {
    if ( s[1] != v29 )
      sub_946E0("Specified first and last lines are in different files.");
    v75 = 0;
    v28 = 0;
    v15 = *a1;
  }
LABEL_48:
  if ( v15 == 42 )
  {
    if ( !s[1] )
    {
      v72 = sub_B894C();
      v73 = (const char *)sub_25AC8C(v72, s[5]);
      sub_946E0("No source file for address %s.", v73);
    }
    v76 = sub_1B7250(*(_DWORD *)(*(_DWORD *)(s[1] + 4) + 4));
    v79 = (const char **)sub_C3460(s[5]);
    if ( v79 )
    {
      v80 = (const char *)sub_25AC8C(v76, s[5]);
      if ( dword_46D448 )
        v77 = (const char *)sub_21B3C4(v79);
      else
        v77 = *v79;
      v66 = (const char *)((int (__fastcall *)(_DWORD))loc_2043D4)(s[1]);
      v21 = sub_259F10("%s is in %s (%s:%d).\n", v80, v77, v66, s[4]);
    }
    else
    {
      v78 = (const char *)sub_25AC8C(v76, s[5]);
      v69 = (const char *)((int (__fastcall *)(_DWORD))loc_2043D4)(s[1]);
      v21 = sub_259F10("%s is at %s:%d.\n", v78, v69, s[4]);
    }
  }
  if ( v18 != v19 && !s[1] )
    sub_946E0("No line number known for %s.", (const char *)a1);
  if ( a2 )
    v21 = sub_2435A0("");
  if ( v20 )
  {
    if ( !v29 )
      sub_946E0("No default source file yet.  Do \"help list\".");
    v42 = v27 - (sub_203200(v21) - 1);
    if ( v42 < 1 )
      v42 = 1;
    sub_2053D0(v29, v42, v27 + 1, 0);
  }
  else
  {
    v47 = s[1];
    if ( !s[1] )
      sub_946E0("No default source file yet.  Do \"help list\".");
    if ( v28 )
    {
      v31 = (char *)ptr;
      if ( ptr != v85 )
      {
        v48 = 0;
        do
        {
          v49 = *(_DWORD *)&v31[v48 + 4];
          v50 = *(_DWORD *)&v31[v48 + 8];
          v51 = *(_DWORD *)&v31[v48 + 12];
          v52 = &v31[v48 + 16];
          s[0] = *(_DWORD *)&v31[v48];
          s[1] = v49;
          s[2] = v50;
          s[3] = v51;
          v53 = *(_DWORD *)v52;
          v54 = *((_DWORD *)v52 + 1);
          v55 = *((_DWORD *)v52 + 2);
          v56 = *((_DWORD *)v52 + 3);
          v52 += 16;
          s[4] = v53;
          s[5] = v54;
          s[6] = v55;
          s[7] = v56;
          v57 = *((_DWORD *)v52 + 1);
          v58 = v53;
          s[8] = *(_DWORD *)v52;
          s[9] = v57;
          v60 = sub_203200(s[8]);
          v59 = v60 + ((unsigned int)v60 >> 31);
          v61 = v58 - v60 / 2;
          if ( v61 < 1 )
            v61 = 1;
          if ( (unsigned int)(-858993459 * ((v85 - (_BYTE *)ptr) >> 3)) > 1 )
            v59 = sub_4F7D0(s);
          v62 = s[1];
          v63 = sub_203200(v59);
          sub_2053D0(v62, v61, v61 + v63, 0);
          v31 = (char *)ptr;
          ++v20;
          v48 += 40;
        }
        while ( v20 < -858993459 * ((v85 - (_BYTE *)ptr) >> 3) );
      }
      goto LABEL_59;
    }
    v67 = s[4];
    if ( v75 )
      v68 = v67 + sub_203200(v21);
    else
      v68 = v27 + 1;
    sub_2053D0(v47, v67, v68, 0);
  }
LABEL_58:
  v31 = (char *)ptr;
LABEL_59:
  if ( v31 )
    sub_339E64(v31);
}
