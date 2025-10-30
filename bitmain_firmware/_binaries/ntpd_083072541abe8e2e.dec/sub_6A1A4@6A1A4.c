int sub_6A1A4()
{
  int result; // r0
  int *v1; // r1

  result = dword_107220;
  if ( dword_107220 )
  {
    v1 = *(int **)dword_107220;
    dword_107220 = *(_DWORD *)dword_107220;
    if ( dword_107220 )
    {
      if ( dword_107224 != result )
      {
LABEL_4:
        --dword_10720C;
        return result;
      }
      v1 = &dword_107220;
    }
    dword_107224 = (int)v1;
    goto LABEL_4;
  }
  return result;
}
