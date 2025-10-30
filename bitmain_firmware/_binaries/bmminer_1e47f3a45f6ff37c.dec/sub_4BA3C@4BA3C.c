int sub_4BA3C()
{
  int v0; // r3
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v2, "[DEBUG] Pattern test reset.\n");
    result = sub_3B6AC(4, v2, 0, *(int *)"");
  }
  if ( dword_535D94 )
  {
    v0 = *(_DWORD *)(dword_535D94 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 16))();
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3B6AC(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
