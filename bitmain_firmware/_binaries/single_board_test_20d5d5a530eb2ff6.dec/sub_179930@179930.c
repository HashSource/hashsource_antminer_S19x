int __fastcall sub_179930(int result)
{
  if ( result )
  {
    *(_DWORD *)result = &off_220214;
    *(_DWORD *)(result + 4) = "\b";
    *(_DWORD *)(result + 8) = 0;
    return 1;
  }
  return result;
}
