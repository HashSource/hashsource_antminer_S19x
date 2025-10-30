int __fastcall sub_10E124(_DWORD *a1, unsigned int a2)
{
  if ( !a1 )
    return 0;
  if ( ((int)a2 >= sub_10C010((int)a1)) | (a2 >> 31) )
    return 0;
  return sub_10C01C(a1, a2);
}
