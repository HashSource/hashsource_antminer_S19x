void __fastcall sub_B3AA0(struct addrinfo *a1)
{
  struct addrinfo *v1; // r4
  struct addrinfo *ai_next; // r6
  struct addrinfo *v3; // r0

  if ( a1 )
  {
    v1 = a1;
    if ( a1->ai_family == 1 )
    {
      do
      {
        ai_next = v1->ai_next;
        CRYPTO_free(v1->ai_addr, "crypto/bio/b_addr.c", 440);
        v3 = v1;
        v1 = ai_next;
        CRYPTO_free(v3, "crypto/bio/b_addr.c", 441);
      }
      while ( ai_next );
    }
    else
    {
      sub_16354(a1);
    }
  }
}
