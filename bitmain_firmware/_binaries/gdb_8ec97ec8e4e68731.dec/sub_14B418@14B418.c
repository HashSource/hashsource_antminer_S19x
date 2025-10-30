int __fastcall sub_14B418(int *a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r2
  double v10; // r0
  int v11; // r7
  _DWORD *v12; // r3
  int v14; // r3
  int v15; // [sp+Ch] [bp-Ch] BYREF
  unsigned __int8 v16; // [sp+10h] [bp-8h] BYREF
  unsigned int v17; // [sp+14h] [bp-4h]

  v8 = a1[3];
  v9 = a1[1];
  LODWORD(v10) = &v16;
  HIDWORD(v10) = a1 + 4;
  v15 = a1[5];
  sub_33D44C(v10, v9, v8, 1);
  if ( v16 )
  {
    sub_14B338((int)a1, v17, (int)&v15, v16);
    a2 = (unsigned __int64)sub_347674(a3, a1[1]) >> 32;
  }
  v11 = *a1;
  v12 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v12 )
  {
    *(_DWORD *)a4 = *v12;
    *v12 = a4;
  }
  else
  {
    v14 = a1[2];
    *(_DWORD *)a4 = v14;
    a1[2] = a4;
    if ( v14 )
      *(_DWORD *)(v11 + 4 * ((unsigned __int64)sub_347674(*(_DWORD *)(*(_DWORD *)a4 + 4), a1[1]) >> 32)) = a4;
    *(_DWORD *)(v11 + 4 * a2) = a1 + 2;
  }
  ++a1[3];
  return a4;
}
