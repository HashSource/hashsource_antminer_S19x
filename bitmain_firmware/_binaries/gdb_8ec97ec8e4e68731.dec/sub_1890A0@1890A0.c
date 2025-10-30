int __fastcall sub_1890A0(int result)
{
  if ( (unsigned int)(result - 1) > 0xE )
    sub_946E0("Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.");
  return result;
}
