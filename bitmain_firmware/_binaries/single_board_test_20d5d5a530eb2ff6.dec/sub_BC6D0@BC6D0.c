int __fastcall sub_BC6D0(_DWORD *a1, const void *a2, size_t a3)
{
  int v6; // r4
  int v7; // r5
  bool v8; // cc
  int v9; // r1

  v6 = 0;
  do
  {
    v8 = v6 < sub_10C010(*a1, a2, a3);
    v9 = v6++;
    if ( !v8 )
      return 0;
    v7 = sub_10C01C(*a1, v9);
  }
  while ( memcmp((const void *)(v7 + 4), a2, a3) );
  return v7;
}
