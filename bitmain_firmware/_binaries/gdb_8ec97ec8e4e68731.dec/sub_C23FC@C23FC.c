int __fastcall sub_C23FC(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 8);
  if ( result )
    return (*(unsigned __int8 *)(result + 33) >> 2) & 1;
  return result;
}
