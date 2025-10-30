unsigned int sub_68AE4()
{
  char *v0; // r3
  int *v1; // r12
  unsigned int v2; // r0
  int *v3; // r3
  unsigned int result; // r0

  v0 = (char *)off_B7D70;
  v1 = off_B7D74 + 1;
  v2 = *(_DWORD *)off_B7D70 + *off_B7D74;
  *(_DWORD *)off_B7D70 = v2;
  v3 = (int *)(v0 + 4);
  result = v2 >> 1;
  if ( v3 < (int *)&off_B7D70 )
  {
    if ( v1 >= (int *)&off_B7D70 )
      v1 = &dword_B7CF4;
  }
  else
  {
    v3 = &dword_B7CF4;
  }
  off_B7D70 = v3;
  off_B7D74 = v1;
  return result;
}
