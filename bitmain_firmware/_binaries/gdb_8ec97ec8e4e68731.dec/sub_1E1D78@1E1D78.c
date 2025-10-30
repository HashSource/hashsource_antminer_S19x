_DWORD *__fastcall sub_1E1D78(int a1)
{
  int v2; // r6
  _DWORD *v3; // r4
  int v4; // r0
  void *v5; // r0
  int v6; // r2
  int v7; // r3
  signed int v8; // r0
  int v9; // r1
  size_t v10; // r1
  void *v11; // r0

  v2 = dword_488C94;
  v3 = sub_163938(a1, 0x10u);
  v4 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v5 = sub_163938(a1, 24 * v4);
  v3[1] = v5;
  v8 = sub_1E1110(a1, (int)v5, v6, v7);
  v9 = 399;
  v3[3] = 399;
  if ( v8 > 183 )
    v9 = 2 * (v8 + 16);
  *v3 = v8;
  if ( v8 > 183 )
    v3[3] = v9;
  v3[2] = 0;
  if ( *(_DWORD *)(v2 + 4) < v9 )
  {
    v10 = 2 * v9;
    v11 = *(void **)v2;
    *(_DWORD *)(v2 + 4) = v10;
    *(_DWORD *)v2 = sub_93050(v11, v10);
  }
  return v3;
}
