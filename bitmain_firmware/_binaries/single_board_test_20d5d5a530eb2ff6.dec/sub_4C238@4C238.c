int __fastcall sub_4C238(int result, int a2)
{
  if ( !a2 )
    goto LABEL_5;
  if ( !*(_DWORD *)(result + 16392) )
    *(_DWORD *)(result + 16392) = 0x10000;
  if ( !*(_DWORD *)(a2 + 16400) )
LABEL_5:
    a2 = 0;
  *(_DWORD *)(result + 16388) = a2;
  return result;
}
