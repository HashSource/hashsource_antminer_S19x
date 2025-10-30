const char *__fastcall sub_6ED7C(int a1)
{
  const char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "REQUIRE";
      break;
    case 1:
      result = "ENSURE";
      break;
    case 2:
      result = "INSIST";
      break;
    case 3:
      result = "INVARIANT";
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
