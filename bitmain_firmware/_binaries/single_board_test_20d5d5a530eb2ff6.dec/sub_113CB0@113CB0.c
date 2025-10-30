int __fastcall sub_113CB0(int *a1, unsigned int a2)
{
  if ( !a1 )
    return 0;
  if ( ((int)a2 >= sub_10C010(*a1)) | (a2 >> 31) )
    return 0;
  return sub_10C01C((_DWORD *)*a1, a2);
}
