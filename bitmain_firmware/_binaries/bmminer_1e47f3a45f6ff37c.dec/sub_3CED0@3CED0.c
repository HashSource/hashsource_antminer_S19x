int *__fastcall sub_3CED0(const void *a1, size_t n, int a3)
{
  _DWORD *v3; // r12
  char *v4; // r3
  int v6; // t1
  int v8[33]; // [sp+0h] [bp-ACh] BYREF
  char v9; // [sp+84h] [bp-28h] BYREF
  char v10; // [sp+A4h] [bp-8h] BYREF

  v3 = &unk_B3194;
  v4 = &v9;
  do
  {
    v6 = v3[1];
    ++v3;
    *((_DWORD *)v4 + 1) = v6;
    v4 += 4;
  }
  while ( v4 != &v10 );
  v8[0] = 0;
  v8[1] = 0;
  sub_3CD34(v8, a1, n);
  return sub_3CDD8(v8, a3);
}
