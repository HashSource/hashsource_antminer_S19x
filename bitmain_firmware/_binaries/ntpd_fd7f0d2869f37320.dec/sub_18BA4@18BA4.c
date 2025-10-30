void (__fastcall *__fastcall sub_18BA4(
        void (__fastcall *result)(int, unsigned __int16 **),
        int a2))(int, unsigned __int16 **)
{
  if ( !disable_dynamic_updates )
  {
    result = (void (__fastcall *)(int, unsigned __int16 **))sub_17C04(result, a2);
    if ( result )
      return (void (__fastcall *)(int, unsigned __int16 **))sub_6F3F8();
  }
  return result;
}
