int sub_374D4()
{
  int v0; // r3
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v2, "[DEBUG] Pattern test reset.\n");
    result = sub_47AB4(4, v2, 0);
  }
  if ( dword_1AEA78 )
  {
    v0 = *(_DWORD *)(dword_1AEA78 + 4);
    if ( v0 )
      return (*(int (**)(void))(v0 + 16))();
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_47AB4(3, v2, 0);
  }
  return result;
}
