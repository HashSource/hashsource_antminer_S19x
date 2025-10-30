int __fastcall sub_B870C(int a1)
{
  if ( *(int *)(a1 + 4) <= 0 )
    return 0;
  else
    return **(_DWORD **)a1 & 1;
}
