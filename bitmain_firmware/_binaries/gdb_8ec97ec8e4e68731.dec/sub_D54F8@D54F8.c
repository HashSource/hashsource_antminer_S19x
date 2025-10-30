int __fastcall sub_D54F8(_BYTE *a1, int a2, int (__fastcall *a3)(_DWORD *))
{
  int v3; // r6
  int v6; // r2
  _DWORD *v7; // r10
  int v8; // r8
  int v9; // r7
  unsigned int v10; // r0
  _DWORD *v11; // r9
  _DWORD *v12; // r11
  int v13; // r0
  char *v14; // r3
  signed int v15; // r0
  int v16; // r11
  __int64 v17; // r0
  _DWORD *v18; // r6
  int v19; // r2
  __int64 v21; // r0
  int v22; // r0
  int v24; // [sp+10h] [bp-8Ch]
  int v25; // [sp+18h] [bp-84h] BYREF
  void *v26[2]; // [sp+1Ch] [bp-80h] BYREF
  _BYTE v27[16]; // [sp+24h] [bp-78h] BYREF
  void *ptr[2]; // [sp+34h] [bp-68h] BYREF
  _BYTE v29[16]; // [sp+3Ch] [bp-60h] BYREF
  _BYTE v30[20]; // [sp+4Ch] [bp-50h] BYREF
  int v31; // [sp+60h] [bp-3Ch]

  v3 = 0;
  v25 = 0;
  v24 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v30);
  v7 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v8 = 0;
    v9 = 14;
    while ( 1 )
    {
      if ( a3 && !a3(v7) )
        goto LABEL_23;
      if ( !a1 || !*a1 )
        break;
      if ( !a2 )
      {
        if ( !sub_5AF7C(a1, v7[6], v6) )
          goto LABEL_23;
        goto LABEL_9;
      }
      v21 = sub_14CC00(a1);
      v6 = v7[6];
      if ( v6 == v21 )
      {
LABEL_10:
        v10 = v7[3];
        v11 = (_DWORD *)v7[7];
        if ( v10 != 6 )
          goto LABEL_11;
LABEL_83:
        if ( v11 )
        {
          if ( !*v11 )
          {
            if ( v11[13] != -1 )
            {
              v12 = (_DWORD *)*v11;
              goto LABEL_13;
            }
            if ( v11[14] != -1 )
            {
              v12 = (_DWORD *)*v11;
              do
              {
LABEL_13:
                v13 = ((int (__fastcall *)(_DWORD))loc_16666C)(v11[11]);
                v11 = (_DWORD *)*v11;
                if ( (int)v12 < v13 )
                  v12 = (_DWORD *)v13;
              }
              while ( v11 );
              v10 = v7[3];
LABEL_17:
              if ( v3 < (int)v12 )
                v3 = (int)v12;
              if ( v10 > 0x21 )
              {
LABEL_111:
                ((void (*)(void))loc_C93F0)();
                v22 = sub_257270(v24);
                sub_338FFC(v22);
              }
            }
            v14 = &aStdVectorSymta_0[8 * v10];
            if ( *((_DWORD *)v14 + 915) != v10 )
              goto LABEL_111;
            ++v8;
            v15 = strlen(*((const char **)v14 + 916));
            if ( v9 < v15 )
              v9 = v15;
            goto LABEL_23;
          }
LABEL_12:
          v12 = 0;
          goto LABEL_13;
        }
LABEL_89:
        v12 = v11;
        goto LABEL_17;
      }
LABEL_23:
      v7 = (_DWORD *)v7[2];
      if ( !v7 )
        goto LABEL_24;
    }
    if ( a2 )
    {
      v10 = v7[3];
      v11 = (_DWORD *)v7[7];
      if ( v10 == 6 )
        goto LABEL_83;
LABEL_11:
      if ( v11 )
        goto LABEL_12;
      goto LABEL_89;
    }
LABEL_9:
    if ( (int)v7[6] > 0 )
      goto LABEL_10;
    goto LABEL_23;
  }
  v3 = 0;
  v9 = 14;
  v8 = 0;
LABEL_24:
  ptr[0] = v29;
  if ( v31 )
    v16 = 6;
  else
    v16 = 5;
  sub_CB204(ptr, "BreakpointTable", (int)"");
  sub_25704C(v24, v16, v8, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v8 )
  {
    sub_B7674();
    sub_B7694(0);
  }
  v26[0] = v27;
  sub_CB204(v26, "number", (int)"");
  ptr[0] = v29;
  sub_CB204(ptr, &dword_387A94, (int)&dword_387A94 + 3);
  sub_2571B8(v24, 7, -1, v26, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v26[0] != v27 )
    sub_339E64(v26[0]);
  if ( v8 )
    sub_B7694(1);
  v26[0] = v27;
  sub_CB204(v26, "type", (int)"");
  ptr[0] = v29;
  sub_CB204(ptr, "Type", (int)"");
  sub_2571B8(v24, v9, -1, v26, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v26[0] != v27 )
    sub_339E64(v26[0]);
  if ( v8 )
    sub_B7694(2);
  v26[0] = v27;
  sub_CB204(v26, "disp", (int)"");
  ptr[0] = v29;
  sub_CB204(ptr, "Disp", (int)"");
  sub_2571B8(v24, 4, -1, v26, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v26[0] != v27 )
    sub_339E64(v26[0]);
  if ( v8 )
    sub_B7694(3);
  v26[0] = v27;
  sub_CB204(v26, "enabled", (int)"");
  ptr[0] = v29;
  sub_CB204(ptr, &dword_387AA8, (int)&dword_387AA8 + 3);
  sub_2571B8(v24, 3, -1, v26, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v26[0] != v27 )
    sub_339E64(v26[0]);
  if ( v31 )
  {
    if ( v8 )
    {
      sub_B7694(4);
      if ( v3 > 32 )
        goto LABEL_56;
    }
    else if ( v3 > 32 )
    {
LABEL_56:
      v26[0] = v27;
      sub_CB204(v26, "addr", (int)"");
      ptr[0] = v29;
      sub_CB204(ptr, "Address", (int)"");
      sub_2571B8(v24, 18, -1, v26, ptr);
LABEL_57:
      if ( ptr[0] != v29 )
        sub_339E64(ptr[0]);
      if ( v26[0] != v27 )
        sub_339E64(v26[0]);
      goto LABEL_61;
    }
    v26[0] = v27;
    sub_CB204(v26, "addr", (int)"");
    ptr[0] = v29;
    sub_CB204(ptr, "Address", (int)"");
    sub_2571B8(v24, 10, -1, v26, ptr);
    goto LABEL_57;
  }
LABEL_61:
  if ( v8 )
    sub_B7694(5);
  v26[0] = v27;
  sub_CB204(v26, "what", (int)"");
  ptr[0] = v29;
  sub_CB204(ptr, "What", (int)"");
  sub_2571B8(v24, 40, 2, v26, ptr);
  if ( ptr[0] != v29 )
    sub_339E64(ptr[0]);
  if ( v26[0] != v27 )
    sub_339E64(v26[0]);
  LODWORD(v17) = sub_25722C(v24);
  if ( !v8 )
  {
    v18 = (_DWORD *)dword_478348;
    if ( !dword_478348 )
    {
      sub_257270(v24);
      goto LABEL_91;
    }
    while ( 1 )
    {
LABEL_69:
      LODWORD(v17) = sub_258BD4(v17);
      if ( a3 )
      {
        LODWORD(v17) = a3(v18);
        if ( !(_DWORD)v17 )
          goto LABEL_76;
      }
      if ( !a1 || !*a1 )
        break;
      if ( a2 )
      {
        v17 = sub_14CC00(a1);
        if ( v18[6] == v17 )
          goto LABEL_75;
LABEL_76:
        v18 = (_DWORD *)v18[2];
        if ( !v18 )
          goto LABEL_77;
      }
      else
      {
        LODWORD(v17) = sub_5AF7C(a1, v18[6], v19);
        if ( (_DWORD)v17 )
          goto LABEL_96;
        v18 = (_DWORD *)v18[2];
        if ( !v18 )
        {
LABEL_77:
          sub_257270(v24);
          if ( v8 )
            goto LABEL_78;
LABEL_91:
          if ( !a3 )
          {
            if ( !a1 || !*a1 )
            {
              sub_25738C(v24, "No breakpoints or watchpoints.\n");
              sub_B76F8();
              return v8;
            }
            sub_25738C(v24, "No breakpoint or watchpoint matching '%s'.\n", a1);
          }
LABEL_80:
          sub_B76F8();
          return v8;
        }
      }
    }
    if ( !a2 )
    {
LABEL_96:
      if ( (int)v18[6] <= 0 )
        goto LABEL_76;
    }
LABEL_75:
    LODWORD(v17) = sub_D53BC(v18, &v25, a2);
    goto LABEL_76;
  }
  LODWORD(v17) = sub_B76B8();
  v18 = (_DWORD *)dword_478348;
  if ( dword_478348 )
    goto LABEL_69;
  sub_257270(v24);
LABEL_78:
  if ( !v25 || dword_48A510 )
    goto LABEL_80;
  sub_1C6E7C(*(_DWORD *)(v25 + 44), *(_DWORD *)(v25 + 52));
  sub_B76F8();
  return v8;
}
