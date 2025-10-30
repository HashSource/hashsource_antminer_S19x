void __fastcall __noreturn sub_3FF08(int a1)
{
  char *v2; // r7
  char *v3; // r4
  ssize_t v4; // r8
  int v5; // r3
  _BYTE *v6; // r1
  char v7; // t1
  int v8; // r8
  _BYTE v9[256]; // [sp+0h] [bp-100h] BYREF

  v2 = (char *)&unk_4B9AE0 + 2060 * a1;
  v3 = (char *)&stru_4B9A28 + 2060 * a1;
  while ( 1 )
  {
    sub_3E11C();
    do
    {
      memset(v9, 0, sizeof(v9));
      v4 = sub_3FEA8(a1, v9, 0x100u);
      if ( v4 <= 0 )
        break;
      pthread_mutex_lock(&stru_4BBB10);
      v5 = *((_DWORD *)v3 + 558);
      v6 = &v9[-1];
      do
      {
        v7 = *++v6;
        v2[v5] = v7;
        v5 = (*((_DWORD *)v3 + 558) + 1) % 2048;
        *((_DWORD *)v3 + 558) = v5;
      }
      while ( v6 != &v9[v4 - 1] );
      v8 = v4 + *((_DWORD *)v3 + 560);
      *((_DWORD *)v3 + 560) = v8;
      pthread_mutex_unlock(&stru_4BBB10);
    }
    while ( 2048 - v8 > 255 );
  }
}
