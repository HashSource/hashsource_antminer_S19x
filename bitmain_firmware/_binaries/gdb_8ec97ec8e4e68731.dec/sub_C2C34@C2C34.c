int __fastcall sub_C2C34(int a1, const char *a2, int a3)
{
  size_t v6; // r0
  size_t v7; // r4
  _DWORD *v8; // r2
  int v9; // r1
  void *v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r4
  int v15; // r1
  int v16; // r5
  int v17; // r0
  _DWORD *v19; // r0
  int v20; // r0
  _DWORD *v21; // [sp+8h] [bp-FCh] BYREF
  size_t v22; // [sp+Ch] [bp-F8h]
  _DWORD v23[4]; // [sp+10h] [bp-F4h] BYREF
  int v24; // [sp+20h] [bp-E4h] BYREF
  char v25; // [sp+24h] [bp-E0h]
  char v26; // [sp+25h] [bp-DFh]
  void *ptr; // [sp+28h] [bp-DCh]
  size_t v28; // [sp+2Ch] [bp-D8h]
  _DWORD v29[4]; // [sp+30h] [bp-D4h] BYREF
  void *v30; // [sp+40h] [bp-C4h]
  char v31; // [sp+48h] [bp-BCh] BYREF
  char v32; // [sp+5Ch] [bp-A8h]
  void *v33; // [sp+60h] [bp-A4h]
  char v34; // [sp+68h] [bp-9Ch] BYREF
  char v35; // [sp+78h] [bp-8Ch]
  void *v36; // [sp+7Ch] [bp-88h]
  char v37; // [sp+84h] [bp-80h] BYREF
  char v38; // [sp+94h] [bp-70h]
  void *v39; // [sp+98h] [bp-6Ch]
  char v40; // [sp+A0h] [bp-64h] BYREF
  char v41; // [sp+B0h] [bp-54h]
  int v42; // [sp+F0h] [bp-14h]
  int v43; // [sp+F4h] [bp-10h]
  _DWORD v44[3]; // [sp+F8h] [bp-Ch]

  v21 = v23;
  if ( !a2 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v6 = strlen(a2);
  v7 = v6;
  v24 = v6;
  if ( v6 > 0xF )
  {
    v19 = (_DWORD *)sub_33B2BC(&v21, &v24, 0);
    v21 = v19;
    v23[0] = v24;
LABEL_39:
    v6 = (size_t)memcpy(v19, a2, v7);
    v7 = v24;
    v8 = v21;
    goto LABEL_5;
  }
  if ( v6 == 1 )
  {
    v8 = v23;
    LOBYTE(v23[0]) = *a2;
    goto LABEL_5;
  }
  if ( v6 )
  {
    v19 = v23;
    goto LABEL_39;
  }
  v8 = v23;
LABEL_5:
  v22 = v7;
  *((_BYTE *)v8 + v7) = 0;
  v9 = 1;
  v10 = v21;
  v25 = 0;
  v26 = 0;
  v24 = 1;
  if ( v21 == v23 )
  {
    v6 = v23[0];
    v9 = v23[1];
    v10 = (void *)v23[2];
    v11 = v23[3];
  }
  else
  {
    v11 = v23[0];
  }
  ptr = v29;
  if ( v21 == v23 )
  {
    v29[0] = v6;
    v29[1] = v9;
    v29[2] = v10;
    v29[3] = v11;
  }
  else
  {
    ptr = v10;
  }
  v12 = *(_DWORD *)(a1 + 12);
  if ( v21 != v23 )
    v29[0] = v11;
  v44[0] = 0;
  v32 = 0;
  v35 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  *(_DWORD *)((char *)v44 + 3) = 0;
  v28 = v22;
  if ( v12 && *(_DWORD *)(v12 + 12) )
  {
    sub_94700(
      (int)"block.c",
      744,
      "%s: Assertion `%s' failed.",
      "symbol* block_lookup_symbol_primary(const block*, const char*, domain_enum)",
      "BLOCK_SUPERBLOCK (block) == NULL || BLOCK_SUPERBLOCK (BLOCK_SUPERBLOCK (block)) == NULL");
    v20 = sub_AF570((int)&v24);
    sub_338FFC(v20);
  }
  v13 = sub_10B52C(*(_DWORD *)(a1 + 16), &v24, &v21);
  v14 = v13;
  if ( !v13 || (v15 = *(_BYTE *)(v13 + 32) & 7, v15 == a3) )
  {
LABEL_29:
    v16 = v14;
    if ( !v41 )
      goto LABEL_23;
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      if ( sub_21D9B0(*(_BYTE *)(v14 + 20) & 0x1F, v15, a3) )
        v16 = v14;
      v17 = sub_10B538(&v24, &v21);
      v14 = v17;
      if ( !v17 )
        break;
      v15 = *(_BYTE *)(v17 + 32) & 7;
      if ( v15 == a3 )
        goto LABEL_29;
    }
    if ( !v41 )
      goto LABEL_23;
  }
  v41 = 0;
  if ( v39 != &v40 )
  {
    sub_339E64(v39);
    if ( !v38 )
      goto LABEL_24;
    goto LABEL_32;
  }
LABEL_23:
  if ( !v38 )
    goto LABEL_24;
LABEL_32:
  v38 = 0;
  if ( v36 != &v37 )
  {
    sub_339E64(v36);
    if ( !v35 )
      goto LABEL_25;
    goto LABEL_34;
  }
LABEL_24:
  if ( !v35 )
    goto LABEL_25;
LABEL_34:
  v35 = 0;
  if ( v33 != &v34 )
  {
    sub_339E64(v33);
    if ( !v32 )
      goto LABEL_26;
    goto LABEL_36;
  }
LABEL_25:
  if ( !v32 )
    goto LABEL_26;
LABEL_36:
  v32 = 0;
  if ( v30 != &v31 )
    sub_339E64(v30);
LABEL_26:
  if ( ptr != v29 )
    sub_339E64(ptr);
  return v16;
}
