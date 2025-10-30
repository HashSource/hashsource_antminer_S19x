int __fastcall sub_C23B0(int a1)
{
  int result; // r0

  do
  {
    result = *(_DWORD *)(a1 + 8);
    if ( result && (*(_BYTE *)(result + 33) & 4) == 0 )
      break;
    a1 = *(_DWORD *)(a1 + 12);
  }
  while ( a1 );
  return result;
}
