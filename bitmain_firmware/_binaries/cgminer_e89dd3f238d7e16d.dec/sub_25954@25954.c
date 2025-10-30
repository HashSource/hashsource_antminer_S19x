int __fastcall sub_25954(int a1)
{
  int result; // r0

  result = sub_22958(a1);
  *(_BYTE *)(a1 + 643) = 0;
  *(_BYTE *)(a1 + 641) = *(_BYTE *)(a1 + 643);
  if ( *(_DWORD *)(a1 + 588) )
    result = close(*(_DWORD *)(a1 + 588));
  *(_DWORD *)(a1 + 588) = 0;
  return result;
}
