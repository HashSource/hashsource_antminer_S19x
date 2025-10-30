int __fastcall sub_54400(const char *a1, _BYTE *a2)
{
  if ( !strcasecmp(a1, "yes") || !strcasecmp(a1, "true") )
    return sub_54370(a2);
  if ( !strcasecmp(a1, "no") || !strcasecmp(a1, "false") )
    return sub_543D0(a2);
  return sub_55738(a1);
}
