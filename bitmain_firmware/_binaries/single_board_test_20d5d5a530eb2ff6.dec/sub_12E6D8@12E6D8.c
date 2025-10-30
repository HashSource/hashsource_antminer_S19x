int __fastcall sub_12E6D8(int a1, int a2, int a3, unsigned __int8 *a4, int *a5)
{
  int *v5; // r5
  int v7; // r7
  int v9; // r3
  int v10; // r9
  const char *v11; // r10
  int (__fastcall *v12)(int, int *, unsigned __int8 *, _DWORD *); // r8
  int *v14; // r3
  int (__fastcall *v15)(int, int *, unsigned __int8 *, int, int *); // r8
  int v16; // r3
  int (__fastcall *v17)(int, int *, int, char *, int *); // r4
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r9
  int v21; // r10
  int v22; // r8
  int v23; // r0
  int *v24; // r0
  int *v25; // r7
  int v26; // r0
  unsigned int v27; // r8
  _DWORD *v28; // r9
  int v29; // r3
  int *v30; // r10
  int v31; // r4
  int v32; // r0
  const char *v33; // r1
  int v34; // r4
  int v35; // r4
  char *v36; // r0
  char *v37; // r5
  const char *v38; // r0
  char *v39; // r5
  int v40; // r3
  const char *v41; // r1
  int (__fastcall *v42)(int, int *, unsigned __int8 *, _DWORD *); // [sp+Ch] [bp-70h]
  int v43; // [sp+10h] [bp-6Ch]
  int v44[2]; // [sp+14h] [bp-68h] BYREF
  _DWORD v45[3]; // [sp+1Ch] [bp-60h] BYREF
  char v46[84]; // [sp+28h] [bp-54h] BYREF

  v5 = a5;
  v7 = a3;
  v44[0] = a2;
  if ( !a5 )
    v5 = (int *)&unk_21FE54;
  v9 = *v5;
  v10 = *((_DWORD *)a4 + 4);
  if ( (*v5 & 0x100) != 0 )
    v11 = 0;
  else
    v11 = (const char *)*((_DWORD *)a4 + 6);
  v12 = (int (__fastcall *)(int, int *, unsigned __int8 *, _DWORD *))*((_DWORD *)a4 + 4);
  if ( v10 )
  {
    v12 = *(int (__fastcall **)(int, int *, unsigned __int8 *, _DWORD *))(v10 + 16);
    if ( v12 )
    {
      v45[0] = a1;
      v45[1] = a3;
      v45[2] = v5;
    }
  }
  if ( *a4 )
  {
    if ( !v44[0] )
      goto LABEL_12;
    switch ( *a4 )
    {
      case 1u:
      case 6u:
        if ( !sub_12D9A4(a1, a3, 0, v11, v5) )
          return 0;
        if ( !v11 )
          goto LABEL_33;
        if ( (*v5 & 2) != 0 )
        {
          if ( sub_B6C30(a1, (int)" {\n") <= 0 )
            return 0;
        }
        else if ( sub_B6C30(a1, (int)"\n") <= 0 )
        {
          return 0;
        }
LABEL_33:
        if ( v12 )
        {
          v19 = v12(8, v44, a4, v45);
          if ( !v19 )
            return 0;
          if ( v19 == 2 )
            return 1;
        }
        v20 = (_DWORD *)*((_DWORD *)a4 + 2);
        if ( *((int *)a4 + 3) <= 0 )
          goto LABEL_89;
        v42 = v12;
        v21 = 0;
        v43 = v7;
        v22 = v7 + 2;
        break;
      case 2u:
        v26 = sub_B2598(v44, (int)a4);
        if ( v26 < 0 || v26 >= *((_DWORD *)a4 + 3) )
          return sub_B550C(a1, "ERROR: selector [%d] invalid\n", v26) > 0;
        v31 = *((_DWORD *)a4 + 2) + 20 * v26;
        v32 = sub_B27A4(v44, v31);
        return sub_12DA7C(a1, (int *)v32, v7, (int *)v31, v5);
      case 4u:
        if ( !sub_12D9A4(a1, a3, 0, v11, v5) )
          return 0;
        v16 = *((_DWORD *)a4 + 4);
        if ( v16 )
        {
          v17 = *(int (__fastcall **)(int, int *, int, char *, int *))(v16 + 24);
          if ( v17 )
          {
            v18 = v17(a1, v44, v7, &byte_1A4198, v5);
            if ( !v18 )
              return 0;
            if ( v18 == 2 )
              return sub_B6C30(a1, (int)"\n") > 0;
            return 1;
          }
        }
        if ( !v11 )
          return 1;
        return sub_B550C(a1, ":EXTERNAL TYPE %s\n", v11) > 0;
      case 5u:
        goto LABEL_19;
      default:
        sub_B550C(a1, "Unprocessed type %d\n", *a4);
        return 0;
    }
    while ( 1 )
    {
      ++v21;
      v24 = sub_B27AC(v44, v20, (_DWORD *)1);
      v20 += 5;
      v25 = v24;
      if ( !v24 )
        break;
      v23 = sub_B27A4(v44, (int)v24);
      if ( !sub_12DA7C(a1, (int *)v23, v22, v25, v5) )
        break;
      if ( v21 >= *((_DWORD *)a4 + 3) )
      {
        v12 = v42;
        v7 = v43;
LABEL_89:
        if ( (*v5 & 2) != 0 && sub_B550C(a1, "%*s}\n", v7, &byte_1A4198) < 0 )
          return 0;
        if ( !v12 )
          return 1;
        return v12(9, v44, a4, v45) != 0;
      }
    }
    return 0;
  }
  if ( *((_DWORD *)a4 + 1) == 1 || v44[0] )
  {
    v14 = (int *)*((_DWORD *)a4 + 2);
    if ( v14 )
      return sub_12DA7C(a1, v44, a3, v14, v5);
LABEL_19:
    if ( !sub_12D9A4(a1, a3, 0, v11, v5) )
      return 0;
    if ( v10 )
    {
      v15 = *(int (__fastcall **)(int, int *, unsigned __int8 *, int, int *))(v10 + 28);
      if ( v15 )
        return v15(a1, v44, a4, v7, v5) != 0;
    }
    if ( *a4 == 5 )
    {
      v28 = (_DWORD *)v44[0];
      v27 = *(_DWORD *)(v44[0] + 4) & 0xFFFFFEFF;
    }
    else
    {
      v27 = *((_DWORD *)a4 + 1);
      if ( v27 == 1 )
      {
        if ( (*v5 & 8) == 0 )
        {
          v30 = v44;
LABEL_98:
          v40 = *v30;
          if ( *v30 != -1 || (v40 = *((_DWORD *)a4 + 5), v41 = "BOOL ABSENT", v40 != -1) )
          {
            if ( v40 )
              v41 = "TRUE";
            else
              v41 = "FALSE";
          }
          if ( sub_B6C30(a1, (int)v41) > 0 )
          {
LABEL_74:
            if ( sub_B6C30(a1, (int)"\n") > 0 )
              return 1;
          }
          return 0;
        }
        v28 = 0;
        goto LABEL_94;
      }
      v28 = (_DWORD *)v44[0];
    }
    v29 = *v5;
    if ( v27 == -4 )
    {
      v30 = v28 + 1;
      v27 = *v28;
      v28 = (_DWORD *)v28[1];
      if ( (v29 & 0x10) != 0 )
      {
LABEL_58:
        if ( v27 == 5 )
          return sub_B6C30(a1, (int)"NULL\n") > 0;
        goto LABEL_71;
      }
      v33 = sub_12C9C0(v27);
LABEL_67:
      if ( v27 == 5 )
        return sub_B6C30(a1, (int)"NULL\n") > 0;
      if ( v33 && (sub_B6C30(a1, (int)v33) <= 0 || sub_B6C30(a1, (int)&word_1B5258) <= 0) )
        return 0;
LABEL_71:
      switch ( v27 )
      {
        case 0xFFFFFFFD:
        case 0x10u:
        case 0x11u:
          return sub_B6C30(a1, (int)"\n") > 0 && sub_12D234(a1, (unsigned __int8 *)v28[2], *v28, v7, 0) > 0;
        case 1u:
          goto LABEL_98;
        case 2u:
        case 0xAu:
          v38 = sub_122434(0, (int)v28);
          v39 = (char *)v38;
          if ( !v38 )
            return 0;
          v34 = sub_B6C30(a1, (int)v38) > 0;
          CRYPTO_free(v39);
          goto LABEL_73;
        case 3u:
        case 4u:
          if ( v28[1] == 3 )
          {
            if ( sub_B550C(a1, " (%ld unused bits)\n", v28[3] & 7) <= 0 )
              return 0;
          }
          else if ( sub_B6C30(a1, (int)"\n") <= 0 )
          {
            return 0;
          }
          return (int)*v28 <= 0 || sub_12F2E8(a1, v28[2], *v28, v7 + 2) > 0;
        case 6u:
          v35 = *v30;
          v36 = sub_EAC84(*v30);
          v37 = sub_EAB40((unsigned int)v36);
          if ( !v37 )
            v37 = &byte_1A4198;
          sub_EACFC(v46, 80, v35, 1);
          v34 = sub_B550C(a1, "%s (%s)", v37, v46) > 0;
          goto LABEL_73;
        case 0x17u:
          v34 = sub_12B604(a1, v28);
          goto LABEL_73;
        case 0x18u:
          v34 = sub_12614C(a1, (int)v28);
          goto LABEL_73;
        default:
          v34 = sub_12A704(a1, v28, v5[4]);
LABEL_73:
          if ( v34 )
            goto LABEL_74;
          return 0;
      }
    }
    if ( (v29 & 8) == 0 )
    {
      v30 = v44;
      goto LABEL_58;
    }
LABEL_94:
    v30 = v44;
    v33 = sub_12C9C0(v27);
    goto LABEL_67;
  }
LABEL_12:
  if ( (v9 & 1) != 0 )
  {
    if ( sub_12D9A4(a1, a3, 0, v11, v5) )
      return sub_B6C30(a1, (int)"<ABSENT>\n") > 0;
    return 0;
  }
  return 1;
}
