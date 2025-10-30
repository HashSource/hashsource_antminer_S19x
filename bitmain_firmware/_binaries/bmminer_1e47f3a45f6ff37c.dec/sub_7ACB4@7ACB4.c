int __fastcall sub_7ACB4(int a1, const void *a2, size_t a3)
{
  size_t v3; // r5
  _BYTE *v7; // r0
  void *v8; // r4
  ssize_t v9; // r5

  v3 = a3 + 2;
  v7 = malloc(a3 + 2);
  v8 = v7;
  if ( !v7 )
    return -1;
  v7[1] = -86;
  *v7 = 85;
  memcpy(v7 + 2, a2, a3);
  v9 = sub_3FFEC(a1, v8, v3);
  free(v8);
  return v9;
}
