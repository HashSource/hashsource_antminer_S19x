void __fastcall sub_2CB3F4(int a1)
{
  _DWORD *i; // r4
  unsigned int v3; // r3
  int v4; // r5
  int v5; // r3
  void *v6; // r9

  for ( i = **(_DWORD ***)(*(_DWORD *)(a1 + 160) + 2348); i; i = (_DWORD *)*i )
  {
    while ( 1 )
    {
      if ( i[1] == 1 )
      {
        v3 = i[9];
        if ( v3 > 1 )
        {
          v4 = i[v3 + 9];
          if ( !*(_DWORD *)(v4 + 148) )
            break;
        }
      }
      i = (_DWORD *)*i;
      if ( !i )
        return;
    }
    v5 = *(_DWORD *)(v4 + 20);
    if ( (v5 & 0x100000) == 0 )
    {
      sub_2A6BBC("elf-nacl.c", 335);
      v5 = *(_DWORD *)(v4 + 20);
    }
    if ( (v5 & 0x10) == 0 )
      sub_2A6BBC("elf-nacl.c", 336);
    if ( !*(_DWORD *)(v4 + 36) )
      sub_2A6BBC("elf-nacl.c", 337);
    v6 = (void *)(*(int (**)(void))(*(_DWORD *)(a1 + 132) + 44))();
    if ( !v6
      || sub_2A8A04(a1, *(_QWORD *)(v4 + 80), 0)
      || sub_2A8884((int)v6, *(_DWORD *)(v4 + 36), a1) != *(_DWORD *)(v4 + 36) )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 24) = -1;
    }
    free(v6);
  }
}
