int __fastcall sub_1E19D4(const char *a1, int a2)
{
  int v3; // r5
  int v4; // r7
  int result; // r0
  int v7; // r6
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  if ( !a1 )
    sub_946E0("Argument required (integer, `fixed' or `limited').");
  result = strcmp(a1, "hard");
  if ( !result || (result = strcmp(a1, "fixed")) == 0 )
  {
    v7 = 1;
    if ( v3 <= 0 )
      v3 = 0x4000;
LABEL_5:
    if ( !v4 )
    {
      result = sub_25A3E4(
                 "The target may not be able to correctly handle a %s\nof %ld bytes. Change the packet size? ",
                 *(const char **)a2,
                 v3);
      if ( !result )
        sub_946E0("Packet size not changed.");
    }
    goto LABEL_6;
  }
  result = strcmp(a1, "soft");
  if ( result )
  {
    result = strcmp(a1, "limit");
    if ( result )
    {
      result = strtoul(a1, &endptr, 0);
      v3 = result;
      if ( endptr == a1 )
        sub_946E0("Invalid %s (bad syntax).", *(const char **)a2);
      if ( result <= 0 )
        v3 = 0x4000;
      v7 = v4;
      if ( !v4 )
        goto LABEL_6;
      v4 = *(_DWORD *)(a2 + 8);
      goto LABEL_5;
    }
  }
  if ( v3 > 0 )
  {
    v7 = 0;
LABEL_6:
    *(_DWORD *)(a2 + 4) = v3;
    *(_DWORD *)(a2 + 8) = v7;
    return result;
  }
  *(_DWORD *)(a2 + 4) = 0x4000;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
