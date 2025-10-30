int __fastcall sub_19EF4(int a1)
{
  int result; // r0
  __int64 v2; // r0

  switch ( a1 )
  {
    case 1:
      result = 4;
      break;
    case 2:
    case 3:
      result = 8;
      break;
    case 4:
      result = 16;
      break;
    default:
      v2 = sub_94700("arm-tdep.c", 3440, "Invalid VFP CPRC type: %d.", a1);
      result = ((int (__fastcall *)(_DWORD, int))loc_15EBBC)(HIDWORD(v2), 13);
      break;
  }
  return result;
}
