int __fastcall sub_3313E4(int a1, int a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = HIDWORD(v2) | a2;
  if ( (a2 & (unsigned int)v2) != 0 )
    raise(8);
  return a1;
}
