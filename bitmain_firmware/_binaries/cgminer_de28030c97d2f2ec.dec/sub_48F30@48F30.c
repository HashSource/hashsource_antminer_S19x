int __fastcall sub_48F30(int a1)
{
  int result; // r0

  for ( result = sub_3F494(a1); (unsigned __int8)result != 1; result = sub_3F494(a1) )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      result = sub_2F984();
      if ( result == a1 || dword_87E6C == 3 || dword_87E6C == 4 )
        break;
    }
    sub_2E354(&stru_88020, "cgminer.c", "wait_lpcurrent", 10002);
    pthread_cond_wait(&stru_88038, &stru_88020);
    sub_2E484(&stru_88020, "cgminer.c", "wait_lpcurrent", 10004);
  }
  return result;
}
