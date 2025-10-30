int __fastcall sub_55098(const char *a1, _BYTE *a2)
{
  if ( !strcasecmp(a1, "yes") || !strcasecmp(a1, "true") )
    return sub_55008(a2);
  if ( !strcasecmp(a1, "no") || !strcasecmp(a1, "false") )
    return sub_55068(a2);
  return sub_56348(a1);
}
