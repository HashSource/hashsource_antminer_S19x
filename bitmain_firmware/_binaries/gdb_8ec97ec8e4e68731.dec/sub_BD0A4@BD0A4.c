int __fastcall sub_BD0A4(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( sub_194300(*(_DWORD *)(a3 + 4)) || sub_194300(*(_DWORD *)(a4 + 4)) )
  {
    result = sub_C09B8(a1, 19);
    *a2 = 0;
    a2[1] = a5;
  }
  else
  {
    result = sub_BCFE8(a1, a2, a2 + 1, a3 + 4, a4 + 4, 19, 19, 0, "equal");
    *a2 = 0;
    a2[1] = a5;
  }
  return result;
}
