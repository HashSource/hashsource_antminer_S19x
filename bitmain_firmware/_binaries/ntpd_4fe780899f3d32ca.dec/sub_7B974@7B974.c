int __fastcall sub_7B974(_BYTE *a1)
{
  bool v1; // zf
  int result; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 377, 0, "filename != ((void *)0)");
  v1 = *a1 == 46;
  if ( *a1 == 46 )
    result = (unsigned __int8)a1[1];
  else
    result = 0;
  if ( v1 )
    return result == 0;
  return result;
}
