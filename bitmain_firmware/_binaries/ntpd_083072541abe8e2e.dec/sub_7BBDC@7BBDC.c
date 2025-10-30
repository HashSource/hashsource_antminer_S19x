int __fastcall sub_7BBDC(char *a1, int a2, size_t size)
{
  size_t v6; // r5
  int result; // r0
  int v8; // r0

  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 433, 0, "dirname != ((void *)0)");
  if ( !size )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 434, 0, "length > 0U");
  if ( getcwd((char *)a2, size) )
  {
    v6 = strlen((const char *)a2);
    if ( size == v6 + 1 )
      return 19;
    if ( !*(_BYTE *)(a2 + 1) )
    {
LABEL_6:
      if ( strlen(a1) + v6 + 1 <= size )
      {
        sub_6D58C((unsigned __int8 *)a2, a1, size);
        return 0;
      }
      return 19;
    }
    sub_6D58C((unsigned __int8 *)a2, "/", size);
LABEL_11:
    v6 = strlen((const char *)a2);
    goto LABEL_6;
  }
  v8 = *_errno_location();
  if ( v8 == 34 )
    return 19;
  result = sub_7A990(v8, "./../lib/isc/unix/file.c", 442);
  if ( !result )
    goto LABEL_11;
  return result;
}
