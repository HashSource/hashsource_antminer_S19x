int __fastcall sub_DBC24(int result)
{
  if ( (unsigned int)(*(_DWORD *)(result + 12) - 22) <= 3 )
    JUMPOUT(0xDB0B0);
  return result;
}
