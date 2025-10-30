int __fastcall sub_2A789C(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v1 + 4) == 5 )
    return *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v1 + 444) + 392) + 10);
  if ( (unsigned int)sub_2A67A4(a1) <= 0x20 )
    return 32;
  return 64;
}
