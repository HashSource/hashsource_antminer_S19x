size_t __fastcall sub_39F94(_DWORD *a1, void *dest, int a3, _DWORD *a4)
{
  size_t v5; // r4
  _DWORD *v7; // r5
  int v8; // r1

  if ( a3 <= 0 )
    return 0;
  v5 = a3 - 1;
  v7 = a1 + 18;
  if ( a3 - 1 >= a1[21] )
    v5 = a1[21];
  memcpy(dest, a1 + 22, v5);
  *((_BYTE *)dest + v5) = 0;
  v8 = v7[1];
  *a4 = *v7;
  a4[1] = v8;
  return v5;
}
