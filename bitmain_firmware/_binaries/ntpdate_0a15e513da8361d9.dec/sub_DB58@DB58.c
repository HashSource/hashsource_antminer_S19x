char *__fastcall sub_DB58(char *result)
{
  char **v1; // r12
  int *v2; // r3

  if ( !result )
    return sub_ABF8((_BYTE *)&dword_0 + 3, "add_full_recv_buffer received NULL buffer");
  *(_DWORD *)result = 0;
  v2 = (int *)dword_33340;
  if ( dword_33340 )
  {
    v1 = *(char ***)dword_33340;
  }
  else
  {
    dword_3333C = (int)result;
    v2 = &dword_3333C;
  }
  if ( dword_33340 )
  {
    *v1 = result;
    v2 = (int *)*v2;
  }
  dword_33340 = (int)v2;
  ++dword_33328;
  return result;
}
