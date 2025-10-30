int __fastcall sub_9E7C4(int result)
{
  if ( *(_DWORD *)(result + 20) > (unsigned int)dword_477C84 )
    sub_946E0("object size is larger than varsize-limit");
  return result;
}
