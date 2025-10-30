int __fastcall sub_15B00(unsigned int *a1, char *s)
{
  size_t v4; // r7
  _BYTE *v5; // r0
  char *v6; // r2
  unsigned int v7; // r1
  int v8; // r8
  unsigned int v9; // r3
  size_t v10; // r5
  char *v11; // r0

  v4 = strlen(s);
  v5 = (_BYTE *)a1[1];
  v6 = (char *)a1[2];
  v7 = *a1;
  v8 = v6 - v5;
  v9 = v6 - v5 + 12 + v4;
  if ( *a1 < v9 )
  {
    v10 = v7 + 0x20000;
    if ( v9 > v7 + 0x20000 )
      v10 = ((unsigned int)vcvts_n_f32_u32(v9, 0x10u) + 2) << 16;
    v11 = (char *)realloc(v5, v10);
    v6 = &v11[v8];
    *a1 = v10;
    a1[1] = (unsigned int)v11;
    a1[2] = (unsigned int)&v11[v8];
  }
  memcpy(v6, s, v4 + 1);
  a1[2] += v4;
  return 1;
}
