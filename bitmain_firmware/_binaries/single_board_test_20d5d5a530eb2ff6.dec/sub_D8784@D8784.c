int __fastcall sub_D8784(_DWORD *a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(*a1 + 16);
  if ( (v2 & 0x80) != 0 )
    return sub_D83D4((int)a1);
  if ( a2 == a1[22] )
    return 1;
  if ( a2 > 0 && (v2 & 8) != 0 )
  {
    a1[22] = a2;
    return 1;
  }
  else
  {
    sub_D0048(6, 122, 130, (int)"crypto/evp/evp_enc.c", 640);
    return 0;
  }
}
