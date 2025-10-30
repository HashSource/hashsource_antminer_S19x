int __fastcall sub_22998(int a1)
{
  ssize_t v3; // [sp+Ch] [bp-8h]

  sub_1F44C((pthread_mutex_t *)(a1 + 704), "util.c", "clear_sock", 1788);
  do
  {
    if ( *(_DWORD *)(a1 + 588) )
      v3 = recv(*(_DWORD *)(a1 + 588), *(void **)(a1 + 592), 0x1FFCu, 0);
    else
      v3 = 0;
  }
  while ( v3 > 0 );
  sub_1F584((pthread_mutex_t *)(a1 + 704), "util.c", "clear_sock", 1797);
  return sub_22958(a1);
}
