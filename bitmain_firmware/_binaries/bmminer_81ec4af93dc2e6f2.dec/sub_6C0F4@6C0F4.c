int __fastcall sub_6C0F4(const void *a1, size_t a2, FILE *a3)
{
  if ( fwrite(a1, a2, 1u, a3) == 1 )
    return 0;
  else
    return -1;
}
