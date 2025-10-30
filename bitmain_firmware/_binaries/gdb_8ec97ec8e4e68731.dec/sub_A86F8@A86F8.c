int __fastcall sub_A86F8(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r3
  int v7; // r8
  int v8; // r0
  int v10; // r0
  int v11; // r4

  v5 = a1;
  if ( sub_A0CFC(a1) )
    v5 = sub_A8280(v5);
  if ( !v5 || !sub_A0A04(v5) )
    return -a3;
  v6 = *(_DWORD *)(v5 + 24);
  if ( *(_BYTE *)v6 == 1 )
  {
    v5 = *(_DWORD *)(v6 + 20);
    v6 = *(_DWORD *)(v5 + 24);
  }
  if ( (*(_BYTE *)(v6 + 2) & 8) != 0
    || (v7 = sub_A0E38(v5, (const char *)&dword_375E30), ((void (*)(void))loc_A0928)(), !v7) )
  {
    v10 = sub_171258(v5);
    if ( a2 > 1 )
    {
      v11 = 1;
      do
      {
        ++v11;
        v10 = sub_171258(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 20));
      }
      while ( a2 != v11 );
    }
    v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 12);
  }
  else
  {
    v8 = ((int (__fastcall *)(_DWORD, _DWORD))loc_A7D90)(
           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 24 * a2 - 12),
           0);
  }
  if ( a3 )
    return sub_9E7EC(v8);
  else
    return sub_9E8E8(v8);
}
