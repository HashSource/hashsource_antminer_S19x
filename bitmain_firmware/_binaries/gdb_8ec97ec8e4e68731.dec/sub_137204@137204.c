void __fastcall sub_137204(int a1, int *a2)
{
  char *v2; // r7
  int v4; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r10
  int v9; // r9
  const char *v10; // r0
  char *v11; // r1
  char *v12; // r8
  int v13; // r4
  size_t v14; // r0
  int v15; // r2
  int v16; // r12
  int v17; // r0
  size_t v18; // r0
  int v19; // r2
  size_t v20; // r1
  int v21; // r4
  size_t v22; // r0
  int v23; // r9
  int v24; // r4
  size_t v25; // r0
  int v26; // r4
  size_t v27; // r1
  int v28; // r2
  int v29; // r11
  int v30; // r10
  int v31; // r9
  size_t v32; // r1
  int v33; // r4
  size_t v34; // r1
  int v35; // r2
  int v36; // r12
  int v37; // r0
  int v38; // r0
  const char *v39; // r0
  int v40; // [sp+4h] [bp-38h]
  int v41; // [sp+Ch] [bp-30h]
  int v42; // [sp+1Ch] [bp-20h]
  int *v43; // [sp+24h] [bp-18h] BYREF
  __int16 v44; // [sp+28h] [bp-14h] BYREF
  __int16 v45; // [sp+2Ah] [bp-12h]
  int v46; // [sp+30h] [bp-Ch]
  int v47; // [sp+34h] [bp-8h]

  v4 = *a2;
  v6 = sub_1B7250(*a2);
  v7 = *(_DWORD *)(v4 + 152);
  if ( v7 == -1 )
  {
    sub_94700((int)"dwarf2read.c", 9189, "sect_index_text not initialized");
LABEL_79:
    v12 = v2;
    goto LABEL_16;
  }
  v8 = v6;
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 144) + 4 * v7);
  if ( (*(_BYTE *)(a1 + 7) & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
    {
      v10 = *(const char **)(a1 + 8);
      if ( !v10 )
        goto LABEL_6;
    }
    else
    {
      sub_131344(a1, a2);
      v10 = *(const char **)(a1 + 8);
      if ( !v10 )
        goto LABEL_6;
    }
    if ( !strchr(v10, 60) )
    {
      v36 = *(_DWORD *)a1;
      v44 = 0;
      v46 = v36;
      v47 = 0;
      v45 = v45 & 0x8000 | 0x10;
      v43 = a2;
      v37 = sub_12E620((int *)8, (int)&v44, &v43);
      v38 = sub_1359DC(0, v37, v43, 0);
      v2 = (char *)sub_327254(v38);
      goto LABEL_8;
    }
  }
LABEL_6:
  v11 = sub_1316E0(a1, a2);
  if ( !v11 || (v2 = (char *)sub_122248(0, v11, *(const char **)(a1 + 8), 0, a2 + 16)) == 0 )
  {
    v2 = *(char **)(a1 + 8);
    switch ( *(_WORD *)(a1 + 4) )
    {
      case 2:
      case 4:
      case 0x13:
      case 0x17:
      case 0x38:
        if ( (*(_WORD *)(a1 + 6) & 0x204) != 4 )
        {
          v33 = 0;
          v12 = 0;
LABEL_49:
          v34 = strlen(v2);
          if ( a2[16] == 4 )
            v35 = v4 + 108;
          else
            v35 = v4 + 120;
          sub_1D2258(v2, v34, v33, 2, 8, v35, 0, a2[16], v4);
          goto LABEL_15;
        }
        return;
      case 8:
      case 0x39:
        v13 = 0;
        v12 = 0;
LABEL_13:
        v14 = strlen(v2);
        v15 = a2[16];
        v16 = v4 + 108;
        goto LABEL_14;
      case 0x16:
      case 0x21:
      case 0x24:
        v13 = 0;
        v12 = 0;
LABEL_45:
        v14 = strlen(v2);
        v15 = a2[16];
        v16 = v4 + 120;
LABEL_14:
        sub_1D2258(v2, v14, v13, 1, 8, v16, 0, v15, v4);
        goto LABEL_15;
      case 0x1E:
        v21 = 0;
        v12 = 0;
LABEL_27:
        v22 = strlen(v2);
        sub_1D2258(v2, v22, v21, 3, 8, v4 + 108, 0, a2[16], v4);
        goto LABEL_15;
      case 0x27:
        v23 = 0;
        v12 = 0;
LABEL_29:
        if ( (*(_BYTE *)(a1 + 6) & 2) != 0 )
          v24 = v4 + 108;
        else
          v24 = v4 + 120;
        v25 = strlen(v2);
        sub_1D2258(v2, v25, v23, 1, 2, v24, 0, a2[16], v4);
        goto LABEL_15;
      case 0x28:
        v26 = 0;
        v12 = 0;
LABEL_34:
        v27 = strlen(v2);
        if ( a2[16] == 4 )
          v28 = v4 + 108;
        else
          v28 = v4 + 120;
        sub_1D2258(v2, v27, v26, 1, 1, v28, 0, a2[16], v4);
        goto LABEL_15;
      case 0x2E:
        v29 = *(_DWORD *)(a1 + 8);
        v42 = 0;
        if ( v2 )
          LOBYTE(v29) = 1;
        v12 = 0;
LABEL_39:
        v30 = ((int (__fastcall *)(int, int))loc_16A938)(v8, v9 + *(_DWORD *)(a1 + 24));
        if ( (*(_BYTE *)(a1 + 6) & 2) != 0 )
        {
          v31 = a2[16];
          v32 = strlen(v2);
          goto LABEL_41;
        }
        v31 = a2[16];
        v32 = strlen(v2);
        if ( v31 == 14 )
        {
LABEL_41:
          sub_1D2258(v2, v32, v42, 1, 10, v4 + 108, v30, v31, v4);
          goto LABEL_42;
        }
        sub_1D2258(v2, v32, v42, 1, 10, v4 + 120, v30, v31, v4);
LABEL_42:
        if ( (v29 & (*(unsigned __int8 *)(a1 + 6) >> 7)) != 0 )
          sub_1B6B44(v4, v2);
        goto LABEL_15;
      case 0x34:
        v12 = 0;
LABEL_19:
        v17 = *(_DWORD *)(a1 + 20);
        if ( v17 && (v17 = sub_122F44((unsigned int *)v17, (int)a2), *(_DWORD *)(a1 + 20)) )
        {
          if ( v17 )
          {
            v9 += v17;
            if ( (*(_BYTE *)(a1 + 6) & 2) != 0 )
              goto LABEL_23;
            goto LABEL_71;
          }
          if ( *(_BYTE *)(dword_4872D8 + 416) )
          {
            if ( (*(_BYTE *)(a1 + 6) & 2) == 0 )
            {
LABEL_71:
              v39 = v2;
              goto LABEL_72;
            }
LABEL_23:
            v18 = strlen(v2);
            v19 = (int)v12;
            v20 = v18;
            v41 = a2[16];
            v40 = v4 + 108;
            if ( v12 )
              v19 = 1;
LABEL_25:
            sub_1D2258(v2, v20, v19, 1, 2, v40, v9, v41, v4);
          }
        }
        else if ( (*(_BYTE *)(a1 + 6) & 2) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 6) & 8) != 0 )
          {
            v9 += v17;
            goto LABEL_23;
          }
        }
        else if ( (*(_BYTE *)(a1 + 7) & 4) != 0 )
        {
          v39 = v2;
          v9 = 0;
LABEL_72:
          v20 = strlen(v39);
          v19 = (int)v12;
          v40 = v4 + 120;
          v41 = a2[16];
          if ( v12 )
            v19 = 1;
          goto LABEL_25;
        }
LABEL_15:
        if ( !v12 )
          return;
        break;
      default:
        return;
    }
LABEL_16:
    free(v12);
    return;
  }
LABEL_8:
  switch ( *(_WORD *)(a1 + 4) )
  {
    case 2:
    case 4:
    case 0x13:
    case 0x17:
    case 0x38:
      if ( (*(_WORD *)(a1 + 6) & 0x204) != 4 )
      {
        v12 = v2;
        v33 = 1;
        goto LABEL_49;
      }
      free(v2);
      break;
    case 8:
    case 0x39:
      v12 = v2;
      v13 = 1;
      goto LABEL_13;
    case 0x16:
    case 0x21:
    case 0x24:
      v12 = v2;
      v13 = 1;
      goto LABEL_45;
    case 0x1E:
      v12 = v2;
      v21 = 1;
      goto LABEL_27;
    case 0x27:
      v12 = v2;
      v23 = 1;
      goto LABEL_29;
    case 0x28:
      v12 = v2;
      v26 = 1;
      goto LABEL_34;
    case 0x2E:
      v12 = v2;
      LOBYTE(v29) = 1;
      v42 = 1;
      goto LABEL_39;
    case 0x34:
      v12 = v2;
      goto LABEL_19;
    default:
      goto LABEL_79;
  }
}
