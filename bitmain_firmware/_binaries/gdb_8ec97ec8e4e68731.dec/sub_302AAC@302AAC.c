int __fastcall sub_302AAC(int a1, int a2, int a3)
{
  char v3; // r12

  v3 = *(_BYTE *)(a1 + 40);
  if ( (v3 & 7) != 1 || (*(_BYTE *)(a1 + 40) & 8) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 124) = a3;
    return v3 & 7;
  }
}
