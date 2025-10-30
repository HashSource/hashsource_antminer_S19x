int __fastcall sub_2C83AC(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 28);
  if ( *(_DWORD *)(v2 + 44) == 4 )
    *(_DWORD *)(v2 + 364) = a2;
  return result;
}
