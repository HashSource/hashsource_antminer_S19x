int __fastcall sub_4FDB0(_DWORD *a1, int a2, int a3)
{
  a1[3] = a3;
  if ( a3 )
    a1[1] = a3 + a2;
  else
    a1[1] = a2;
  *a1 = 0;
  a1[2] = 0;
  return 1;
}
