unsigned int __fastcall sub_885B0(int a1)
{
  unsigned int result; // r0

  result = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 84))();
  if ( result >= 0x7FFFFFFF )
    return 0x7FFFFFFF;
  return result;
}
