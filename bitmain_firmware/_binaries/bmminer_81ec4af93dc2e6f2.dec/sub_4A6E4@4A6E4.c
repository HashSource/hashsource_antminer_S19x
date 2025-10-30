int sub_4A6E4()
{
  _DWORD *v0; // r3
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Clear ctxt.\n");
    result = sub_3AF5C(4, v2, 0, *(int *)"r ctxt.\n");
  }
  v0 = (_DWORD *)dword_530F08;
  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    *(_DWORD *)(dword_530F08 + 24) = 0;
    v0[7] = 0;
    v0[8] = 0;
    v0[9] = 0;
    v0[10] = 0;
    v0[11] = 0;
    v0[12] = 0;
    v0[13] = 0;
    v0[14] = 0;
    v0[15] = 0;
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3AF5C(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
