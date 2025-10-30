int __fastcall sub_2B5E44(int result)
{
  if ( result == 2 )
    return 67;
  if ( result == 3 )
    return 64;
  if ( result <= 65 )
  {
    result -= 2;
  }
  else if ( result <= 67 )
  {
    --result;
  }
  return result;
}
