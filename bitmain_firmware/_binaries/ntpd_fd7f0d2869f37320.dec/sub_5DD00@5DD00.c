int __fastcall sub_5DD00(int a1, int a2)
{
  int v3; // r4
  char v5; // r2

  v3 = *(_DWORD *)(a2 + 84);
  if ( write(*(_DWORD *)(v3 + 28), "\r*toc\r", 6u) == 6 )
  {
    v5 = *(_BYTE *)(v3 + 768);
    ++*(_DWORD *)(v3 + 776);
    if ( (v5 & 2) == 0 )
      sub_6055C(v3 + 232);
  }
  else
  {
    sub_39C88(a2, 3);
  }
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_39C88(a2, 1);
  else
    return sub_3A534(a2);
}
