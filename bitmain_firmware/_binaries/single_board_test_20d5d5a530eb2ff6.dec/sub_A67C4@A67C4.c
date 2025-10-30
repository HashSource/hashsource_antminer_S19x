int __fastcall sub_A67C4(int result)
{
  int v1; // r4

  if ( result )
  {
    v1 = result;
    memset((void *)(result + 448), 0, 0x40u);
    *(_DWORD *)(v1 + 504) = 1024;
    return 1;
  }
  return result;
}
