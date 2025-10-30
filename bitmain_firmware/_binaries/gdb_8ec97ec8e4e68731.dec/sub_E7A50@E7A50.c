const char *__fastcall sub_E7A50(int a1, int a2)
{
  const char *result; // r0
  __int64 v3; // r0

  switch ( a1 & 0xFFFFFFFB )
  {
    case 0u:
      result = (const char *)sub_EEBE8(a2);
      break;
    case 1u:
      result = (const char *)sub_EED48(a2);
      break;
    case 2u:
      if ( ((int (__fastcall *)(int))loc_165BB8)(a2) )
        result = "UTF-16LE";
      else
        result = "UTF-16BE";
      break;
    case 3u:
      if ( ((int (__fastcall *)(int))loc_165BB8)(a2) )
        result = "UTF-32LE";
      else
        result = "UTF-32BE";
      break;
    default:
      v3 = sub_94700((int)"c-lang.c", 63, "unhandled c_string_type");
      result = (const char *)sub_E7AF4(v3, HIDWORD(v3));
      break;
  }
  return result;
}
