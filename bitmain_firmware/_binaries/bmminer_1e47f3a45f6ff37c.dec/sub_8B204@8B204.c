void __fastcall sub_8B204(int a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      sub_8354C(*(_DWORD **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 8) )
      sub_823F4(*(void ***)(a1 + 8));
    if ( *(_DWORD *)(a1 + 12) )
      sub_8D6D0(*(_DWORD *)(a1 + 12));
    if ( *(_DWORD *)(a1 + 16) )
      sub_8D6D0(*(_DWORD *)(a1 + 16));
    if ( *(_DWORD *)(a1 + 20) )
      sub_8D6D0(*(_DWORD *)(a1 + 20));
    if ( *(_DWORD *)(a1 + 24) )
      sub_8D6D0(*(_DWORD *)(a1 + 24));
    if ( *(_DWORD *)(a1 + 28) )
      sub_8D6D0(*(_DWORD *)(a1 + 28));
    sub_8CD10(0, "src/thread.c", 59, "zlog_thread_del[%p]", (const void *)a1);
    free((void *)a1);
  }
  else
  {
    sub_8CD10(2, "src/thread.c", 43, "a_thread is null or 0");
  }
}
