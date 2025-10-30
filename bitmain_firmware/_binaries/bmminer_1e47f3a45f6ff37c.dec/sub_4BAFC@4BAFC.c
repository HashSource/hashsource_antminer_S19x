int sub_4BAFC()
{
  int v0; // r2
  int result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_535D94 && (v0 = *(_DWORD *)(dword_535D94 + 4)) != 0 )
  {
    if ( *(_DWORD *)(dword_535D94 + 64) )
      return (*(int (**)(void))(v0 + 20))();
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3B6AC(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
