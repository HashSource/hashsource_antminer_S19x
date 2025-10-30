int __fastcall sub_1329FC(int a1, _DWORD *a2)
{
  int v4; // r9
  int v5; // r7
  int v6; // r5
  int v8; // r0
  _BYTE *v9; // r10
  int v10; // r0
  int v11; // r5
  int v12; // r8
  int v13; // r0
  int *v14; // r1
  int v15; // r0
  int v16; // r7
  int v17; // r9
  int v18; // r0
  unsigned __int64 v19; // r0
  char *v20; // r0
  unsigned int v21; // r9
  int v22; // r5
  const char *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE v28[28]; // [sp+8h] [bp-54h] BYREF
  int v29; // [sp+24h] [bp-38h]
  int v30; // [sp+28h] [bp-34h]
  void *ptr; // [sp+2Ch] [bp-30h] BYREF
  int *v32; // [sp+30h] [bp-2Ch]
  int *v33; // [sp+34h] [bp-28h]

  v4 = *a2;
  v5 = sub_1345C4();
  v6 = sub_11D4EC(*(_DWORD *)(a1 + 8), a2[34]);
  if ( v6 )
    return v6;
  v8 = sub_12E694(a1, 81, (int)a2);
  if ( !v8 )
    goto LABEL_6;
  v9 = v28;
  if ( sub_134AAC(v8, a1, a2, v28) )
    goto LABEL_7;
  if ( dword_47AC88 > 0 )
  {
    v22 = *(_DWORD *)(a1 + 8);
    v9 = 0;
    v23 = (const char *)sub_1B87A8(*a2);
    sub_F43B4(&off_46D334, "unable to read array DW_AT_byte_stride  - DIE at 0x%x [in module %s]", v22, v23);
  }
  else
  {
LABEL_6:
    v9 = 0;
  }
LABEL_7:
  v10 = sub_12E694(a1, 46, (int)a2);
  v11 = *(_DWORD *)(a1 + 12);
  v12 = v10;
  if ( v10 )
    v12 = *(_DWORD *)(v10 + 8);
  if ( !v11 )
  {
    v25 = sub_1780C4(v4);
    v26 = sub_171928(0, *(_DWORD *)(v25 + 12), 0, 0, -1, -1);
    v27 = sub_171DD4(0, v5, v26, v9, v12);
    return sub_134FA4(a1, v27, a2);
  }
  ptr = 0;
  v32 = 0;
  v33 = 0;
  do
  {
    if ( !*(_WORD *)v11 )
      break;
    if ( *(_WORD *)v11 == 33 )
    {
      v13 = sub_132D94(v11, a2);
      v30 = v13;
      if ( v13 )
      {
        if ( v32 == v33 )
        {
          sub_148BB4(&ptr);
        }
        else
        {
          v14 = v32 + 1;
          if ( v32 )
            *v32 = v13;
          v32 = v14;
        }
      }
    }
    v11 = *(_DWORD *)(v11 + 16);
  }
  while ( v11 );
  v15 = sub_12E694(a1, 9, (int)a2);
  if ( !v15 )
  {
    if ( a2[16] == 7 )
    {
      v24 = a2[18];
      if ( v24 )
      {
        if ( sub_338BD4(v24, "GNU F77") )
          goto LABEL_21;
      }
    }
    if ( *(_DWORD *)(a2[17] + 20) != 1 )
      goto LABEL_21;
LABEL_37:
    v21 = 0;
    v6 = v5;
    while ( v21 < ((char *)v32 - (_BYTE *)ptr) >> 2 )
      v6 = sub_171DD4(0, v6, *((_DWORD *)ptr + v21++), v9, v12);
    goto LABEL_24;
  }
  if ( *(_DWORD *)(v15 + 8) == 1 )
    goto LABEL_37;
LABEL_21:
  v6 = v5;
  v16 = 0;
  v17 = ((char *)v32 - (_BYTE *)ptr) >> 2;
  v29 = v17 + 0x3FFFFFFF;
  while ( v17 != v16 )
    v6 = sub_171DD4(0, v6, *((_DWORD *)ptr + v29 - v16++), v9, v12);
LABEL_24:
  if ( sub_12E694(a1, 8455, (int)a2) )
    sub_170874(v6);
  v18 = sub_12E694(a1, 11, (int)a2);
  if ( v18 )
  {
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 < *(unsigned int *)(v6 + 20) )
    {
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "DW_AT_byte_size for array type smaller than the total size of elements");
    }
    else
    {
      *(_DWORD *)(v6 + 20) = v19;
    }
  }
  v20 = sub_12FAF0((_WORD *)a1, a2);
  if ( v20 )
    *(_DWORD *)(*(_DWORD *)(v6 + 24) + 8) = v20;
  sub_134FA4(a1, v6, a2);
  sub_134A14(v6, a1, a2);
  if ( ptr )
    sub_339E64(ptr);
  return v6;
}
