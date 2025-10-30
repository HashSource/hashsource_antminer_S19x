int __fastcall sub_6F21C(int result)
{
  if ( dword_108250 )
  {
    if ( result )
      return sub_6F028((sem_t *)dword_108250, 0);
    else
      return sem_post((sem_t *)dword_108250);
  }
  return result;
}
