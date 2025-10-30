int sub_49E5C()
{
  int v0; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Get stats.\n");
    sub_3AF5C(4, v2, 0, *(int *)"stats.\n");
  }
  if ( dword_530F08 )
  {
    v0 = *(_DWORD *)(dword_530F08 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 32))();
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    sub_3AF5C(3, v2, 0, *(int *)"LL.\n");
  }
  return 0;
}
