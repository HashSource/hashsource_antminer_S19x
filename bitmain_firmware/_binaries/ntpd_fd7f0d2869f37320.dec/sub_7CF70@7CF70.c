int __fastcall sub_7CF70(char *a1, int a2, size_t size)
{
  size_t v6; // r4
  int result; // r0
  int v8; // r0

  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 433, 0, "dirname != ((void *)0)");
  if ( !size )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 434, 0, "length > 0U");
  if ( getcwd((char *)a2, size) )
  {
    v6 = strlen((const char *)a2);
    if ( size != v6 + 1 )
    {
      if ( *(_BYTE *)(a2 + 1) )
      {
        sub_6E558((_BYTE *)a2, "/", size);
        v6 = strlen((const char *)a2);
      }
LABEL_7:
      if ( size >= v6 + strlen(a1) + 1 )
      {
        sub_6E558((_BYTE *)a2, a1, size);
        return 0;
      }
    }
    return 19;
  }
  v8 = *_errno_location();
  if ( v8 == 34 )
    return 19;
  result = sub_7BCF8(v8, "./../lib/isc/unix/file.c", 442);
  if ( !result )
  {
    v6 = strlen((const char *)a2);
    goto LABEL_7;
  }
  return result;
}
