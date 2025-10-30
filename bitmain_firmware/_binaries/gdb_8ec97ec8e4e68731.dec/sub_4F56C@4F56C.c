int __fastcall sub_4F56C(unsigned __int8 *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r7
  int v6; // r5
  int v7; // r6
  int v8; // r4
  int v9; // r0
  int v10; // r0
  int v12; // r0
  unsigned __int8 *v13; // r4
  int v14; // r3
  unsigned __int8 *v15; // r0
  int v16; // r0
  int v17; // r2
  unsigned __int8 *v18; // r0
  int v19; // r3
  unsigned __int8 *v20; // r0
  const char *v21; // r0
  int v22; // r2
  const char *v23; // r3
  int v24; // r0
  int v25; // r0
  const char *v26; // [sp+Ch] [bp-18h] BYREF
  unsigned __int8 *v27; // [sp+10h] [bp-14h] BYREF
  int v28; // [sp+14h] [bp-10h] BYREF
  int v29; // [sp+18h] [bp-Ch] BYREF
  const char *v30[2]; // [sp+1Ch] [bp-8h] BYREF

  v2 = sub_B894C();
  v27 = a1;
  v26 = 0;
  if ( !a1 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  v3 = v2;
  if ( *a1 == 47 )
  {
    v12 = a1[1];
    v13 = a1 + 1;
    v27 = v13;
    if ( !v12 )
      sub_946E0("Missing modifier.");
    v5 = 0;
    do
    {
      if ( isspace(v12) )
        break;
      v27 = ++v13;
      v14 = *(v13 - 1);
      switch ( v14 )
      {
        case 'r':
          v5 |= 2u;
          break;
        case 's':
          v5 |= 0x20u;
          break;
        case 'm':
          v5 |= 1u;
          break;
        default:
          sub_946E0("Invalid disassembly modifier.");
      }
      v12 = *v13;
    }
    while ( *v13 );
    v4 = v5;
    v15 = (unsigned __int8 *)sub_9360C(v13);
    v27 = v15;
    if ( (v5 & 0x21) == 0x21 )
      sub_946E0("Cannot specify both /m and /s.");
    if ( !v15 || !*v15 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    if ( !*a1 )
    {
LABEL_6:
      v6 = v4 | 4;
      v7 = sub_15F7E8("No frame selected.");
      v8 = sub_15ECB4(v7);
      v9 = sub_15DE14(v7);
      if ( !sub_C37B8(v9, v30, &v28, &v29) )
        sub_946E0("No function contains program counter for selected frame.");
      v10 = ((int (__fastcall *)(int))loc_1696D8)(v8);
      return sub_4F4B8(v8, v30[0], v10 + v28, v29, v6);
    }
  }
  v16 = sub_14CCCC(&v27);
  v17 = sub_26EBA8(v16);
  v18 = v27;
  v19 = *v27;
  if ( v19 == 44 )
  {
    ++v27;
    v19 = *++v18;
  }
  if ( v19 )
  {
    v29 = v17;
    v20 = (unsigned __int8 *)sub_9360C(v18);
    v27 = v20;
    if ( *v20 == 43 )
    {
      v27 = v20 + 1;
      v25 = sub_14CB9C(v20 + 1);
      v22 = v29;
      v23 = (const char *)(v29 + v25);
      v30[0] = (const char *)(v29 + v25);
    }
    else
    {
      v21 = (const char *)sub_14CB9C(v20);
      v22 = v29;
      v23 = v21;
      v30[0] = v21;
    }
  }
  else
  {
    if ( !sub_C37B8(v17, &v26, &v29, v30) )
      sub_946E0("No function contains specified address.");
    v5 = v4 | 4;
    v24 = ((int (__fastcall *)(int))loc_1696D8)(v3);
    v23 = v30[0];
    v22 = v24 + v29;
    v29 += v24;
  }
  return sub_4F4B8(v3, v26, v22, (int)v23, v5);
}
