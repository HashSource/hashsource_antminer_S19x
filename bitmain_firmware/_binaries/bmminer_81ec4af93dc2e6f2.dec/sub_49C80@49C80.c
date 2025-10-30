int sub_49C80()
{
  int v0; // r2
  int result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_530F08 && (v0 = *(_DWORD *)(dword_530F08 + 4)) != 0 )
  {
    if ( *(_DWORD *)(dword_530F08 + 64) )
      return (*(int (**)(void))(v0 + 20))();
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3AF5C(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
