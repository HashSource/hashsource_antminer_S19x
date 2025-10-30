void __fastcall sub_2FC4E4(int a1)
{
  void *v2; // r5
  char v3; // r3

  if ( (*(_BYTE *)(a1 + 44) & 4) == 0 || (v2 = *(void **)(a1 + 156)) == 0 )
  {
    sub_2A6BBC("linker.c", 771);
    v2 = *(void **)(a1 + 156);
  }
  sub_2AAA1C((int)v2);
  free(v2);
  v3 = *(_BYTE *)(a1 + 44);
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 44) = v3 & 0xFB;
}
