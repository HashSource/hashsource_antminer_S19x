_DWORD *__fastcall sub_1BD14(const char *a1, int a2)
{
  size_t v4; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int v7; // r0
  void *v9; // r0

  v4 = strlen(a1);
  v5 = (_DWORD *)sub_63BA4(0, v4 + 52, 0, 1);
  v5[4] = 1;
  v6 = v5;
  v5[3] = -1;
  memcpy(v5 + 12, a1, v4);
  if ( a2 )
  {
    v7 = fopen64(a1, a2);
    v6[1] = v7;
    if ( !v7 )
    {
      v9 = v6;
      v6 = 0;
      free(v9);
    }
  }
  return v6;
}
