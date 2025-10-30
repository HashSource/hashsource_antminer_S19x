int sub_4AB08()
{
  int v0; // r4
  int v1; // r0
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v4, "[DEBUG] Check if all chain pattern test done except block.\n");
    sub_3AF5C(4, v4, 0, *(int *)" except block.\n");
  }
  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    v0 = 0;
    while ( 1 )
    {
      v1 = sub_266F0(v0);
      v2 = v0 + 2;
      ++v0;
      if ( v1 )
      {
        if ( (*(_DWORD *)(dword_530F08 + 4 * v2) & 0xFFFFFFFD) != 0 )
          break;
      }
      if ( v0 == 4 )
        return 1;
    }
    return 0;
  }
  else if ( (unsigned int)off_AFC24 <= 3 )
  {
    return 1;
  }
  else
  {
    strcpy(v4, "Handle is NULL.\n");
    sub_3AF5C(3, v4, 0, *(int *)"LL.\n");
    return 1;
  }
}
