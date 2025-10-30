int __fastcall sub_252C0(_DWORD *a1)
{
  size_t v1; // r6
  size_t v3; // r7
  void *v4; // r5
  void *v5; // r6
  int v7; // r3
  void *v8; // r0
  int v9; // r3
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = a1[1];
  v3 = a1[21];
  v4 = calloc(v1, 0x210u);
  a1[26] = v4;
  if ( v4 )
  {
    v5 = calloc(v3, 8u);
    a1[28] = v5;
    if ( v5 )
    {
      a1[24] = 1;
      return 0;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(v10, 0x800u, "malloc %d runtime_fan failed\n", v3);
        sub_3B6AC(3, v10, 0, v9);
        v8 = (void *)a1[26];
      }
      else
      {
        v8 = v4;
      }
      free(v8);
      return -2147482624;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v10, 0x800u, "malloc %d runtime_chain failed\n", v1);
      sub_3B6AC(3, v10, 0, v7);
    }
    return -2147482624;
  }
}
