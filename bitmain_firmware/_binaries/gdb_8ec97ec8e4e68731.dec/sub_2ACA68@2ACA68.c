int __fastcall sub_2ACA68(int a1)
{
  int result; // r0
  int v3; // r3

  if ( (*(_BYTE *)(a1 + 40) & 0x18) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    result = (int)sub_2AB368(8);
    if ( result )
    {
      *(_DWORD *)(a1 + 8) = result;
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      v3 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 12) = &off_411A20;
      result = 1;
      *(_QWORD *)(a1 + 56) = 0;
      v3 |= 0x10000u;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = v3;
      *(_BYTE *)(a1 + 40) = v3 & 0xE7 | 0x10;
    }
  }
  return result;
}
