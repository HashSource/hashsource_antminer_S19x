int __fastcall sub_110328(int *a1, int a2)
{
  if ( !a1 )
    return 0;
  if ( (a2 >= sub_10C010((int)a1)) | ((unsigned int)a2 >> 31) )
    return 0;
  return sub_10BC04(a1, a2);
}
