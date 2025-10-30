int __fastcall sub_16DD08(int a1)
{
  if ( dword_6E1D44 != stdin )
    fclose((FILE *)dword_6E1D44);
  if ( dword_6E1D48 != stderr )
    fclose((FILE *)dword_6E1D48);
  sub_10C564(*(pthread_rwlock_t **)(a1 + 20));
  return 1;
}
