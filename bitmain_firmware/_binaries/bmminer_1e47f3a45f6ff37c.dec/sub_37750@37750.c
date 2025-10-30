char *__fastcall sub_37750(size_t *a1, const char **a2, int a3, char a4)
{
  const char *v4; // r10
  const char *v8; // r7
  size_t v9; // r4
  const char *v10; // r6
  size_t v11; // r9
  size_t v12; // r9
  char *v13; // r4
  unsigned __int8 v14; // r5
  int v15; // r10
  unsigned __int8 v16; // r2
  char *v17; // r0
  int v18; // r10
  unsigned __int8 v19; // r5
  int v20; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = a2[72];
  v8 = a2[77];
  v9 = strlen(v4);
  v10 = a2[80];
  v11 = strlen(a2[77]);
  v12 = v9 + v11 + 459 + strlen(v10);
  v13 = (char *)calloc(1u, v12);
  if ( v13 )
  {
    *v13 = a4;
    *(_DWORD *)(v13 + 1) = a3;
    memcpy(v13 + 5, a2, 0x1C0u);
    v14 = strlen(v4) + 1;
    v13[453] = v14;
    memcpy(v13 + 454, v4, v14);
    v15 = v14 + 455;
    v16 = strlen(v8) + 1;
    v17 = &v13[v15];
    v13[v14 + 454] = v16;
    v18 = v15 + v16;
    memcpy(v17, v8, v16);
    v19 = strlen(v10) + 1;
    v13[v18] = v19;
    memcpy(&v13[v18 + 1], v10, v19);
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      snprintf(s, 0x800u, "need data size:%d, actual size:%d\n", v12, v18 + 1 + v19);
      sub_3B6AC(7, s, 0, v20);
    }
    *a1 = v12;
  }
  return v13;
}
