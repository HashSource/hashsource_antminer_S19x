int __fastcall sub_24DB0(_DWORD *a1)
{
  size_t v1; // r6
  size_t v3; // r7
  void *v4; // r5
  void *v5; // r0
  int v6; // r3
  void *v7; // r6
  int v9; // r3
  int v10; // r3
  char v11[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = a1[1];
  v3 = a1[21];
  v4 = calloc(v1, 0x210u);
  a1[26] = v4;
  if ( v4 )
  {
    v5 = calloc(v3, 8u);
    v7 = v5;
    if ( v5 )
      v6 = 1;
    a1[28] = v5;
    if ( v5 )
    {
      a1[24] = v6;
      return 0;
    }
    else
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(v11, 0x800u, "malloc %d runtime_fan failed\n", v3);
        sub_3AF5C(3, v11, v7, v10);
        v4 = (void *)a1[26];
      }
      free(v4);
      return -2147482624;
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v11, 0x800u, "malloc %d runtime_chain failed\n", v1);
      sub_3AF5C(3, v11, 0, v9);
    }
    return -2147482624;
  }
}
