int __fastcall sub_26254(int a1)
{
  int result; // r0

  result = sub_231D0(a1);
  *(_BYTE *)(a1 + 659) = 0;
  *(_BYTE *)(a1 + 657) = *(_BYTE *)(a1 + 659);
  if ( *(_DWORD *)(a1 + 588) )
  {
    if ( *(_BYTE *)(a1 + 592) && *(_DWORD *)(a1 + 596) )
    {
      SSL_shutdown(*(_DWORD *)(a1 + 596));
      X509_free(*(_DWORD *)(a1 + 604));
      SSL_CTX_free(*(_DWORD *)(a1 + 600));
      SSL_free(*(_DWORD *)(a1 + 596));
    }
    result = close(*(_DWORD *)(a1 + 588));
  }
  *(_DWORD *)(a1 + 588) = 0;
  return result;
}
