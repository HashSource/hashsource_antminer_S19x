int __fastcall sub_6E2CC(int result)
{
  if ( dword_10722C )
  {
    if ( result )
      return sub_6E078((sem_t *)dword_10722C, 0);
    else
      return sem_post((sem_t *)dword_10722C);
  }
  return result;
}
