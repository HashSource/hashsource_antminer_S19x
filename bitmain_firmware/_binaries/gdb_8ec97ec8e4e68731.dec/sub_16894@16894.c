int __fastcall sub_16894(int a1, int a2, _DWORD *a3, _DWORD *a4, _BYTE *a5)
{
  int v6; // r0
  int v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r8
  _DWORD *v16; // r6
  int v17; // r5
  bool v18; // zf
  char v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // t1
  int v23; // r2
  _BYTE *v25; // r1
  _BYTE *v26; // r0
  void (__fastcall *v27)(int, _DWORD *); // r3
  int v28; // r3
  int v29; // r3
  int (*v30)(); // r4
  size_t v31; // r7
  char *v32; // r6
  char *v33; // r8
  char *v34; // r5
  unsigned int i; // r9
  unsigned int v36; // r0
  void *v37; // r5
  char *v38; // r8
  char *v39; // r6
  unsigned int v40; // r9
  char *v41; // r6
  size_t v42; // r10
  char *v43; // r11
  int v44; // r1
  unsigned int v45; // r5
  size_t v46; // r9
  char *v47; // r0
  int v48; // r0
  _DWORD *v49; // r10
  void (__fastcall *v50)(int, int, char *); // [sp+0h] [bp-44h]
  char *v51; // [sp+0h] [bp-44h]
  void (__fastcall *v52)(int, char *, int); // [sp+4h] [bp-40h]
  unsigned int v53; // [sp+4h] [bp-40h]
  int v54; // [sp+8h] [bp-3Ch]
  void *v55; // [sp+8h] [bp-3Ch]
  char src; // [sp+Ch] [bp-38h]
  int v57; // [sp+10h] [bp-34h]
  _DWORD *v58; // [sp+14h] [bp-30h]
  char dest[4]; // [sp+1Ch] [bp-28h] BYREF
  _BYTE v60[36]; // [sp+20h] [bp-24h] BYREF

  v6 = *(_DWORD *)(a1 + 4);
  v58 = a4;
  v9 = *(_DWORD *)(v6 + 444);
  v10 = a3[1];
  v11 = *a3;
  v57 = v10;
  v12 = *(_DWORD *)(v9 + 392);
  v13 = *(_DWORD *)(v11 + 40);
  if ( v13 == *(unsigned __int8 *)(v12 + 3) )
  {
    v50 = *(void (__fastcall **)(int, int, char *))(v12 + 56);
    v52 = *(void (__fastcall **)(int, char *, int))(v12 + 60);
  }
  else
  {
    if ( v13 != *(unsigned __int8 *)(v12 + 4) )
      sub_2A6BF0("elflink.c", 8680, "elf_link_adjust_relocs");
    v50 = *(void (__fastcall **)(int, int, char *))(v12 + 64);
    v52 = *(void (__fastcall **)(int, char *, int))(v12 + 68);
  }
  if ( *(unsigned __int8 *)(v12 + 9) > 3u )
    sub_2A6BF0("elflink.c", 8683, "elf_link_adjust_relocs");
  v14 = *(unsigned __int8 *)(v12 + 10);
  v15 = *(_DWORD *)(v11 + 48);
  v16 = (_DWORD *)(a3[3] - 4);
  v17 = 0;
  v18 = v14 == 32;
  if ( v14 == 32 )
    v19 = 8;
  else
    v19 = 32;
  src = v19;
  if ( v18 )
    v20 = 255;
  else
    v20 = -1;
  v54 = v20;
  while ( v17 != v57 )
  {
    v22 = v16[1];
    ++v16;
    v21 = v22;
    if ( !v22 )
      goto LABEL_26;
    v23 = *(_DWORD *)(v21 + 28);
    if ( v23 == -2 )
    {
      if ( (*a5 & 0xC0) == 0x40 )
      {
        sub_2A6A5C(
          "%B:%A: error: relocation references symbol %s which was removed by garbage collection.",
          a1,
          a2,
          *(_DWORD *)(v21 + 4));
        sub_2A6A5C("%B:%A: error: try relinking with --gc-keep-exported enabled.", a1, a2);
        ((void (__fastcall *)(int))loc_2A6C48)(5);
        return 0;
      }
    }
    else if ( v23 >= 0 )
    {
      goto LABEL_22;
    }
    sub_2A6BBC("elflink.c", 8718);
LABEL_22:
    v50(a1, v15, dest);
    v25 = v60;
    v26 = &v60[12 * *(unsigned __int8 *)(*(_DWORD *)(v9 + 392) + 9) + 12];
    while ( 1 )
    {
      v25 += 12;
      if ( v26 == v25 )
        break;
      *((_DWORD *)v25 - 3) = *((_DWORD *)v25 - 3) & v54 | (*(_DWORD *)(*v16 + 28) << src);
    }
    v52(a1, dest, v15);
LABEL_26:
    ++v17;
    v15 += *(_DWORD *)(*a3 + 40);
  }
  v27 = *(void (__fastcall **)(int, _DWORD *))(v9 + 248);
  if ( v27 )
    v27(a2, a3);
  if ( v17 )
    v28 = (unsigned __int8)v58 & 1;
  else
    v28 = 0;
  if ( !v28 )
    return 1;
  v29 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
  if ( *(_BYTE *)(*(_DWORD *)(v9 + 392) + 10) == 32 )
  {
    if ( v29 == 1 )
    {
      v30 = (int (*)())sub_2DB880;
    }
    else
    {
      if ( v29 )
        sub_2A6BF0("elflink.c", 8745, "elf_link_adjust_relocs");
      v30 = sub_2DB888;
    }
  }
  else if ( v29 == 1 )
  {
    v30 = sub_2DB894;
  }
  else
  {
    if ( v29 )
      sub_2A6BF0("elflink.c", 8756, "elf_link_adjust_relocs");
    v30 = sub_2DB89C;
  }
  v31 = *(_DWORD *)(*a3 + 40);
  v32 = *(char **)(*a3 + 48);
  v53 = (unsigned int)&v32[v31 * v17];
  if ( v31 > 0x18 )
    sub_2A6BF0("elflink.c", 8765, "elf_link_adjust_relocs");
  v33 = *(char **)(*a3 + 48);
  v34 = v33;
  for ( i = ((int (__fastcall *)(char *))v30)(v32); ; i = v36 )
  {
    v34 += v31;
    if ( v53 <= (unsigned int)v34 )
      break;
    v36 = ((int (__fastcall *)(char *))v30)(v34);
    if ( i > v36 )
      v33 = v34;
    else
      v36 = i;
  }
  v51 = &v32[v31];
  if ( v33 != v32 )
  {
    memcpy(dest, v33, v31);
    memmove(&v32[v31], v32, v33 - v32);
    memcpy(v32, dest, v31);
  }
  v37 = 0;
  v58 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = &v51[v31];
      if ( v53 <= (unsigned int)&v51[v31] )
      {
        v49 = v58;
        free((void *)v58[3]);
        v49[3] = 0;
        free(v37);
        return 1;
      }
      v39 = v51;
      v40 = ((int (__fastcall *)(char *))v30)(&v51[v31]);
      while ( ((int (__fastcall *)(char *))v30)(v39) > v40 )
        v39 -= v31;
      v41 = &v39[v31];
      if ( v38 != v41 )
        break;
      v51 += v31;
    }
    v42 = v38 - v41;
    v55 = v37;
    v43 = &v38[v31];
    v45 = ((int (__fastcall *)(char *))v30)(v41);
    do
    {
      v46 = v43 - v38;
      if ( (unsigned int)v43 >= v53 )
        break;
      if ( v42 > 0x18000 )
      {
        v44 = v43 - v51;
        if ( (unsigned int)(v43 - v51) > 0x18000 )
          break;
      }
      v47 = v43;
      v43 += v31;
    }
    while ( ((int (__fastcall *)(char *))v30)(v47) < v45 );
    v37 = v55;
    if ( !v55 )
    {
      v48 = sub_2AB368(98304, v44);
      v37 = (void *)v48;
      if ( !v48 )
        break;
    }
    if ( v42 <= v46 )
    {
      memcpy(v37, v41, v42);
      memmove(v41, v38, v46);
      memcpy(&v41[v46], v37, v42);
    }
    else
    {
      memcpy(v37, v38, v46);
      memmove(&v41[v46], v41, v42);
      memcpy(v41, v37, v46);
    }
    v51 += v46;
  }
  return 0;
}
