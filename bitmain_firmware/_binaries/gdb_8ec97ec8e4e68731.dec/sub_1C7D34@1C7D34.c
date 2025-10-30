void __fastcall sub_1C7D34(char *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v6; // r4
  int v9; // r0
  unsigned int v10; // r5
  int v11; // r11
  __int64 v12; // r0
  int v13; // r7
  unsigned int v14; // r2
  unsigned int v15; // r3
  char *v17; // r2
  int v18; // r2
  bool v19; // zf
  int v20; // r3
  __int64 v21; // r8
  _BYTE *v22; // r0
  unsigned int v23; // r1
  char *v24; // r3
  int v25; // r0
  _BYTE *v26; // r3
  unsigned int v27; // r0
  bool v28; // zf
  __int64 v29; // r0
  int v30; // r3
  __int64 v31; // r6
  int v32; // r1
  int v33; // r0
  int v34; // r0
  int v35; // r0
  unsigned int v36; // r0
  int v37; // r0
  void *ptr; // [sp+8h] [bp-5Ch] BYREF
  char *v39; // [sp+Ch] [bp-58h]
  int v40; // [sp+10h] [bp-54h]
  _DWORD dest[20]; // [sp+14h] [bp-50h] BYREF

  v6 = a2;
  v9 = sub_170040(a2);
  v10 = *(_DWORD *)(v6 + 20);
  v11 = v9;
  LODWORD(v12) = ((int (*)(void))loc_165BB8)();
  HIDWORD(v12) = a3[10];
  if ( HIDWORD(v12) == 115 )
  {
    v12 = sub_94700(
            (int)"./printcmd.c",
            360,
            "%s: Assertion `%s' failed.",
            "void print_scalar_formatted(const gdb_byte*, type*, const value_print_options*, int, ui_file*)",
            "options->format != 's'");
    goto LABEL_82;
  }
  v13 = v12;
  if ( **(_BYTE **)(v6 + 24) == 1 )
  {
    LODWORD(v12) = ((int (__fastcall *)(int))loc_16666C)(v11);
    HIDWORD(v12) = a3[10];
    v10 = (int)v12 / 8;
  }
  if ( HIDWORD(v12) == 99 )
    goto LABEL_14;
  if ( HIDWORD(v12) == 100 )
  {
    v17 = *(char **)(v6 + 24);
    if ( (v17[1] & 1) == 0 )
      goto LABEL_15;
  }
  v14 = *(_DWORD *)(v6 + 20);
  v15 = v13 == 0;
  if ( v14 > v10 && v13 == 0 )
    a1 += v14 - v10;
  if ( !a4 || ((HIDWORD(v12) - 116) & 0xFFFFFFFB) != 0 )
  {
LABEL_14:
    v17 = *(char **)(v6 + 24);
    goto LABEL_15;
  }
  switch ( a4 )
  {
    case 'b':
      v27 = 1;
      break;
    case 'g':
      v27 = 8;
      break;
    case 'h':
      v27 = 2;
      break;
    case 'w':
      v27 = 4;
      break;
    default:
      sub_946E0("Undefined output size \"%c\".", a4);
  }
  if ( v10 <= v27 )
    v15 = 0;
  v17 = *(char **)(v6 + 24);
  v28 = v15 == 0;
  if ( v15 )
    v15 = v10 - v27;
  else
    v10 = v27;
  if ( !v28 )
  {
    v10 = v27;
    a1 += v15;
  }
LABEL_15:
  v18 = *v17;
  ptr = 0;
  v39 = 0;
  v40 = 0;
  if ( v18 != 9 )
  {
    HIDWORD(v12) = BYTE4(v12);
    if ( BYTE4(v12) != 102 )
      goto LABEL_17;
LABEL_47:
    v25 = sub_1C54D0(v6);
    v26 = *(_BYTE **)(v25 + 24);
    v6 = v25;
    if ( *v26 != 9 )
      goto LABEL_48;
    goto LABEL_46;
  }
  v19 = HIDWORD(v12) == 111;
  if ( HIDWORD(v12) != 111 )
    v19 = HIDWORD(v12) == 100;
  v20 = v19;
  if ( (HIDWORD(v12) & 0xFFFFFFFD) == 0x78 )
    v20 |= 1u;
  if ( (unsigned int)(HIDWORD(v12) - 116) <= 1 )
    v20 |= 1u;
  if ( v20 )
  {
    v21 = sub_26D134(v6, a1);
    v22 = ptr;
    v23 = *(_DWORD *)(v6 + 20);
    v24 = (char *)(v39 - (_BYTE *)ptr);
    if ( v23 > v39 - (_BYTE *)ptr )
    {
      sub_AF660((char **)&ptr, v23 - (_DWORD)v24);
      v23 = *(_DWORD *)(v6 + 20);
      v22 = ptr;
    }
    else if ( v23 < v39 - (_BYTE *)ptr )
    {
      v24 = (char *)ptr + v23;
      v39 = (char *)ptr + v23;
    }
    sub_15C2E8(v22, v23, v13, (int)v24, v21, SHIDWORD(v21));
    HIDWORD(v12) = *((unsigned __int8 *)a3 + 40);
    a1 = (char *)ptr;
    if ( HIDWORD(v12) == 102 )
    {
      if ( **(_BYTE **)(v6 + 24) == 9 )
        goto LABEL_46;
      goto LABEL_47;
    }
  }
  else
  {
    HIDWORD(v12) = BYTE4(v12);
    if ( BYTE4(v12) == 102 )
      goto LABEL_46;
  }
LABEL_17:
  if ( HIDWORD(v12) == 111 )
  {
    sub_2673FC(a5, a1, v10, v13);
    goto LABEL_49;
  }
  if ( HIDWORD(v12) <= 0x6F )
  {
    if ( HIDWORD(v12) == 97 )
    {
      v36 = sub_26D230(v6, a1);
      sub_1C7360(v11, v36, a5);
      goto LABEL_49;
    }
    if ( HIDWORD(v12) > 0x61 )
    {
      if ( HIDWORD(v12) == 99 )
      {
        memcpy(dest, a3, 0x4Cu);
        v29 = sub_26D134(v6, a1);
        v30 = *(_DWORD *)(v6 + 24);
        v31 = v29;
        dest[10] = 0;
        if ( (*(_BYTE *)(v30 + 1) & 1) != 0 )
        {
          sub_1780B4();
          v34 = *(_DWORD *)(v37 + 92);
        }
        else
        {
          sub_1780B4();
          v34 = *(_DWORD *)(v33 + 88);
        }
        v35 = sub_26DAF4(v34, v32, v31, HIDWORD(v31));
        sub_266C84(v35, a5, dest);
      }
      else
      {
        if ( HIDWORD(v12) != 100 )
          goto LABEL_82;
        sub_2677BC(a5, a1, v10, 1, v13);
      }
      goto LABEL_49;
    }
    if ( HIDWORD(v12) )
      goto LABEL_82;
    v26 = *(_BYTE **)(v6 + 24);
    if ( *v26 != 9 )
    {
LABEL_48:
      sub_2677BC(a5, a1, v10, (v26[1] & 1) == 0, v13);
      goto LABEL_49;
    }
LABEL_46:
    sub_26727C(a1, v6, a5);
    goto LABEL_49;
  }
  if ( HIDWORD(v12) == 117 )
  {
    sub_2677BC(a5, a1, v10, 0, v13);
  }
  else if ( HIDWORD(v12) <= 0x75 )
  {
    if ( HIDWORD(v12) != 116 )
      goto LABEL_82;
    sub_2672DC(a5, a1, v10, v13, a4 > 0);
  }
  else
  {
    if ( HIDWORD(v12) != 120 )
    {
      if ( HIDWORD(v12) == 122 )
      {
        sub_267B6C(a5, a1, v10, v13, 1);
        goto LABEL_49;
      }
LABEL_82:
      sub_946E0("Undefined output format \"%c\".", HIDWORD(v12));
    }
    sub_267B6C(a5, a1, v10, v13, a4 > 0);
  }
LABEL_49:
  if ( ptr )
    sub_339E64(ptr);
}
