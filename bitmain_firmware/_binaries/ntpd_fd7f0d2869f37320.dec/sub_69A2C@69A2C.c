unsigned int sub_69A2C()
{
  char *v0; // r3
  int *v1; // r1
  unsigned int v2; // r0
  int *v3; // r3

  v0 = (char *)off_B8D70;
  v1 = off_B8D74 + 1;
  v2 = *off_B8D74 + *(_DWORD *)off_B8D70;
  *(_DWORD *)off_B8D70 = v2;
  v3 = (int *)(v0 + 4);
  if ( v3 < (int *)&off_B8D70 )
  {
    if ( v1 >= (int *)&off_B8D70 )
      v1 = &dword_B8CF4;
  }
  else
  {
    v3 = &dword_B8CF4;
  }
  off_B8D70 = v3;
  off_B8D74 = v1;
  return v2 >> 1;
}
