int __fastcall sub_26DED4(int a1)
{
  int (__fastcall *v2)(int); // r3

  if ( (**(_BYTE **)(sub_171258(*(_DWORD **)(a1 + 64)) + 24) == 18
     || **(_BYTE **)(sub_171258(*(_DWORD **)(a1 + 64)) + 24) == 19)
    && *(_DWORD *)a1 == 6
    && (v2 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 8) + 12)) != 0 )
  {
    return v2(a1);
  }
  else
  {
    return 0;
  }
}
