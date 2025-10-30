int __fastcall sub_17369C(_DWORD *a1)
{
  int result; // r0
  int v2; // r3

  result = sub_171258(a1);
  if ( result )
  {
    v2 = *(_DWORD *)(result + 24);
    return *(_BYTE *)v2 == 1 && **(char **)(*(_DWORD *)(v2 + 20) + 24) != 10;
  }
  return result;
}
