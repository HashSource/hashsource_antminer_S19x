int __fastcall sub_161A38(int a1, int (__fastcall *a2)(int, int), int a3)
{
  _DWORD *v4; // r6
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r4
  unsigned int v8; // r3
  _DWORD *v9; // r3
  int v10; // r2
  int v11; // r9
  int v12; // r8
  int v13; // r11
  int v14; // r0
  int result; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r4
  unsigned int v19; // r5
  int v20; // r2
  int v21; // r4
  int v22; // r0
  __int64 v23; // r0
  int v24; // r0
  unsigned int v25; // r0
  int v26; // r4
  unsigned int v27; // r6
  int v28; // r5
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r2
  __int64 v33; // r0
  int v35; // [sp+1Ch] [bp-10h] BYREF
  _DWORD v36[3]; // [sp+20h] [bp-Ch] BYREF

  v4 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v4 )
  {
LABEL_14:
    v16 = sub_22EAC0();
    if ( !v16 )
      goto LABEL_15;
    goto LABEL_36;
  }
  while ( 2 )
  {
    v5 = v4[43];
    while ( 1 )
    {
      v6 = v4[42];
      if ( v6 < v5 )
      {
        v7 = v6 + 12;
        while ( 1 )
        {
          v9 = *(_DWORD **)(v7 - 12);
          v5 = v7;
          if ( v9 )
          {
            if ( !v4[45] && (v9[5] & 3) != 0 )
            {
              v10 = *(_DWORD *)(v7 - 8);
              v11 = v9[9];
              v12 = v9[7];
              v13 = *(_DWORD *)(v10 + 144);
              v14 = sub_162FDC(*(_DWORD *)(v10 + 36), *(_DWORD *)(v7 - 12));
              result = a2(v12 + *(_DWORD *)(v13 + 4 * v14), v11);
              if ( result )
                return result;
            }
          }
          v8 = v4[43];
          v7 += 12;
          if ( v8 <= v5 )
            goto LABEL_12;
        }
      }
      v8 = v5;
      v5 = v4[42];
LABEL_12:
      if ( v5 == v8 )
        break;
      if ( v4[43] != v5 )
        goto LABEL_14;
    }
    v4 = (_DWORD *)*v4;
    if ( v4 )
      continue;
    break;
  }
  v16 = sub_22EAC0();
  if ( v16 )
  {
LABEL_36:
    v16 = sub_22EB0C(v16);
    if ( v16 )
    {
      v16 = sub_15F70C(v16);
      v26 = v16;
      if ( v16 )
      {
        v27 = sub_15D878(v16);
        v28 = sub_15ECB4(v26);
        v29 = sub_1603F0(v26);
        if ( ((int (__fastcall *)(int, int, unsigned int))loc_16900C)(v28, v29, v27) )
          v27 = sub_1603F0(v26);
        while ( 1 )
        {
          v30 = ((int (__fastcall *)(int))loc_15FA88)(v26);
          if ( !v30 )
            break;
          v26 = v30;
        }
        v31 = sub_15D878(v26);
        v32 = v31;
        if ( v31 > v27 )
          v31 = v27;
        else
          v32 = v27;
        v16 = ((int (__fastcall *)(unsigned int, unsigned int, int, int, _DWORD, int, int))a2)(
                v31,
                v32 - v31,
                1,
                1,
                0,
                1,
                a3);
      }
    }
  }
LABEL_15:
  v17 = *(_DWORD *)(dword_487D2C + 8);
  if ( !sub_22EBBC(v16) )
    return 0;
  v18 = *(_DWORD *)(v17 + 100);
  if ( v18 )
  {
    v19 = 0;
    do
    {
      if ( (*(_DWORD *)(v18 + 20) & 0x20) != 0 || !strcmp(".bss", *(const char **)v18) )
      {
        v20 = *(_DWORD *)(v18 + 36);
        if ( v19 < *(_DWORD *)(v18 + 28) + v20 )
          v19 = *(_DWORD *)(v18 + 28) + v20;
      }
      v18 = *(_DWORD *)(v18 + 12);
    }
    while ( v18 );
  }
  else
  {
    v19 = 0;
  }
  sub_1B141C((int)v36, "sbrk");
  if ( v36[0] )
  {
    v21 = sub_2611C4("sbrk", &v35);
    if ( v21 )
      goto LABEL_26;
    return 0;
  }
  sub_1B141C((int)v36, "_sbrk");
  if ( !v36[0] )
    return 0;
  v21 = sub_2611C4("_sbrk", &v35);
  if ( !v21 )
    return 0;
LABEL_26:
  v22 = sub_1B7250(v35);
  v23 = sub_1780B4(v22);
  v36[0] = sub_26DAF4(*(_DWORD *)(v23 + 12), HIDWORD(v23), 0, 0);
  if ( v36[0] )
  {
    v24 = sub_17E6EC(v21, 0, 1, v36);
    if ( v24 )
    {
      v25 = sub_26EB1C(v24);
      if ( v25 - 1 <= 0xFFFFFFFD && v19 < v25 )
      {
        ((void (__fastcall *)(unsigned int, unsigned int, int, int, _DWORD, int, int))a2)(
          v19,
          v25 - v19,
          1,
          1,
          0,
          1,
          a3);
        return 0;
      }
    }
    return 0;
  }
  v33 = sub_94700((int)"gcore.c", 302, "%s: Assertion `%s' failed.", "bfd_vma call_target_sbrk(int)", "target_sbrk_arg");
  return sub_161DB8(v33, HIDWORD(v33));
}
