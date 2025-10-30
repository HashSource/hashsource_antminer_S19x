int __fastcall sub_44748(int a1, int a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a2 + 84);
  if ( write(*(_DWORD *)(v3 + 28), &unk_B7DD4, 0x1Au) == 26 )
    ++*(_DWORD *)(v3 + 776);
  else
    sub_39C88(a2, 3);
  return sub_42D0C(a2 + 16, (const char *)(v3 + 56));
}
