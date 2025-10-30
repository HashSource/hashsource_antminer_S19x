const char *__fastcall sub_8A720(int a1)
{
  if ( a1 == 770 )
    return "TLSv1.1";
  if ( a1 <= 770 )
  {
    if ( a1 == 768 )
      return "SSLv3";
    if ( a1 > 768 )
      return "TLSv1";
    if ( a1 == 256 )
      return "DTLSv0.9";
    return "unknown";
  }
  if ( a1 != 772 )
  {
    if ( a1 < 772 )
      return "TLSv1.2";
    if ( a1 == 65277 )
      return "DTLSv1.2";
    if ( a1 == 65279 )
      return "DTLSv1";
    return "unknown";
  }
  return "TLSv1.3";
}
