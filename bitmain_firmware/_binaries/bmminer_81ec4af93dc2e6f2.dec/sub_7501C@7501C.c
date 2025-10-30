char *__fastcall sub_7501C(char *result, const char *a2)
{
  char *v3; // [sp+4h] [bp-10h]
  size_t v4; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( result && a2 )
  {
    v4 = strlen(a2);
    if ( v4 > 0x4F )
    {
      memcpy(v3 + 12, "...", 3u);
      return strncpy(v3 + 15, &a2[v4 - 76], 0x4Du);
    }
    else
    {
      return strncpy(v3 + 12, a2, v4 + 1);
    }
  }
  return result;
}
