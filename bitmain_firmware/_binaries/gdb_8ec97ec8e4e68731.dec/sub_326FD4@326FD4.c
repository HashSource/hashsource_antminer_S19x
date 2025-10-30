int __fastcall sub_326FD4(_DWORD **a1, int a2)
{
  int result; // r0

  if ( !*a1 )
    return 0;
  sub_326A24((int)a1, a2);
  if ( ((int (__fastcall *)(_DWORD, int))a1[1])(**a1, a2) < 0 )
    return (int)*a1;
  result = (*a1)[2];
  if ( !result )
    return 0;
  while ( *(_DWORD *)(result + 12) )
    result = *(_DWORD *)(result + 12);
  return result;
}
