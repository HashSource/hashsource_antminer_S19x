int __fastcall sub_172254(_DWORD *a1)
{
  int v2; // r3
  int result; // r0
  int v4; // r3
  const char *v5; // r4
  int v6; // r0
  const char *v7; // r2

  v2 = *(_DWORD *)(sub_171258(a1) + 24);
  result = *(_DWORD *)(v2 + 12);
  if ( !result )
  {
    result = *(_DWORD *)(v2 + 8);
    if ( !result )
    {
      v4 = a1[6];
      v5 = *(const char **)(v4 + 12);
      if ( v5 )
      {
        if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
        {
          v6 = *(_DWORD *)(v4 + 16);
          goto LABEL_6;
        }
      }
      else
      {
        v5 = *(const char **)(v4 + 8);
        if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
        {
          v6 = *(_DWORD *)(v4 + 16);
          if ( !v5 )
            v5 = "<anonymous>";
LABEL_6:
          if ( v6 )
          {
            v7 = (const char *)sub_1B87A8(v6);
            goto LABEL_8;
          }
          goto LABEL_9;
        }
        if ( !v5 )
        {
          v5 = "<anonymous>";
          v7 = "<arch>";
LABEL_8:
          sub_946E0("Invalid anonymous type %s [in module %s], GCC PR debug/47510 bug?", v5, v7);
        }
      }
LABEL_9:
      v7 = "<arch>";
      goto LABEL_8;
    }
  }
  return result;
}
