void __fastcall sub_87E68(int a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      sub_80190(*(_DWORD **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 8) )
      sub_7F03C(*(void ***)(a1 + 8));
    if ( *(_DWORD *)(a1 + 12) )
      sub_8A33C(*(_DWORD *)(a1 + 12));
    if ( *(_DWORD *)(a1 + 16) )
      sub_8A33C(*(_DWORD *)(a1 + 16));
    if ( *(_DWORD *)(a1 + 20) )
      sub_8A33C(*(_DWORD *)(a1 + 20));
    if ( *(_DWORD *)(a1 + 24) )
      sub_8A33C(*(_DWORD *)(a1 + 24));
    if ( *(_DWORD *)(a1 + 28) )
      sub_8A33C(*(_DWORD *)(a1 + 28));
    sub_89984(0, "src/thread.c", 59, "zlog_thread_del[%p]", (const void *)a1);
    free((void *)a1);
  }
  else
  {
    sub_89984(2, "src/thread.c", 43, "a_thread is null or 0");
  }
}
