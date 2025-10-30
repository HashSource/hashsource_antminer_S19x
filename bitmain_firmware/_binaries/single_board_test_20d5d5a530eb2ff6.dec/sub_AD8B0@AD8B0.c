int __fastcall sub_AD8B0(int a1, _DWORD *a2)
{
  int v2; // r3

  if ( a2 && *a2 == 16 && (v2 = a2[1]) != 0 )
    return sub_AE368(v2, a1);
  else
    return 0;
}
