int __fastcall sub_2A3BC8(int a1)
{
  char v1; // r3

  v1 = *(_BYTE *)(a1 + 40);
  if ( (v1 & 7) == 2 && (v1 & 0x18) != 0x10 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 244))();
  ((void (__fastcall *)(int))loc_2A6C48)(5);
  return 0;
}
