int sub_1C4718()
{
  int result; // r0

  result = dword_487C9C;
  if ( dword_487C9C )
  {
    --dword_487C9C;
    return *(_DWORD *)(dword_487C98 + 4 * dword_487C9C);
  }
  return result;
}
