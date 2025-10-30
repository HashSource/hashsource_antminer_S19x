_DWORD *__fastcall sub_7945C(_DWORD *result)
{
  if ( !result )
    sub_6FC54((int)"./../lib/isc/sha1.c", 270, 2, "context != ((void *)0)");
  result[3] = 271733878;
  *result = 1732584193;
  result[1] = -271733879;
  result[2] = -1732584194;
  result[4] = -1009589776;
  result[5] = 0;
  result[6] = 0;
  return result;
}
