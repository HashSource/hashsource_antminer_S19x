int __fastcall sub_2A8224(int a1, int a2, int a3, int a4)
{
  int v4; // r12
  int v6; // r2
  int v7; // r0
  int v8; // [sp+4h] [bp-8h]

  if ( (*(_DWORD *)(a1 + 40) & 0x100000) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(v4 + 4) == 5 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)(v6 + 4) == 5
        && *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v4 + 444) + 392) + 12) != *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v6 + 444) + 392) + 12) )
      {
        v8 = a4;
        v7 = sub_2A81C4(a1, a2);
        a4 = v8;
        if ( v7 )
        {
          if ( v7 == 12 )
            return v8 + 12;
          else
            return v8 - 12;
        }
      }
    }
  }
  return a4;
}
