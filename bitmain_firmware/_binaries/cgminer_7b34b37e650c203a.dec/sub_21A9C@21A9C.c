void *__fastcall sub_21A9C(unsigned __int8 *a1, char *a2, size_t n)
{
  int v4; // r0
  size_t v7; // r2
  unsigned __int8 *v8; // r0
  size_t v9; // r6
  void *result; // r0
  unsigned int v11; // r3
  size_t v12; // r5
  unsigned __int8 *v13; // r6
  int v14; // r3

  v4 = *((_DWORD *)a1 + 1);
  v7 = 64 - v4;
  v8 = &a1[v4 + 8];
  if ( v7 >= n )
    v9 = n;
  else
    v9 = v7;
  result = memcpy(v8, a2, v9);
  v11 = n + *((_DWORD *)a1 + 1);
  if ( v11 > 0x3F )
  {
    v12 = n - v9;
    v13 = (unsigned __int8 *)&a2[v9];
    sub_21870((int)a1, a1 + 8, 1);
    sub_21870((int)a1, v13, v12 >> 6);
    result = memcpy(a1 + 8, &v13[v12 & 0xFFFFFFC0], v12 & 0x3F);
    v14 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 1) = v12 & 0x3F;
    *(_DWORD *)a1 = v14 + (((v12 >> 6) + 1) << 6);
  }
  else
  {
    *((_DWORD *)a1 + 1) = v11;
  }
  return result;
}
