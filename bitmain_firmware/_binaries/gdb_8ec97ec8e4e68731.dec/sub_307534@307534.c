int __fastcall sub_307534(_DWORD *a1, __int64 a2)
{
  bool v3; // zf
  int (*v4)(); // r3
  int v5; // lr
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r6

  if ( !(_DWORD)a2 )
    return -6;
  LODWORD(a2) = *(unsigned __int8 *)a2;
  v3 = a2 == 0x3800000031LL;
  LODWORD(a2) = a2 != 0x3800000031LL;
  if ( !v3 )
    return -6;
  if ( !a1 )
    return -2;
  v4 = (int (*)())a1[8];
  a1[6] = a2;
  if ( v4 )
  {
    v5 = a1[10];
    if ( a1[9] )
      goto LABEL_7;
  }
  else
  {
    v5 = 0;
    a1[10] = 0;
    a1[8] = zcalloc;
    v4 = zcalloc;
    if ( a1[9] )
      goto LABEL_7;
  }
  a1[9] = zcfree;
LABEL_7:
  v7 = (_DWORD *)((int (__fastcall *)(int, int, int))v4)(v5, 1, 7120);
  v8 = v7;
  if ( !v7 )
    return -4;
  a1[7] = v7;
  *v7 = a1;
  v7[14] = 0;
  v7[1] = 16180;
  v9 = sub_307488(a1);
  if ( v9 )
  {
    ((void (__fastcall *)(_DWORD, _DWORD *))a1[9])(a1[10], v8);
    a1[7] = 0;
  }
  return v9;
}
