int __fastcall sub_26EBC(int result)
{
  int v1; // r5

  if ( !((dword_5BF7DC <= result) | ((unsigned int)result >> 31)) )
  {
    v1 = result;
    if ( dword_5BF838 )
      return dword_5BF840 + 528 * v1;
    result = sub_252C0(&dword_5BF7D8);
    if ( result >= 0 )
      return dword_5BF840 + 528 * v1;
  }
  return result;
}
