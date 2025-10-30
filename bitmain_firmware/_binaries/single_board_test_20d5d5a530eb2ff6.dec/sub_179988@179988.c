int __fastcall sub_179988(int a1, int a2)
{
  if ( (a2 & 0x80) != 0 )
    return 0;
  else
    return *(_BYTE *)(*(_DWORD *)(a1 + 4) + 2 * a2) & 1;
}
