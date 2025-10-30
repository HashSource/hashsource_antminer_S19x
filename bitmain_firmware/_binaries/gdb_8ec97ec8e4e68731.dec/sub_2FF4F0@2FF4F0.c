char *__fastcall sub_2FF4F0(int a1, const char *a2, int a3)
{
  char *result; // r0

  result = sub_2FC920(*(_DWORD **)(a1 + 28), a2, 0, 0, 1);
  if ( result )
  {
    if ( (unsigned int)(unsigned __int8)result[12] - 1 <= 1 )
    {
      *((_DWORD *)result + 5) = a3;
      result[12] = 3;
      *((_DWORD *)result + 6) = 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
