int __fastcall sub_1586C4(_DWORD *a1, _DWORD *a2)
{
  int v5; // r3

  if ( !sub_B89E4(a1[2], a2[2]) || !sub_B89E4(a1[3], a2[3]) || !sub_B89E4(a1[4], a2[4]) )
    return 0;
  v5 = a2[1];
  a1[5] = a2[5];
  a1[1] = v5;
  return 1;
}
