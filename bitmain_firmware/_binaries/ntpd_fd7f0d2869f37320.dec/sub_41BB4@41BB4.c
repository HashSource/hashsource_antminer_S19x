int __fastcall sub_41BB4(int result)
{
  if ( result )
  {
    result += current_time;
    dword_BDBEC = result;
  }
  else
  {
    dword_BDBEC = 0;
  }
  return result;
}
