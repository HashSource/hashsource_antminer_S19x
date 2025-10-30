void *__fastcall sub_16DFC(char ***a1, char *s)
{
  char **v2; // r5
  size_t v5; // r0
  char *v6; // r7
  size_t v7; // r4
  unsigned int v8; // r1
  size_t v9; // r9
  char *v10; // r5
  void *result; // r0
  int v12; // r10
  char sa[2048]; // [sp+18h] [bp-800h] BYREF

  v2 = *a1;
  v5 = strlen(s);
  v6 = v2[1];
  v7 = v5;
  v8 = (unsigned int)v2[2];
  v9 = v5 + 1;
  v10 = *v2;
  if ( (unsigned int)&v6[v5 + 1] > v8 )
  {
    v12 = v5 + 4097 - (v9 & 0xFFF);
    v10 = (char *)realloc(v10, v8 + v12);
    **a1 = v10;
    if ( !v10 )
    {
      snprintf(
        sa,
        0x800u,
        "OOM buf siz=%d tot=%d ext=%d in %s %s():%d",
        v7,
        (*a1)[2],
        v12,
        "api.c",
        "add_item_buf",
        1176);
      sub_20F58(3, sa, 1);
      sub_3EBA0(1);
    }
    (*a1)[2] += v12;
  }
  result = memcpy(&v6[(_DWORD)v10], s, v9);
  (*a1)[1] += v7;
  return result;
}
