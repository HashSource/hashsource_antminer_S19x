int __fastcall sub_15AA94(int result, size_t n, int *a3)
{
  const char *v3; // r5

  v3 = (const char *)result;
  if ( result )
  {
    if ( !strncmp((const char *)result, "ALL", n) )
    {
      *a3 = ~(~HIWORD(*a3) << 16);
      return 1;
    }
    else if ( !strncmp(v3, (const char *)&dword_1BC564, n) )
    {
      *a3 |= 1u;
      return 1;
    }
    else if ( !strncmp(v3, (const char *)&off_1B06D4, n) )
    {
      *a3 |= 2u;
      return 1;
    }
    else if ( !strncmp(v3, "DH", n) )
    {
      *a3 |= 4u;
      return 1;
    }
    else if ( !strncmp(v3, "EC", n) )
    {
      *a3 |= 0x800u;
      return 1;
    }
    else if ( !strncmp(v3, "RAND", n) )
    {
      *a3 |= 8u;
      return 1;
    }
    else if ( !strncmp(v3, "CIPHERS", n) )
    {
      *a3 |= 0x40u;
      return 1;
    }
    else if ( !strncmp(v3, "DIGESTS", n) )
    {
      *a3 |= 0x80u;
      return 1;
    }
    else if ( !strncmp(v3, "PKEY", n) )
    {
      *a3 |= 0x600u;
      return 1;
    }
    else if ( !strncmp(v3, "PKEY_CRYPTO", n) )
    {
      *a3 |= 0x200u;
      return 1;
    }
    else if ( !strncmp(v3, "PKEY_ASN1", n) )
    {
      *a3 |= 0x400u;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
