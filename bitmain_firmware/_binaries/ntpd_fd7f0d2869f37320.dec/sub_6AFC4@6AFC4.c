char *__fastcall sub_6AFC4(char *result)
{
  char **v1; // r12
  int *v2; // r3

  if ( !result )
    return sub_65D40((_BYTE *)&dword_0 + 3, "add_full_recv_buffer received NULL buffer");
  *(_DWORD *)result = 0;
  v2 = (int *)dword_108248;
  if ( dword_108248 )
  {
    v1 = *(char ***)dword_108248;
  }
  else
  {
    dword_108244 = (int)result;
    v2 = &dword_108244;
  }
  if ( dword_108248 )
  {
    *v1 = result;
    v2 = (int *)*v2;
  }
  dword_108248 = (int)v2;
  ++dword_108230;
  return result;
}
