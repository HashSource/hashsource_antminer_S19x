int __fastcall sub_6EA5C(int a1, int a2)
{
  int v2; // r4

  if ( a1 > 2 )
  {
    v2 = -3;
    nullsub_8();
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      sub_6E060(19, (_DWORD *)a2);
      *(_DWORD *)a2 = *(unsigned __int16 *)(a2 + 2);
    }
    else
    {
      return -5;
    }
  }
  return v2;
}
