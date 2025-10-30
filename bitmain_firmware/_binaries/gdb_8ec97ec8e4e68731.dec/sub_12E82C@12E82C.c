int __fastcall sub_12E82C(int a1, int a2, int a3)
{
  int v3; // r8
  _BYTE *v5; // r7
  const char *v8; // r5
  _BYTE *v9; // r6
  char *v10; // r0
  bool v11; // zf
  char v13; // r3
  _BYTE *v14; // r3
  __int64 v15; // r0
  int v16; // r2
  void *ptr; // [sp+0h] [bp-18h] BYREF
  _QWORD v18[2]; // [sp+4h] [bp-14h] BYREF

  v3 = a1 + 8;
  v5 = (_BYTE *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)a1 = sub_12E748(a2, 3, (_DWORD *)a3);
  v8 = (const char *)sub_12E748(a2, 27, (_DWORD *)a3);
  *(_DWORD *)(a1 + 4) = v8;
  if ( v8 )
  {
    v9 = *(_BYTE **)a1;
    goto LABEL_3;
  }
  v13 = *(_BYTE *)(a3 + 192);
  if ( (v13 & 4) != 0 )
  {
    v9 = *(_BYTE **)a1;
    if ( (v13 & 0x10) == 0 )
      goto LABEL_7;
    if ( !v9 )
      goto LABEL_13;
  }
  else
  {
    sub_11D77C(a3);
    if ( (*(_BYTE *)(a3 + 192) & 0x10) == 0 )
    {
LABEL_24:
      v8 = *(const char **)(a1 + 4);
      goto LABEL_25;
    }
    v9 = *(_BYTE **)a1;
    if ( !*(_DWORD *)a1 )
    {
      v8 = *(const char **)(a1 + 4);
      if ( !v8 )
        goto LABEL_13;
      goto LABEL_3;
    }
  }
  if ( *v9 != 47 )
  {
    v8 = *(const char **)(a1 + 4);
    if ( !v8 )
      return a1;
LABEL_3:
    v10 = strchr(v8, 58);
    v11 = v10 == v8;
    if ( v10 != v8 )
      v11 = v10 == 0;
    if ( !v11 && *(v10 - 1) == 46 )
    {
      if ( v10[1] == 47 )
        *(_DWORD *)(a1 + 4) = v10 + 1;
      if ( !v9 )
        goto LABEL_13;
      return a1;
    }
    goto LABEL_7;
  }
  sub_25AF84(&ptr, v9);
  v14 = *(_BYTE **)(a1 + 8);
  if ( ptr == (char *)v18 + 4 )
  {
    sub_33B48C(v3, &ptr);
    v14 = ptr;
  }
  else
  {
    v15 = v18[0];
    if ( v5 == v14 )
    {
      *(_DWORD *)(a1 + 8) = ptr;
      *(_QWORD *)(a1 + 12) = v15;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = ptr;
      *(_DWORD *)(a1 + 12) = v15;
      v16 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = HIDWORD(v15);
      if ( v14 )
      {
        ptr = v14;
        HIDWORD(v18[0]) = v16;
        goto LABEL_31;
      }
    }
    ptr = (char *)v18 + 4;
    v14 = (char *)v18 + 4;
  }
LABEL_31:
  LODWORD(v18[0]) = 0;
  *v14 = 0;
  if ( ptr != (char *)v18 + 4 )
    sub_339E64(ptr);
  if ( !*(_DWORD *)(a1 + 12) )
    goto LABEL_24;
  v8 = *(const char **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = v8;
LABEL_25:
  v9 = *(_BYTE **)a1;
  if ( v8 )
    goto LABEL_3;
LABEL_7:
  if ( v9 )
    return a1;
LABEL_13:
  *(_DWORD *)a1 = "<unknown>";
  return a1;
}
