int __fastcall sub_2A2ADC(unsigned int a1, _DWORD *a2)
{
  int v2; // r3

  if ( a2[3] == 5 )
  {
    v2 = a2[9];
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 148) + 160) + 32) & 0x800000) != 0 )
        a2[7] = 1;
    }
  }
  return sub_2A1CF0(a1, (int)a2, 0);
}
