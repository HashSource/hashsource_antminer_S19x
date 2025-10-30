int sub_49BC0()
{
  int v0; // r3
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Pattern test reset.\n");
    result = sub_3AF5C(4, v2, 0, *(int *)"");
  }
  if ( dword_530F08 )
  {
    v0 = *(_DWORD *)(dword_530F08 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 16))();
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3AF5C(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
