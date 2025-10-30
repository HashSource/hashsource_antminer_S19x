int sub_2969B8()
{
  int v1; // r12

  if ( dword_4900D4 > dword_4900DC )
  {
    dword_4900D4 = -1;
LABEL_4:
    sub_2945C8();
    return -1;
  }
  if ( dword_4900D4 == -1 )
    goto LABEL_4;
  v1 = dword_4900D8;
  dword_4900D8 = dword_4900D4;
  dword_4900D4 = v1;
  return 0;
}
