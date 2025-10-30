char *__fastcall sub_6A044(char *result)
{
  char **v1; // r12
  int *v2; // r3

  if ( !result )
    return sub_64E00((_BYTE *)&dword_0 + 3, "add_full_recv_buffer received NULL buffer");
  *(_DWORD *)result = 0;
  v2 = (int *)dword_107224;
  if ( dword_107224 )
  {
    v1 = *(char ***)dword_107224;
  }
  else
  {
    dword_107220 = (int)result;
    v2 = &dword_107220;
  }
  if ( dword_107224 )
  {
    *v1 = result;
    v2 = (int *)*v2;
  }
  dword_107224 = (int)v2;
  ++dword_10720C;
  return result;
}
