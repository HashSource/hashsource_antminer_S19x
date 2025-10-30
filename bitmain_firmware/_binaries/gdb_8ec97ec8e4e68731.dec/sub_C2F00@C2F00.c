int __fastcall sub_C2F00(_DWORD *a1, const char *a2, int a3, int (__fastcall *a4)(int, int), int a5)
{
  size_t v9; // r0
  size_t v10; // r4
  _DWORD *v11; // r2
  int v12; // r1
  void *v13; // r2
  int v14; // r3
  int v15; // r2
  int i; // r0
  int v17; // r4
  _DWORD *v19; // r0
  int v20; // r0
  _DWORD *v21; // [sp+8h] [bp-F8h] BYREF
  size_t v22; // [sp+Ch] [bp-F4h]
  _DWORD v23[4]; // [sp+10h] [bp-F0h] BYREF
  int v24; // [sp+20h] [bp-E0h] BYREF
  char v25; // [sp+24h] [bp-DCh]
  char v26; // [sp+25h] [bp-DBh]
  void *ptr; // [sp+28h] [bp-D8h]
  size_t v28; // [sp+2Ch] [bp-D4h]
  _DWORD v29[4]; // [sp+30h] [bp-D0h] BYREF
  void *v30; // [sp+40h] [bp-C0h]
  char v31; // [sp+48h] [bp-B8h] BYREF
  char v32; // [sp+5Ch] [bp-A4h]
  void *v33; // [sp+60h] [bp-A0h]
  char v34; // [sp+68h] [bp-98h] BYREF
  char v35; // [sp+78h] [bp-88h]
  void *v36; // [sp+7Ch] [bp-84h]
  char v37; // [sp+84h] [bp-7Ch] BYREF
  char v38; // [sp+94h] [bp-6Ch]
  void *v39; // [sp+98h] [bp-68h]
  char v40; // [sp+A0h] [bp-60h] BYREF
  char v41; // [sp+B0h] [bp-50h]
  int v42; // [sp+F0h] [bp-10h]
  int v43; // [sp+F4h] [bp-Ch]
  _DWORD v44[2]; // [sp+F8h] [bp-8h]

  v21 = v23;
  if ( !a2 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v9 = strlen(a2);
  v10 = v9;
  v24 = v9;
  if ( v9 > 0xF )
  {
    v19 = (_DWORD *)sub_33B2BC(&v21, &v24, 0);
    v21 = v19;
    v23[0] = v24;
LABEL_29:
    v9 = (size_t)memcpy(v19, a2, v10);
    v10 = v24;
    v11 = v21;
    goto LABEL_5;
  }
  if ( v9 != 1 )
  {
    if ( !v9 )
    {
      v11 = v23;
      goto LABEL_5;
    }
    v19 = v23;
    goto LABEL_29;
  }
  v11 = v23;
  LOBYTE(v23[0]) = *a2;
LABEL_5:
  v22 = v10;
  *((_BYTE *)v11 + v10) = 0;
  v12 = 1;
  v13 = v21;
  v25 = 0;
  v26 = 0;
  v24 = 1;
  if ( v21 == v23 )
  {
    v9 = v23[0];
    v12 = v23[1];
    v13 = (void *)v23[2];
    v14 = v23[3];
  }
  else
  {
    v14 = v23[0];
  }
  ptr = v29;
  if ( v21 == v23 )
  {
    v29[0] = v9;
    v29[1] = v12;
    v29[2] = v13;
    v29[3] = v14;
  }
  else
  {
    ptr = v13;
  }
  v15 = a1[3];
  if ( v21 != v23 )
    v29[0] = v14;
  v44[0] = 0;
  v32 = 0;
  v35 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  *(_DWORD *)((char *)v44 + 3) = 0;
  v28 = v22;
  if ( v15 && *(_DWORD *)(v15 + 12) )
  {
    sub_94700(
      (int)"block.c",
      780,
      "%s: Assertion `%s' failed.",
      "symbol* block_find_symbol(const block*, const char*, domain_enum, int (*)(symbol*, void*), void*)",
      "BLOCK_SUPERBLOCK (block) == NULL || BLOCK_SUPERBLOCK (BLOCK_SUPERBLOCK (block)) == NULL");
    v20 = sub_AF570((int)&v24);
    sub_338FFC(v20);
  }
  for ( i = sub_C2900(a1, (int)&v24, &v21); ; i = sub_C294C((int)&v24, (int)&v21) )
  {
    v17 = i;
    if ( !i )
      break;
    if ( sub_21D9B0(*(_BYTE *)(i + 20) & 0x1F, *(_BYTE *)(i + 32) & 7, a3) && a4(v17, a5) )
      goto LABEL_21;
  }
  v17 = 0;
LABEL_21:
  if ( !v41 || (v41 = 0, v39 == &v40) )
  {
    if ( !v38 )
      goto LABEL_23;
  }
  else
  {
    sub_339E64(v39);
    if ( !v38 )
      goto LABEL_23;
  }
  v38 = 0;
  if ( v36 != &v37 )
  {
    sub_339E64(v36);
    if ( !v35 )
      goto LABEL_24;
    goto LABEL_34;
  }
LABEL_23:
  if ( !v35 )
    goto LABEL_24;
LABEL_34:
  v35 = 0;
  if ( v33 != &v34 )
  {
    sub_339E64(v33);
    if ( !v32 )
      goto LABEL_25;
    goto LABEL_36;
  }
LABEL_24:
  if ( !v32 )
    goto LABEL_25;
LABEL_36:
  v32 = 0;
  if ( v30 != &v31 )
    sub_339E64(v30);
LABEL_25:
  if ( ptr != v29 )
    sub_339E64(ptr);
  return v17;
}
