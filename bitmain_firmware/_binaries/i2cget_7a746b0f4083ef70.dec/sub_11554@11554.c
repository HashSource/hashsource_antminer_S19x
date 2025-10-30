char *__fastcall sub_11554(_DWORD *a1, int a2)
{
  size_t v2; // r4
  char *v4; // r0
  char *v5; // r5

  v2 = 16 * (a2 + 8);
  v4 = (char *)realloc(a1, v2);
  v5 = v4;
  if ( v4 )
    memset(&v4[v2 - 128], 0, 0x80u);
  else
    sub_1151C(a1);
  return v5;
}
