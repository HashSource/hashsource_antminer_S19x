char *__fastcall sub_10EA4C(int a1, int a2)
{
  char *result; // r0
  int v5; // r3
  const char *v6; // r5

  result = (char *)sub_21DDAC(*(_DWORD *)(a1 + 40));
  if ( result )
  {
    result = (char *)sub_220480(*((_DWORD *)result + 6));
    if ( result )
    {
      v5 = *(unsigned __int8 *)(*(_DWORD *)a2 + 66);
      if ( v5 == 1 )
      {
        *(_BYTE *)(a1 + 112) = 1;
        *(_BYTE *)(a1 + 113) = 1;
      }
      else if ( v5 == 3 )
      {
        v6 = *(const char **)(*(_DWORD *)a2 + 48);
        result = (char *)strncmp(v6, "armcc", 5u);
        if ( result || (result = strchr(v6 + 5, 43)) == 0 )
          *(_BYTE *)(a1 + 113) = 1;
      }
    }
  }
  return result;
}
