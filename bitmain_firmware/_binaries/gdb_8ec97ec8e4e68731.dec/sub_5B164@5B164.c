int __fastcall sub_5B164(int a1, int *a2)
{
  int v2; // r2
  _BYTE *v4; // r7
  _BYTE *v6; // r3
  __int64 v7; // r0
  int v8; // r2
  int v10; // [sp+4h] [bp-20h] BYREF
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  _QWORD v12[3]; // [sp+Ch] [bp-18h] BYREF

  v2 = *a2;
  v4 = (_BYTE *)(a1 + 8);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  v10 = v2;
  sub_5B05C((int *)&ptr, &v10);
  v6 = *(_BYTE **)a1;
  if ( ptr == (char *)v12 + 4 )
  {
    sub_33B48C(a1, &ptr);
    v6 = ptr;
  }
  else
  {
    v7 = v12[0];
    if ( v4 == v6 )
    {
      *(_DWORD *)a1 = ptr;
      *(_QWORD *)(a1 + 4) = v7;
    }
    else
    {
      *(_DWORD *)a1 = ptr;
      *(_DWORD *)(a1 + 4) = v7;
      v8 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = HIDWORD(v7);
      if ( v6 )
      {
        ptr = v6;
        HIDWORD(v12[0]) = v8;
        goto LABEL_5;
      }
    }
    ptr = (char *)v12 + 4;
    v6 = (char *)v12 + 4;
  }
LABEL_5:
  LODWORD(v12[0]) = 0;
  *v6 = 0;
  if ( ptr != (char *)v12 + 4 )
    sub_339E64(ptr);
  *a2 = v10;
  return a1;
}
