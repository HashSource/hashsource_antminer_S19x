int __fastcall sub_67118(_DWORD *a1, unsigned int a2)
{
  if ( !a1 || *a1 != 1 )
    return -1;
  if ( a1[3] <= a2 )
    return -1;
  sub_65DB8(*(_DWORD *)(a1[4] + 4 * a2));
  if ( a1[3] - 1 > a2 )
    sub_66CE4((int)a1, a2, a2 + 1, a1[3] - a2 - 1);
  --a1[3];
  return 0;
}
