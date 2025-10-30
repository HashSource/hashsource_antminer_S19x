int *sub_32F70()
{
  int *result; // r0

  result = (int *)dword_471A98;
  if ( !dword_471A98 )
  {
    dword_471A6C = 0;
    dword_471A84 = 0;
    dword_471A98 = (int)&dword_471A6C;
    dword_471A70 = 4;
    dword_471A74 = 4;
    dword_471A94 = 4;
    dword_471A78 = 8;
    dword_471A88 = 8;
    dword_471A7C = 20;
    dword_471A80 = 20;
    dword_471A8C = 12;
    dword_471A90 = 16;
    return &dword_471A6C;
  }
  return result;
}
