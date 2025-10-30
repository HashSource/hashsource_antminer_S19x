int __fastcall sub_2F104(int a1, int a2)
{
  if ( pthread_mutex_lock(&stru_766C4) )
    sub_2EFE0("inc_dev_status", 8783);
  dword_75580 = a1;
  dword_75584 = a2;
  if ( pthread_mutex_unlock(&stru_766C4) )
    sub_2F03C("inc_dev_status", 8786);
  return off_67ED8();
}
