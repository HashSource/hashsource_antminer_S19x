int __fastcall sub_458B8(_DWORD *a1, char *a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r3

  result = sub_45590(a1, a2, 0);
  if ( result != -1 )
  {
    v4 = a1[5 * result + 3];
    if ( *a1 + v4 )
    {
      v5 = *(unsigned __int8 *)(*a1 + v4);
      if ( v5 == 102 )
      {
        return 0;
      }
      else if ( v5 == 116 )
      {
        return 1;
      }
      else
      {
        return -1;
      }
    }
    else
    {
      return -1;
    }
  }
  return result;
}
