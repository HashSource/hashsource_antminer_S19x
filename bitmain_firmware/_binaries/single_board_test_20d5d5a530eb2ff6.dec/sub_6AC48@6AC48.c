int __fastcall sub_6AC48(int a1, const void *a2, size_t a3)
{
  ssize_t v4; // r0
  ssize_t v5; // r7
  char v7[52]; // [sp+0h] [bp-34h] BYREF

  if ( a1 <= 0 )
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : Socket error %d\n", "send_nonce", a1);
    snprintf(byte_65C244, 0x100u, "Socket error %d", a1);
    return sub_3CC5C((int)byte_65C244, v7);
  }
  else
  {
    v4 = send(a1, a2, a3, 0);
    v5 = v4;
    if ( v4 )
    {
      if ( v4 < 0 )
      {
        sub_1E938(v7, 0x30u);
        printf("%s ", v7);
        printf("%s : Socket return back: %d\n", "send_nonce", v5);
        snprintf(byte_65C444, 0x100u, "Socket return back: %d", v5);
        sub_3CC5C((int)byte_65C444, v7);
      }
    }
    else
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf("%s : Timeout. MES close socket\n", "send_nonce");
      strcpy(byte_65C344, "Timeout. MES close socket");
      sub_3CC5C((int)byte_65C344, v7);
    }
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : Socket send len: %d\n", "send_nonce", v5);
    snprintf(byte_65C544, 0x100u, "Socket send len: %d", v5);
    return sub_3CC5C((int)byte_65C544, v7);
  }
}
