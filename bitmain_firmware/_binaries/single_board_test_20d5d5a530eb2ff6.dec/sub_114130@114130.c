int __fastcall sub_114130(int *a1, int a2, void *a3, int a4)
{
  signed int v7; // r1
  int v8; // r0
  const void **v9; // r0
  size_t v10; // r4

  v7 = sub_113C44(a1, a2, -1);
  if ( v7 < 0 )
    return -1;
  v8 = sub_113CB0(a1, v7);
  v9 = (const void **)sub_114128(v8);
  if ( !a3 )
    return (int)*v9;
  if ( a4 <= 0 )
    return 0;
  v10 = (size_t)*v9;
  if ( a4 <= (int)*v9 )
    v10 = a4 - 1;
  memcpy(a3, v9[2], v10);
  *((_BYTE *)a3 + v10) = 0;
  return v10;
}
