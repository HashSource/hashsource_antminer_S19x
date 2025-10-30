void __fastcall sub_25BEC(int a1, int a2, int a3)
{
  int v5; // r0
  unsigned int v6; // r6
  int v7; // r3

  v5 = sub_20B88(a2, 25);
  if ( sub_182E8((*(unsigned __int8 *)(a3 + 148) >> 2) & 0xF, v5) )
  {
    v6 = *(unsigned __int8 *)(a3 + 148);
    if ( (v6 & 1) != 0 )
    {
      v7 = *(_DWORD *)(a3 + 204) + *(_DWORD *)(a3 + 160);
      if ( *(_DWORD *)(a3 + 164) )
        v7 |= 1u;
      sub_25B70(a2, a3, 14, v7, v7, 0, 4);
    }
    sub_20CD4(a2, a3, *(_DWORD *)(a3 + 144), 0, (v6 >> 1) & 1);
  }
}
