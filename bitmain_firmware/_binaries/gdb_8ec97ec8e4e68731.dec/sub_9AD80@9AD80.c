int __fastcall sub_9AD80(int result, int *a2)
{
  int v2; // r4

  v2 = *a2;
  if ( *a2 > 1 )
  {
    result += v2;
    if ( *(_BYTE *)(result - 1) == 78 )
    {
      result = *(unsigned __int8 *)(result - 2);
      if ( (unsigned int)(result - 48) <= 9 || (result = islower(result)) != 0 )
        *a2 = v2 - 1;
    }
  }
  return result;
}
