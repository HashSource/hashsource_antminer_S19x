char *__fastcall sub_17AAC0(int a1)
{
  char *result; // r0

  switch ( sub_BD3B4(a1) )
  {
    case 0:
      result = "not set";
      break;
    case 1:
      result = "unknown log";
      break;
    case 2:
      result = "valid";
      break;
    case 3:
      result = "invalid";
      break;
    case 4:
      result = "unverified";
      break;
    case 5:
      result = "unknown version";
      break;
    default:
      result = "unknown status";
      break;
  }
  return result;
}
