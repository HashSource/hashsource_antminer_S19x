int __fastcall sub_9B4D4(int a1, int a2, int a3)
{
  int v6; // [sp+4h] [bp-8h] BYREF

  if ( a3 != 257 && !sub_A7EDC(a2) || !sub_A821C(a2, &v6) || v6 < 0 )
    return 0;
  *(_DWORD *)(a1 + 116) = v6;
  *(_DWORD *)(a1 + 120) = 0;
  return 1;
}
