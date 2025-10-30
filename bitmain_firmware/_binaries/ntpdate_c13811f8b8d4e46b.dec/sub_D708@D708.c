char *__fastcall sub_D708(char *result)
{
  char **v1; // r12
  int *v2; // r3

  if ( !result )
    return sub_A828((_BYTE *)&dword_0 + 3, "add_full_recv_buffer received NULL buffer");
  *(_DWORD *)result = 0;
  v2 = (int *)dword_3333C;
  if ( dword_3333C )
  {
    v1 = *(char ***)dword_3333C;
  }
  else
  {
    dword_33338 = (int)result;
    v2 = &dword_33338;
  }
  if ( dword_3333C )
  {
    *v1 = result;
    v2 = (int *)*v2;
  }
  dword_3333C = (int)v2;
  ++dword_33324;
  return result;
}
