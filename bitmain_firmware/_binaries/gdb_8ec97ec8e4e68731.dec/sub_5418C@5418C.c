int __fastcall sub_5418C(unsigned __int8 *a1)
{
  int result; // r0
  const char *v2; // r1
  int v3; // [sp+4h] [bp-10h] BYREF
  int v4; // [sp+8h] [bp-Ch] BYREF
  int v5; // [sp+Ch] [bp-8h] BYREF

  v5 = 0;
  v3 = 0;
  v4 = 0;
  result = sub_54048(a1, &v3, &v4, &v5);
  if ( result && (v3 && (*(_BYTE *)(v3 + 12) & 2) != 0 || (*(_BYTE *)(v5 + 12) & 2) != 0) )
  {
    sub_259F10("Warning:");
    if ( v3 && (*(_BYTE *)(v5 + 12) & 1) == 0 )
      sub_259F10(" '%s', an alias for the", *(const char **)(v3 + 4));
    sub_259F10(" command '");
    if ( v4 )
      sub_259F10("%s", *(const char **)(v4 + 56));
    sub_259F10("%s", *(const char **)(v5 + 4));
    if ( v3 && (*(_BYTE *)(v5 + 12) & 1) != 0 )
      sub_259F10("' (%s) is deprecated.\n", *(const char **)(v3 + 4));
    else
      sub_259F10("' is deprecated.\n");
    if ( !v3 || (*(_BYTE *)(v5 + 12) & 1) != 0 )
    {
      v2 = *(const char **)(v5 + 36);
      if ( v2 )
        goto LABEL_15;
    }
    else
    {
      v2 = *(const char **)(v3 + 36);
      if ( v2 )
      {
LABEL_15:
        result = sub_259F10("Use '%s'.\n\n", v2);
LABEL_16:
        if ( v3 )
          *(_BYTE *)(v3 + 12) &= ~2u;
        *(_BYTE *)(v5 + 12) &= ~2u;
        return result;
      }
    }
    result = sub_259F10("No alternative known.\n\n");
    goto LABEL_16;
  }
  return result;
}
