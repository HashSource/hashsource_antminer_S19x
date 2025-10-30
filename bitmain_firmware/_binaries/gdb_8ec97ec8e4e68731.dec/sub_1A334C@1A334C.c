_DWORD *__fastcall sub_1A334C(int *a1, int a2, int a3, char **a4, char *s)
{
  char **v8; // r5
  _DWORD *v9; // r4
  char v10; // r3
  char *v11; // r0
  int v12; // r3
  size_t v14; // r9
  int *v15; // r7
  char **v16; // r10
  char *v17; // t1
  struct obstack *v18; // r2
  void *v19; // r3
  void *v20; // r0
  int v21; // [sp+0h] [bp-24h] BYREF

  v21 = (int)a4;
  v8 = a4;
  v9 = sub_1A2CCC(0x10u, a1);
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v10 = *((_BYTE *)v9 + 4);
  *v9 = a1;
  *((_BYTE *)v9 + 4) = v10 & 0xFE | a2 & 1;
  v11 = sub_1A324C((int)a1, s);
  v12 = v9[1];
  v9[3] = v11;
  v9[1] = v12 & 0x80000001 | (2 * (a3 & 0x3FFFFFFF));
  if ( a2 != 1 )
    return v9;
  v14 = 4 * a3;
  if ( a3 > 0 )
  {
    v15 = &v21 - 1;
    v16 = &v8[v14 / 4];
    do
    {
      v17 = *v8++;
      v15[1] = (int)sub_1A324C((int)a1, v17);
      ++v15;
    }
    while ( v8 != v16 );
  }
  v18 = (struct obstack *)a1[1];
  if ( v18 )
  {
    v19 = sub_C1930(&v21, v14, v18);
  }
  else
  {
    v20 = sub_93028(v14);
    v19 = memcpy(v20, &v21, v14);
  }
  v9[2] = v19;
  return v9;
}
