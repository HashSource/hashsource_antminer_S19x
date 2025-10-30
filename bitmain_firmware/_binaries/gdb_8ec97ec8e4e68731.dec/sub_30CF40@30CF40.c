char *__fastcall sub_30CF40(int a1)
{
  char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "";
      break;
    case 1:
      result = "const";
      break;
    case 2:
      result = "volatile";
      break;
    case 3:
      result = "const volatile";
      break;
    case 4:
      result = "__restrict";
      break;
    case 5:
      result = "const __restrict";
      break;
    case 6:
      result = "volatile __restrict";
      break;
    case 7:
      result = "const volatile __restrict";
      break;
    default:
      abort();
      return result;
  }
  return result;
}
