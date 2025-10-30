int __fastcall sub_16B364(void *a1)
{
  int v2; // r3

  if ( *(_DWORD *)a1 == 2 )
    sub_E9DCC((DIR ***)a1 + 3);
  else
    sub_B717C(*((_DWORD *)a1 + 3));
  if ( *(_DWORD *)a1 == 2 )
  {
    CRYPTO_free(*((void **)a1 + 5));
  }
  else
  {
    v2 = *((_DWORD *)a1 + 4);
    if ( v2 )
    {
      (*(void (__fastcall **)(int))(v2 + 12))((int)a1 + 20);
      *((_DWORD *)a1 + 5) = 0;
      *((_DWORD *)a1 + 4) = 0;
    }
  }
  CRYPTO_free(a1);
  return 1;
}
