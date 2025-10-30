int __fastcall sub_3E2D0(unsigned int *a1, const char *a2, struct sockaddr *a3, int a4, int a5)
{
  unsigned int v9; // r10
  char v10; // r3
  int v11; // r12

  if ( (__rev16(*(unsigned __int16 *)(a5 + 4)) & 0xFFF) > 1 )
  {
    sub_64E00(3, "set_keyid_checked[%s]: err_nitems > 1", a2);
    v10 = *(_BYTE *)(a5 + 3);
    v11 = 3;
  }
  else
  {
    v9 = bswap32(*(_DWORD *)(a5 + 8));
    if ( v9 - 1 <= 0xFFFE && sub_61FD4(v9) )
    {
      *a1 = v9;
      v10 = *(_BYTE *)(a5 + 3);
      v11 = 0;
    }
    else
    {
      sub_64E00(3, "set_keyid_checked[%s]: invalid key id: %ld", a2, v9);
      v10 = *(_BYTE *)(a5 + 3);
      v11 = 4;
    }
  }
  return sub_3AD58(a3, a4, *(_BYTE *)(a5 + 2), v10, v11);
}
