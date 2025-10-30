void __fastcall sub_249A0(int a1, int a2)
{
  if ( sub_2484C(**(_DWORD **)(a2 + 8), a1) )
  {
    if ( !dword_471530 )
    {
      dword_47151C = (int)"fake";
      dword_471540 = 2;
      dword_471704 = (int)&algn_471534[8];
      byte_4717CC = -106;
      dword_471530 = (int)&unk_4717B0;
      dword_471518 = (int)&unk_471700;
      dword_4717D4 = (int)&dword_471518;
    }
    *(_DWORD *)(a2 + 40) = &dword_4717D4;
  }
  else
  {
    *(_DWORD *)(a2 + 40) = 0;
  }
  if ( *(_DWORD *)(dword_487D2C + 8) )
    *(_DWORD *)(a2 + 60) |= 0x20000000u;
  JUMPOUT(0xB8E80);
}
