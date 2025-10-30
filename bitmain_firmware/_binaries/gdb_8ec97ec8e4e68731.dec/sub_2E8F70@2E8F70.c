int __fastcall sub_2E8F70(int result, int a2)
{
  if ( *(_DWORD *)(*(_DWORD *)(result + 4) + 4) == 5 && (*(_BYTE *)(result + 40) & 7) == 1 )
    *(_DWORD *)(*(_DWORD *)(result + 160) + 544) = a2;
  return result;
}
