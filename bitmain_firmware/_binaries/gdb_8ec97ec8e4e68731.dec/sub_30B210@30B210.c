int __fastcall sub_30B210(int result)
{
  int v1; // r3
  _WORD *v2; // r3
  _WORD *v3; // r3

  *(_DWORD *)(result + 2840) = result + 148;
  *(_DWORD *)(result + 2848) = &off_4683A8;
  v1 = result;
  *(_DWORD *)(result + 2860) = &off_4683BC;
  *(_DWORD *)(result + 2872) = &unk_4683D0;
  *(_DWORD *)(result + 2852) = result + 2440;
  *(_DWORD *)(result + 2864) = result + 2684;
  *(_DWORD *)(result + 5820) = 0;
  *(_WORD *)(result + 5816) = 0;
  do
  {
    *(_WORD *)(v1 + 148) = 0;
    v1 += 4;
  }
  while ( v1 != result + 1144 );
  v2 = (_WORD *)(result + 2440);
  do
  {
    *v2 = 0;
    v2 += 2;
  }
  while ( v2 != (_WORD *)(result + 2560) );
  v3 = (_WORD *)(result + 2684);
  do
  {
    *v3 = 0;
    v3 += 2;
  }
  while ( (_WORD *)(result + 2760) != v3 );
  *(_WORD *)(result + 1172) = 1;
  *(_DWORD *)(result + 5804) = 0;
  *(_DWORD *)(result + 5800) = 0;
  *(_DWORD *)(result + 5808) = 0;
  *(_DWORD *)(result + 5792) = 0;
  return result;
}
