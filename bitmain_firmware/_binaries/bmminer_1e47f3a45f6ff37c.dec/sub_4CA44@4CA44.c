int sub_4CA44()
{
  int v0; // r4
  int v1; // r0
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v4, "[DEBUG] Check if all chain pattern test done except block.\n");
    sub_3B6AC(4, v4, 0, *(int *)" except block.\n");
  }
  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v0 = 0;
    while ( 1 )
    {
      v1 = sub_26C0C(v0);
      v2 = v0 + 2;
      ++v0;
      if ( v1 )
      {
        if ( (*(_DWORD *)(dword_535D94 + 4 * v2) & 0xFFFFFFFD) != 0 )
          break;
      }
      if ( v0 == 4 )
        return 1;
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v4, "Handle is NULL.\n");
      sub_3B6AC(3, v4, 0, *(int *)"LL.\n");
    }
    return 1;
  }
}
