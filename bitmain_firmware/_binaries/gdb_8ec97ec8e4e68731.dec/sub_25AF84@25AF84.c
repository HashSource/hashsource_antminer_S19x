int __fastcall sub_25AF84(int a1, _BYTE *a2)
{
  _BYTE *v3; // r8
  unsigned int v5; // r0
  _BYTE *v6; // r4
  _BYTE *v7; // r3
  int v8; // t1
  _BYTE *v10; // r3
  __int64 v11; // r0
  int v12; // r2
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  _QWORD v14[3]; // [sp+4h] [bp-18h] BYREF

  v3 = (_BYTE *)(a1 + 8);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = sub_3245A4(a2);
  v6 = (_BYTE *)v5;
  if ( (unsigned int)a2 < v5 )
  {
    if ( *(_BYTE *)(v5 - 1) != 47 )
      goto LABEL_8;
    v7 = (_BYTE *)(v5 - 1);
    while ( 1 )
    {
      v6 = v7;
      if ( v7 == a2 )
        break;
      v8 = (unsigned __int8)*--v7;
      if ( v8 != 47 )
        goto LABEL_8;
    }
  }
  if ( a2 == v6 )
    return a1;
LABEL_8:
  ptr = (char *)v14 + 4;
  sub_258694(&ptr, a2, (int)v6);
  v10 = *(_BYTE **)a1;
  if ( ptr == (char *)v14 + 4 )
  {
    sub_33B48C(a1, &ptr);
    v10 = ptr;
    goto LABEL_12;
  }
  v11 = v14[0];
  if ( v3 == v10 )
  {
    *(_DWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 4) = v11;
    goto LABEL_21;
  }
  *(_DWORD *)a1 = ptr;
  *(_DWORD *)(a1 + 4) = v11;
  v12 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = HIDWORD(v11);
  if ( !v10 )
  {
LABEL_21:
    ptr = (char *)v14 + 4;
    v10 = (char *)v14 + 4;
    goto LABEL_12;
  }
  ptr = v10;
  HIDWORD(v14[0]) = v12;
LABEL_12:
  LODWORD(v14[0]) = 0;
  *v10 = 0;
  if ( ptr != (char *)v14 + 4 )
    sub_339E64(ptr);
  if ( v6 - a2 == 2 && *v6 == 47 && *a2 != 47 )
    *(_BYTE *)(*(_DWORD *)a1 + 2) = 46;
  return a1;
}
