int __fastcall sub_2A2C9C(unsigned int a1, void *a2, size_t a3, _DWORD *a4)
{
  int v5; // r7
  unsigned int v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // r6
  bool v12; // cc
  unsigned int v14; // r8
  int v15; // r0
  unsigned int v16; // r3

  v5 = a4[28];
  v9 = sub_347418(a4[24], v5);
  v10 = a4[23];
  v11 = a1 - v10;
  v12 = a1 - v10 > v9;
  if ( a1 - v10 <= v9 )
    v12 = v10 > a1;
  if ( v12 )
    return 5;
  v14 = v9;
  v15 = sub_347418(a3, v5);
  if ( v11 + v15 > v14 )
    return 5;
  v16 = a4[37];
  if ( v16 )
  {
    if ( v16 <= a1 || v16 < v15 + a1 )
      return 5;
  }
  memcpy(a2, (const void *)(a4[22] + v5 * v11), a3);
  return 0;
}
