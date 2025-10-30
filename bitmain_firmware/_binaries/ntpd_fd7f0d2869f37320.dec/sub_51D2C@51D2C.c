void *__fastcall sub_51D2C(int a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r1
  const char *v7; // r2

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
  {
    sub_39C88(a2, 1);
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 232);
    v6 = *(_DWORD *)(v3 + 236);
    ++*(_DWORD *)(v3 + 776);
    *(_DWORD *)(v3 + 224) = v5;
    *(_DWORD *)(v3 + 228) = v6;
    sub_3A534(a2);
  }
  if ( (*(_DWORD *)(a2 + 76) & 0x10000) != 0 )
  {
    if ( *(_BYTE *)(v3 + 56) )
      v7 = (const char *)(v3 + 56);
    else
      v7 = "(none)";
    sub_42E1C(a2 + 16, (int)"%s  %u %u %u %u %u %u", v7, v4[4], v4[5], v4[6], v4[7], v4[8], v4[9]);
  }
  else
  {
    sub_42D0C(a2 + 16, (const char *)(v3 + 56));
  }
  return memset(v4 + 4, 0, 0x18u);
}
