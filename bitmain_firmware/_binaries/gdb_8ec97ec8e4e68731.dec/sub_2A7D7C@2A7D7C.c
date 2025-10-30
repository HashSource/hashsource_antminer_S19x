int __fastcall sub_2A7D7C(int a1)
{
  int result; // r0

  result = sub_2AE464(a1, 0);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) == 5 )
      return *(_DWORD *)(*(_DWORD *)(result + 444) + 24);
    else
      return 0;
  }
  return result;
}
