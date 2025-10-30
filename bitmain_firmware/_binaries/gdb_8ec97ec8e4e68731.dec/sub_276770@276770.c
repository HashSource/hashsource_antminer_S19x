void __fastcall sub_276770(int a1, int a2, int *a3, _DWORD *a4)
{
  _DWORD *v7; // r0
  int v8; // r2
  _DWORD *v9; // r8
  _DWORD *v10; // r0
  unsigned __int64 v11; // r6
  char *v12; // r0
  int v13; // r0
  int v14; // lr
  int v15; // r10
  _DWORD *v16; // r3
  _DWORD *v17; // r11
  int *v18; // r2
  int *v19; // r5
  char *v20; // r9
  char *v21; // r0
  char *v22; // r4
  int *v23; // r8
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  unsigned __int64 v26; // r0
  int v27; // r11
  int v28; // r3
  _DWORD *v29; // r5
  int v30; // r0
  _BOOL4 v31; // r2
  _DWORD *v32; // r0
  char *v33; // r0
  char *v34; // r0
  int v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // lr
  int v39; // r4
  int v40; // r5
  int v41; // r8
  int v42; // r6
  int v43; // r10
  int v44; // r9
  int v45; // r4
  const char *v46; // r11
  char *v47; // r7
  int v48; // r2
  bool v49; // cc
  char *v50; // r10
  int v51; // r4
  _DWORD **v52; // r2
  _DWORD **v53; // r4
  int v54; // r3
  int v55; // r1
  char *v56; // [sp+14h] [bp-7Ch]
  int v57; // [sp+18h] [bp-78h]
  int v58; // [sp+1Ch] [bp-74h]
  int v59; // [sp+20h] [bp-70h]
  int v60; // [sp+24h] [bp-6Ch]
  int v61; // [sp+28h] [bp-68h]
  int v62; // [sp+54h] [bp-3Ch]
  int v63; // [sp+64h] [bp-2Ch]
  int v64; // [sp+8Ch] [bp-4h]

  v7 = sub_273FA0(a4, "id");
  v9 = sub_237CDC(a3[1], (char *)v7[1], v8);
  a3[3] = (int)v9;
  a3[4] = 0;
  v10 = sub_273FA0(a4, "size");
  if ( !v10 )
    return;
  v11 = *(_QWORD *)v10[1];
  if ( v11 <= 0x10000 )
  {
    ((void (__fastcall *)(_DWORD *, _DWORD))loc_23650C)(v9, v11);
    a3[4] = v11;
    return;
  }
  v12 = sub_98880(v11, SHIDWORD(v11));
  v13 = sub_273CF8(a1, "Struct size %s is larger than maximum (%d)", v12, 0x10000);
  v64 = v14;
  v15 = v13;
  v17 = v16;
  v19 = v18;
  v20 = (char *)sub_273FA0(v16, "name")[1];
  v21 = (char *)sub_273FA0(v17, "type");
  v22 = v21;
  if ( v21 )
  {
    v22 = (char *)*((_DWORD *)v21 + 1);
    v23 = sub_2361D0(v19[1], v22);
  }
  else
  {
    v23 = 0;
  }
  v24 = sub_273FA0(v17, "start");
  if ( v24 )
  {
    v11 = *(_QWORD *)v24[1];
    if ( v11 > 0x80000 )
    {
LABEL_34:
      v34 = sub_98880(v11, SHIDWORD(v11));
      sub_273CF8(v15, "Field start %s is larger than maximum (%d)", v34, 0x80000);
      goto LABEL_35;
    }
    v25 = sub_273FA0(v17, "end");
    if ( v25 )
    {
      v26 = *(_QWORD *)v25[1];
      if ( v26 <= 0x80000 )
      {
        v27 = v19[4];
        v28 = v26;
        v29 = (_DWORD *)v19[3];
        if ( !v27 )
        {
LABEL_38:
          sub_273CF8(v15, "Bitfields must live in explicitly sized types");
LABEL_39:
          sub_273CF8(v15, "Field \"%s\" references undefined type \"%s\"", v20, v22);
          goto LABEL_40;
        }
        if ( !v22 )
          goto LABEL_16;
        v63 = v26;
        v30 = strcmp(v22, "bool");
        v28 = v63;
        v31 = v63 != v11;
        if ( v30 )
          v31 = 0;
        if ( !v31 )
        {
LABEL_16:
          if ( v28 > 63 )
          {
LABEL_37:
            sub_273CF8(v15, "Bitfield \"%s\" goes past 64 bits (unsupported)", v20);
            goto LABEL_38;
          }
          if ( (int)v11 > v28 )
          {
LABEL_36:
            sub_273CF8(v15, "Bitfield \"%s\" has start after end", v20);
            goto LABEL_37;
          }
          if ( v28 < 8 * v27 )
          {
            if ( !v23 )
            {
              if ( (_DWORD)v11 != v28 )
                JUMPOUT(0x238380);
              JUMPOUT(0x238470);
            }
            sub_238204(v29, v20, v11, v28, (int)v23);
            __asm { POP             {R4-R11,PC} }
          }
LABEL_35:
          sub_273CF8(v15, "Bitfield \"%s\" does not fit in struct", v20);
          goto LABEL_36;
        }
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    sub_273CF8(v15, "Missing end value");
  }
  v32 = sub_273FA0(v17, "end");
  if ( v32 )
  {
    v26 = *(_QWORD *)v32[1];
    if ( v26 <= 0x80000 )
    {
      sub_273CF8(v15, "End specified but not start");
LABEL_32:
      LODWORD(v26) = sub_273CF8(v15, "Boolean fields must be one bit in size");
    }
LABEL_33:
    v33 = sub_98880(v26, SHIDWORD(v26));
    sub_273CF8(v15, "Field end %s is larger than maximum (%d)", v33, 0x80000);
    goto LABEL_34;
  }
  if ( !v22 )
    goto LABEL_41;
  if ( !v19[4] )
  {
    if ( v23 )
    {
      sub_2380CC((_DWORD *)v19[3], v20, (int)v23);
      return;
    }
    goto LABEL_39;
  }
LABEL_40:
  sub_273CF8(v15, "Explicitly sized type cannot contain non-bitfield \"%s\"", v20);
LABEL_41:
  v35 = sub_273CF8(v15, "Field \"%s\" has neither type nor bit position", v20);
  v62 = v38;
  v39 = v37;
  if ( !v37 )
    __und(0);
  v40 = v36;
  v41 = *(_DWORD *)v37;
  v61 = v35;
  v56 = *(char **)(v37 + 12);
  v57 = **(_DWORD **)(v37 + 20);
  if ( *(int *)v37 > 2 && !strcmp(*(const char **)(v37 + 24), "regnum") )
  {
    v43 = 3;
    v42 = **(_DWORD **)(v39 + 28);
  }
  else
  {
    v42 = *(_DWORD *)(v40 + 8);
    v43 = 2;
  }
  v44 = *(_DWORD *)(v40 + 4);
  if ( v43 >= v41 )
  {
    v47 = "int";
    v50 = 0;
    v51 = 1;
    goto LABEL_58;
  }
  v45 = v39 + 8;
  v46 = *(const char **)(v45 + 8 * v43);
  v60 = 8 * v43;
  v58 = v45 + 8 * v43;
  if ( !strcmp(v46, "type") )
  {
    v47 = *(char **)(v45 + 8 * v43++ + 4);
    v59 = strcmp(v47, "int");
    if ( v41 <= v43 )
    {
      v50 = 0;
      v51 = 1;
      goto LABEL_53;
    }
    v46 = *(const char **)(v45 + v60 + 8);
    v58 = v45 + v60 + 8;
  }
  else
  {
    v47 = "int";
    v59 = 0;
  }
  if ( !strcmp(v46, "group") )
  {
    v48 = v43 + 1;
    v49 = v41 <= v43 + 1;
    v50 = *(char **)(v58 + 4);
    if ( v49 )
    {
LABEL_64:
      v51 = 1;
      goto LABEL_53;
    }
    v46 = *(const char **)(v45 + 8 * v48);
    v58 = v45 + 8 * v48;
  }
  else
  {
    v50 = 0;
  }
  if ( strcmp(v46, "save-restore") )
    goto LABEL_64;
  v51 = **(_DWORD **)(v58 + 4);
LABEL_53:
  if ( !v59 || !strcmp(v47, "float") )
  {
LABEL_58:
    sub_237A20(v44, v56, v42, v51, v50, v57, v47);
    *(_DWORD *)(v40 + 8) = v42 + 1;
    __asm { POP             {R4-R11,PC} }
  }
  if ( sub_2361D0(v44, v47) )
  {
    v44 = *(_DWORD *)(v40 + 4);
    goto LABEL_58;
  }
  sub_273CF8(v61, "Register \"%s\" has unknown type \"%s\"", v56, v47);
  v53 = v52;
  v55 = sub_2A657C(v54);
  sub_238864(*v53, v55);
}
