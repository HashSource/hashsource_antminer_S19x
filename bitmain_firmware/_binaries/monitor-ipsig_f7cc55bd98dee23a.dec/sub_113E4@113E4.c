int __fastcall sub_113E4(const void *a1)
{
  int v1; // r3

  if ( sendto(dword_220A8, a1, 0xAu, 0, (const struct sockaddr *)&word_220E8, 0x10u) >= 0 )
    printf("send ack OK!\n ");
  else
    printf("send error....");
  return v1;
}
