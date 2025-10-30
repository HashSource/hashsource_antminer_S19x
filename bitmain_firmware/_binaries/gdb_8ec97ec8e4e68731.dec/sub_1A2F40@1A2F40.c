_DWORD *__fastcall sub_1A2F40(const char *a1, int a2, int a3)
{
  int v3; // r6
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r2
  int v13; // r0
  _DWORD v14[6]; // [sp+0h] [bp-18h] BYREF

  v3 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 20);
  v14[2] = a2;
  v14[1] = a1;
  v14[3] = a3;
  v14[4] = 0;
  v8 = (_DWORD *)sub_326F3C(v7, v14);
  v9 = v8;
  if ( v8 )
  {
    v10 = *v8;
  }
  else
  {
    v13 = sub_326FD4(*(_DWORD *)(v3 + 20), v14);
    v9 = (_DWORD *)v13;
    if ( !v13 )
      return 0;
    v10 = *(_DWORD *)v13;
    if ( strcmp(*(const char **)(*(_DWORD *)v13 + 4), a1) )
      return 0;
  }
  v11 = *(_DWORD *)(v10 + 16);
  if ( !v11 || sub_1A2D60(a2, a3, v11, *(_DWORD *)(v10 + 20)) < 0 )
    return v9;
  return 0;
}
