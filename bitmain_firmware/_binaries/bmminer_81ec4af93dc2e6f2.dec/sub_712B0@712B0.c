int __fastcall sub_712B0(_DWORD *a1)
{
  if ( a1[2] >= a1[1] )
    return -1;
  return *(unsigned __int8 *)(*a1 + a1[2]++);
}
