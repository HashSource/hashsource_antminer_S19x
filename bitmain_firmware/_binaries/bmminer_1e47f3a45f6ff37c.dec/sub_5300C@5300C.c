int __fastcall sub_5300C(void *buf, size_t n)
{
  int v4; // r4
  ssize_t v5; // r0
  int v7; // r3
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  LOBYTE(v4) = -5;
  while ( 1 )
  {
    v5 = send(dword_B3808, buf, n, 0);
    if ( v5 )
      break;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v8, "Timeout. MES close socket");
      sub_3B6AC(3, v8, 0, *(int *)" close socket");
    }
LABEL_5:
    v4 = (unsigned __int8)(v4 - 1);
    if ( !v4 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v8, "send message to MES system fail");
        sub_3B6AC(3, v8, 0, *(int *)"ail");
      }
      return 0;
    }
  }
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v8, 0x800u, "Socket return back: %d", v5);
      sub_3B6AC(3, v8, 0, v7);
    }
    goto LABEL_5;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v8, "done");
    sub_3B6AC(3, v8, 0, (int)"done");
  }
  return 1;
}
