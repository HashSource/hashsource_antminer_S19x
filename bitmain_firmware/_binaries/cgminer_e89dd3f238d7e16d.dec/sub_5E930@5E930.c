int __fastcall sub_5E930(const void *a1, size_t a2, int *a3)
{
  if ( write(*a3, a1, a2) == a2 )
    return 0;
  else
    return -1;
}
