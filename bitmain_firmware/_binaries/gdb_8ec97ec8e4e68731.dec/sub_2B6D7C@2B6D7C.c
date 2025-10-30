char *__fastcall sub_2B6D7C(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  int v7; // r3
  int v8; // r4
  int v9; // r5
  int v10; // r3
  int v11; // r0
  int v12; // r4
  char *v13; // r7
  int v15; // r2
  int v16; // r4
  bool v17; // zf
  const char *v18; // r10
  size_t v19; // r11
  char *v20; // r0
  int v21; // r5
  int v22; // [sp+4h] [bp-10h]
  int v23; // [sp+8h] [bp-Ch]
  char *v24; // [sp+Ch] [bp-8h]

  if ( a4 > 0x17 )
    sub_2A6BF0((int)"elf32-arm.c", 4300, (int)"arm_dedicated_stub_output_section_required");
  if ( a4 == 17 )
  {
    v21 = *(_DWORD *)(a3 + 1244);
    v18 = sub_2B6768(0x11u);
    v12 = sub_2B67A4(a3, 0x11u);
    v13 = sub_2AD7AC(v21, v18);
    if ( !v13 )
    {
      sub_2A6A5C("No address assigned to the veneers output section %s", v18);
      return v13;
    }
    v9 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    v22 = 5;
    v23 = 1;
  }
  else
  {
    v7 = *a2;
    if ( (unsigned int)*a2 > *(_DWORD *)(a3 + 1304) )
    {
      sub_2A6BBC("elf32-arm.c", 4422);
      v7 = *a2;
    }
    v8 = *(_DWORD *)(a3 + 1292);
    v9 = *(_DWORD *)(v8 + 8 * v7);
    v10 = v8 + 8 * v7;
    if ( !v9 )
    {
      sub_2A6BBC("elf32-arm.c", 4424);
      v8 = *(_DWORD *)(a3 + 1292);
      v10 = v8 + 8 * *a2;
    }
    v11 = *(_DWORD *)(v10 + 4);
    if ( v11 )
    {
      v12 = v10 + 4;
LABEL_10:
      *(_DWORD *)(v10 + 4) = v11;
      goto LABEL_11;
    }
    v15 = *(_DWORD *)(a3 + 428);
    v16 = v8 + 8 * *(_DWORD *)(v9 + 4);
    v17 = v15 == 0;
    if ( v15 )
      v15 = 4;
    v11 = *(_DWORD *)(v16 + 4);
    if ( v17 )
      v15 = 3;
    v22 = v15;
    v12 = v16 + 4;
    if ( v11 )
      goto LABEL_10;
    v18 = *(const char **)v9;
    v13 = *(char **)(v9 + 60);
    v23 = 0;
  }
  v19 = strlen(v18);
  v20 = (char *)sub_2ACBF4(*(_DWORD *)(a3 + 1280), v19 + 8);
  v24 = v20;
  if ( !v20 )
    return 0;
  memcpy(v20, v18, v19);
  strcpy(&v24[v19], ".__stub");
  v11 = (*(int (__fastcall **)(char *, char *, int, int))(a3 + 1284))(v24, v13, v9, v22);
  *(_DWORD *)v12 = v11;
  if ( !v11 )
    return 0;
  *((_DWORD *)v13 + 5) |= (unsigned int)&loc_20411C + 3;
  if ( !v23 )
  {
    v10 = *(_DWORD *)(a3 + 1292) + 8 * *a2;
    goto LABEL_10;
  }
LABEL_11:
  if ( a1 )
    *a1 = v9;
  return *(char **)v12;
}
