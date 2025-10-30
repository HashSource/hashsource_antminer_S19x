int __fastcall sub_179958(int result)
{
  if ( result )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)result = &off_22023C;
    *(_DWORD *)(result + 4) = &unk_1EA474;
    return 1;
  }
  return result;
}
