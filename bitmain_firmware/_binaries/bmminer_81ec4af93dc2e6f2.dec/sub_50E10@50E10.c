int __fastcall sub_50E10(void *buf, size_t n)
{
  int v4; // r4
  ssize_t v5; // r0
  int v7; // r3
  char v8[2048]; // [sp+0h] [bp-800h] BYREF

  LOBYTE(v4) = -5;
  do
  {
    while ( 1 )
    {
      v5 = send(dword_B03A0, buf, n, 0);
      if ( v5 )
      {
        if ( v5 >= 0 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(v8, "done");
            sub_3AF5C(3, v8, 0, (int)"done");
          }
          return 1;
        }
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(v8, 0x800u, "Socket return back: %d", v5);
          sub_3AF5C(3, v8, 0, v7);
        }
        goto LABEL_9;
      }
      if ( (unsigned int)off_AFC24 > 3 )
        break;
LABEL_9:
      v4 = (unsigned __int8)(v4 - 1);
      if ( !v4 )
        goto LABEL_10;
    }
    strcpy(v8, "Timeout. MES close socket");
    sub_3AF5C(3, v8, 0, *(int *)" close socket");
    v4 = (unsigned __int8)(v4 - 1);
  }
  while ( v4 );
LABEL_10:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v8, "send message to MES system fail");
    sub_3AF5C(3, v8, 0, *(int *)"ail");
  }
  return 0;
}
