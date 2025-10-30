unsigned int sub_CC30()
{
  char *v0; // r3
  int *v1; // r12
  unsigned int v2; // r0
  int *v3; // r3
  unsigned int result; // r0

  v0 = (char *)off_310CC;
  v1 = (int *)(off_310D0 + 4);
  v2 = *(_DWORD *)off_310CC + *(_DWORD *)off_310D0;
  *(_DWORD *)off_310CC = v2;
  v3 = (int *)(v0 + 4);
  result = v2 >> 1;
  if ( v3 < (int *)&off_310CC )
  {
    if ( v1 >= (int *)&off_310CC )
      v1 = &dword_31050;
  }
  else
  {
    v3 = &dword_31050;
  }
  off_310CC = v3;
  off_310D0 = (int)v1;
  return result;
}
