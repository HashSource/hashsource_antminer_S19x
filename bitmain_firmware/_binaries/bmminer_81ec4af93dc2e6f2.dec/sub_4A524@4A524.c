int sub_4A524()
{
  int v0; // r3
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Clear stats.\n");
    result = sub_3AF5C(4, v2, 0, *(int *)"r stats.\n");
  }
  if ( dword_530F08 )
  {
    v0 = *(_DWORD *)(dword_530F08 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 12))();
  }
  if ( (unsigned int)off_AFC24 > 3 )
    return sub_49460();
  return result;
}
