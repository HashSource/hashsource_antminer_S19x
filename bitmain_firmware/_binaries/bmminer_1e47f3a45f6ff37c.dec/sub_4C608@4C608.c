void *sub_4C608()
{
  _BYTE *v0; // r4
  void *result; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v2, "[DEBUG] Clear ctxt.\n");
    result = (void *)sub_3B6AC(4, v2, 0, *(int *)"r ctxt.\n");
  }
  v0 = (_BYTE *)dword_535D94;
  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    *(_BYTE *)(dword_535D94 + 24) = 0;
    v0[25] = 0;
    v0[26] = 0;
    v0[27] = 0;
    v0[28] = 0;
    v0[29] = 0;
    v0[30] = 0;
    v0[31] = 0;
    memset(v0 + 32, 0, 0x10u);
    return memset(v0 + 48, 0, 0x10u);
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return (void *)sub_3B6AC(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
