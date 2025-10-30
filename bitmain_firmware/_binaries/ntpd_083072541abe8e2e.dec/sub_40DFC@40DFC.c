int __fastcall sub_40DFC(int result)
{
  if ( result )
  {
    result += current_time;
    dword_BCBD8 = result;
  }
  else
  {
    dword_BCBD8 = 0;
  }
  return result;
}
