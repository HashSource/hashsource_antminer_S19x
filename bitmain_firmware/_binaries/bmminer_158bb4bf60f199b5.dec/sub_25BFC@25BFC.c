char *__fastcall sub_25BFC(size_t *a1, const char **a2, int a3, char a4)
{
  const char *v4; // r11
  const char *v8; // r10
  size_t v9; // r4
  const char *v10; // r8
  size_t v11; // r4
  size_t v12; // r4
  char *v13; // r0
  char *v14; // r5
  size_t v15; // r7
  size_t v16; // r2
  size_t v17; // r6
  size_t v18; // r7
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = a2[72];
  v8 = a2[77];
  v9 = strlen(v4);
  v10 = a2[80];
  v11 = v9 + strlen(a2[77]) + 456;
  v12 = v11 + 3 + strlen(v10);
  v13 = (char *)calloc(1u, v12);
  v14 = v13;
  if ( v13 )
  {
    *(_DWORD *)(v13 + 1) = a3;
    *v13 = a4;
    memcpy(v13 + 5, a2, 0x1C0u);
    v15 = (unsigned __int8)(strlen(v4) + 1);
    v14[453] = v15;
    memcpy(v14 + 454, v4, v15);
    v16 = (unsigned __int8)(strlen(v8) + 1);
    v14[v15 + 454] = v16;
    v17 = v16 + v15 + 455;
    memcpy(&v14[v15 + 455], v8, v16);
    v18 = (unsigned __int8)(strlen(v10) + 1);
    v14[v17] = v18;
    memcpy(&v14[v17 + 1], v10, v18);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "need data size:%d, actual size:%d\n", v12, v18 + v17 + 1);
      sub_47AB4(7, s, 0);
    }
    *a1 = v12;
  }
  return v14;
}
