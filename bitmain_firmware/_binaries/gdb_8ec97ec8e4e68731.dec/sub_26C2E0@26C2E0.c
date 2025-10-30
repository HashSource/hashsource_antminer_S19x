void __fastcall sub_26C2E0(int a1, int a2)
{
  *(_DWORD *)(a1 + 60) = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 56);
  JUMPOUT(0x26C200);
}
