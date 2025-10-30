int __fastcall sub_16EEB0(int result, int a2)
{
  if ( result )
  {
    *(_DWORD *)(result + 8) = 1;
    return sub_115E74((int *)(result + 16), a2);
  }
  return result;
}
