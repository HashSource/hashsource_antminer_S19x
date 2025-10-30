int __fastcall sub_481A0(int a1)
{
  int result; // r0

  for ( result = sub_3E610(a1); (unsigned __int8)result != 1; result = sub_3E610(a1) )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      result = sub_2E98C();
      if ( a1 == result || dword_86CD4 == 3 || dword_86CD4 == 4 )
        break;
    }
    sub_2D2FC(&stru_86E88, "cgminer.c", "wait_lpcurrent", 10002);
    pthread_cond_wait(&stru_86EA0, &stru_86E88);
    sub_2D434(&stru_86E88, "cgminer.c", "wait_lpcurrent", 10004);
  }
  return result;
}
