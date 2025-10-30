int __fastcall sub_19E9C(int a1)
{
  int result; // r0
  __int64 v2; // r0

  switch ( a1 )
  {
    case 1:
      result = 115;
      break;
    case 2:
    case 3:
      result = 100;
      break;
    case 4:
      result = 113;
      break;
    default:
      v2 = sub_94700("arm-tdep.c", 3462, "Invalid VFP CPRC type: %d.", a1);
      result = sub_19EF4(v2, HIDWORD(v2));
      break;
  }
  return result;
}
