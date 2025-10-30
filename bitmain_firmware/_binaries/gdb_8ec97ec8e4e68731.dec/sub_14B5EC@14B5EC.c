_DWORD *__fastcall sub_14B5EC(int *a1, int a2, int a3, _DWORD *a4)
{
  int v8; // r3
  int v9; // r2
  double v10; // r0
  int v11; // r7
  _DWORD *v12; // r3
  int v14; // r3
  int v15; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 v16; // [sp+10h] [bp-Ch] BYREF
  unsigned int v17; // [sp+14h] [bp-8h]

  v8 = a1[3];
  v9 = a1[1];
  LODWORD(v10) = &v16;
  HIDWORD(v10) = a1 + 4;
  v15 = a1[5];
  sub_33D44C(v10, v9, v8, 1);
  if ( v16 )
  {
    sub_14B50C((int)a1, v17, (int)&v15, v16);
    a2 = (unsigned __int64)sub_347674(a3, a1[1]) >> 32;
  }
  v11 = *a1;
  a4[8] = a3;
  v12 = *(_DWORD **)(v11 + 4 * a2);
  if ( v12 )
  {
    *a4 = *v12;
    *v12 = a4;
  }
  else
  {
    v14 = a1[2];
    *a4 = v14;
    a1[2] = (int)a4;
    if ( v14 )
      *(_DWORD *)(v11 + 4 * ((unsigned __int64)sub_347674(*(_DWORD *)(*a4 + 32), a1[1]) >> 32)) = a4;
    *(_DWORD *)(v11 + 4 * a2) = a1 + 2;
  }
  ++a1[3];
  return a4;
}
