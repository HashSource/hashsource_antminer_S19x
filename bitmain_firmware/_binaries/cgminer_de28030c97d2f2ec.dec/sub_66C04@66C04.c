int __fastcall sub_66C04(_DWORD *a1, unsigned int a2, int a3)
{
  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a3 && a1[3] > a2 )
  {
    sub_65DB8(*(_DWORD *)(a1[4] + 4 * a2));
    *(_DWORD *)(a1[4] + 4 * a2) = a3;
    return 0;
  }
  else
  {
    sub_65DB8(a3);
    return -1;
  }
}
