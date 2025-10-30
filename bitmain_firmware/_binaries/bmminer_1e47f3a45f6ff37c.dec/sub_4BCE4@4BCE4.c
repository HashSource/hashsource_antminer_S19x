int sub_4BCE4()
{
  int v0; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v2, "[DEBUG] Get stats.\n");
    sub_3B6AC(4, v2, 0, *(int *)"stats.\n");
  }
  if ( dword_535D94 )
  {
    v0 = *(_DWORD *)(dword_535D94 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 32))();
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    sub_3B6AC(3, v2, 0, *(int *)"LL.\n");
  }
  return 0;
}
