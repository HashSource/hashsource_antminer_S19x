char *__fastcall sub_278D54(int a1)
{
  char *result; // r0
  __int64 v2; // r0

  switch ( a1 )
  {
    case 1:
      result = "QI";
      break;
    case 2:
      result = "HI";
      break;
    case 4:
      result = "SI";
      break;
    case 8:
      result = "DI";
      break;
    default:
      v2 = sub_94700((int)"compile/compile-c-support.c", 53, "Invalid GCC mode size %d.", a1);
      result = (char *)sub_278DD4(v2, HIDWORD(v2));
      break;
  }
  return result;
}
