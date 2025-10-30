int __fastcall sub_2BA010(int a1, int a2, int a3)
{
  const char *v4; // r6
  int result; // r0
  int v7; // r3

  v4 = *(const char **)a3;
  if ( !strncmp(*(const char **)a3, ".ARM.exidx", 0xAu) || !strncmp(v4, ".gnu.linkonce.armexidx.", 0x17u) )
  {
    v7 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 4) = 1879048193;
    *(_DWORD *)(a2 + 8) = v7 | 0x80;
  }
  result = 1;
  if ( *(int *)(a3 + 20) < 0 )
    *(_DWORD *)(a2 + 8) |= 0x20000000u;
  return result;
}
