int *sub_32FD8()
{
  int *result; // r0

  result = (int *)dword_471AC8;
  if ( !dword_471AC8 )
  {
    dword_471A9C = 0;
    dword_471AB4 = 0;
    dword_471AC8 = (int)&dword_471A9C;
    dword_471AA0 = 4;
    dword_471AA4 = 8;
    dword_471AC4 = 8;
    dword_471AA8 = 16;
    dword_471AB8 = 16;
    dword_471AAC = 40;
    dword_471AB0 = 40;
    dword_471ABC = 24;
    dword_471AC0 = 32;
    return &dword_471A9C;
  }
  return result;
}
