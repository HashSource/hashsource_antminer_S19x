bool __fastcall sub_2C38F8(int a1, int a2, int a3, const char *a4)
{
  const char **v6; // r0
  const char **v7; // r4
  int v9; // r1
  char *v10; // r6

  v6 = sub_2AD864(a3, a4);
  v7 = v6;
  if ( !v6 )
    return 1;
  if ( ((unsigned int)v6[5] & 0x8000) != 0 )
    return 1;
  v9 = a1;
  v10 = (char *)v6[15];
  return sub_2C23D4(a2, v9, v6, (int)v6[27])
      || sub_2ADDE8(a2, v10, (void *)v7[27], 0, (unsigned int)v7[14], (size_t)v7[9]) != 0;
}
