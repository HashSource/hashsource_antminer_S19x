int __fastcall sub_344D8C(int result, int a2)
{
  if ( (_UNKNOWN *)result != &std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)result = a2;
    *(_DWORD *)(result + 8) = 0;
    *(_BYTE *)(result + a2 + 12) = 0;
  }
  return result;
}
