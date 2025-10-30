int __fastcall sub_30D3E4(int a1, char *s)
{
  __int64 v2; // r4
  int result; // r0

  LODWORD(v2) = a1;
  HIDWORD(v2) = strlen(s);
  sub_30D298(v2);
  memcpy(*(void **)(v2 + 4), s, HIDWORD(v2));
  result = *(_DWORD *)(v2 + 4) + HIDWORD(v2);
  *(_DWORD *)(v2 + 4) = result;
  return result;
}
