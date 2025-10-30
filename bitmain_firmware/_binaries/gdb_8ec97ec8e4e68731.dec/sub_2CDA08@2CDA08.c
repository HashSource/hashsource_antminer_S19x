unsigned int __fastcall sub_2CDA08(int a1, int a2, unsigned int a3, int a4, unsigned int a5, char *ptr, char *a7)
{
  int v7; // r10
  int v8; // r12
  _DWORD *v11; // lr
  int v13; // r5
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r7
  __int64 v17; // r8
  void *v18; // r9
  unsigned int v19; // r5
  void *v21; // r5
  unsigned int v22; // r3
  unsigned int v23; // r11
  unsigned int v24; // r10
  int v25; // r8
  char *v26; // r5
  char *v27; // r2
  int v28; // r0
  void *v29; // r0
  char *v30; // r0
  int v31; // [sp+Ch] [bp-18h]
  void *v32; // [sp+Ch] [bp-18h]
  __int64 v33; // [sp+10h] [bp-14h]
  int v34; // [sp+10h] [bp-14h]

  v8 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v8 + 4) != 5 )
    sub_2A6BF0((int)"elf.c", 400, (int)"bfd_elf_get_elf_syms");
  if ( !a3 )
    return a5;
  v11 = *(_DWORD **)(a1 + 160);
  v13 = v11[130];
  if ( v13 )
  {
    v14 = v11[130];
    do
    {
      v15 = *(_DWORD *)(v14 + 28);
      if ( v15 < v11[133] && *(_DWORD *)(v11[16] + 4 * v15) == a2 )
      {
        v13 = v14;
        goto LABEL_10;
      }
      v14 = *(_DWORD *)(v14 + 60);
    }
    while ( v14 );
    if ( (_DWORD *)a2 != v11 + 18 )
      v13 = 0;
  }
LABEL_10:
  v31 = *(_DWORD *)(v8 + 444);
  v16 = *(unsigned __int8 *)(*(_DWORD *)(v31 + 392) + 5);
  v17 = *(_QWORD *)(a2 + 16) + a4 * v16;
  if ( ptr )
  {
    v18 = (void *)sub_2A8A04(a1, v17, 0);
    if ( v18 )
      return 0;
    v7 = v16 * a3;
    if ( sub_2A87D8((int)ptr, v16 * a3, a1) != v16 * a3 )
      return 0;
  }
  else
  {
    ptr = (char *)sub_2AB3B4(a3, v16);
    if ( !ptr )
      return 0;
    if ( sub_2A8A04(a1, v17, 0) || sub_2A87D8((int)ptr, v16 * a3, a1) != v16 * a3 )
    {
      free(ptr);
      return 0;
    }
    v18 = ptr;
  }
  if ( !v13 )
  {
    v7 = 0;
    a7 = 0;
    goto LABEL_31;
  }
  if ( !*(_DWORD *)(v13 + 24) )
  {
    a7 = 0;
    v7 = 0;
    goto LABEL_31;
  }
  if ( a7 )
    v7 = 0;
  v33 = *(_QWORD *)(v13 + 16);
  if ( !a7 )
  {
    v30 = (char *)sub_2AB3B4(a3, 4u);
    a7 = v30;
    if ( v30 )
    {
      v7 = (int)v30;
      goto LABEL_24;
    }
    if ( v18 )
    {
      v19 = 0;
      free(v18);
      return v19;
    }
    return 0;
  }
LABEL_24:
  v19 = 0;
  if ( sub_2A8A04(a1, v33 + (unsigned int)(4 * a4), 0) )
    goto LABEL_25;
  if ( sub_2A87D8((int)a7, 4 * a3, a1) != 4 * a3 )
  {
    v19 = 0;
    goto LABEL_25;
  }
LABEL_31:
  if ( a5 )
  {
    v21 = 0;
  }
  else
  {
    v29 = sub_2AB3B4(a3, 0x14u);
    a5 = (unsigned int)v29;
    if ( !v29 )
      goto LABEL_46;
    v21 = v29;
  }
  v22 = a5 + 20 * a3;
  if ( a5 >= v22 )
  {
LABEL_46:
    v19 = a5;
    goto LABEL_25;
  }
  v23 = a5;
  v34 = v7;
  v24 = v22;
  v25 = v31;
  v32 = v21;
  v26 = ptr;
  while ( (*(int (__fastcall **)(int, char *, char *, unsigned int))(*(_DWORD *)(v25 + 392) + 32))(a1, v26, a7, v23) )
  {
    v23 += 20;
    v26 += v16;
    if ( a7 )
      a7 += 4;
    if ( v24 <= v23 )
    {
      v7 = v34;
      v19 = a5;
      goto LABEL_25;
    }
  }
  v27 = v26;
  v19 = (unsigned int)v32;
  v28 = sub_347418(v27 - ptr, v16);
  v7 = v34;
  sub_2A6A5C("%B symbol number %lu references nonexistent SHT_SYMTAB_SHNDX section", a1, v28 + a4);
  if ( v32 )
  {
    v19 = 0;
    free(v32);
  }
LABEL_25:
  if ( v18 )
    free(v18);
  if ( !v7 )
    return v19;
  free((void *)v7);
  return v19;
}
